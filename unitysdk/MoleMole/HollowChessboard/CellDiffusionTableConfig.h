#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class CellDiffusionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONTABLECONFIG_GETCELLDIFFUSIONCONFIGCONFIG_OFFSET UNITYSDK_OFFSET(0x182F1530)
#define MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONTABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x182F1680)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int CellDiffusionTableConfig_TypeDefinitionIndex = 64948;

	class CellDiffusionTableConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::CellDiffusionConfig*>* CellDiffusionConfigParasMap; // 0x58
		::System::String* DefaultExpandCellDiffusionConfigParas; // 0x60
		::System::String* DefaultShrinkCellDiffusionConfigParas; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONTABLECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::CellDiffusionConfig* GetCellDiffusionConfigConfig(::System::String* key)
		{
			return ((::MoleMole::HollowChessboard::CellDiffusionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONTABLECONFIG_GETCELLDIFFUSIONCONFIGCONFIG_OFFSET))(this, key);
		}
	};
}
