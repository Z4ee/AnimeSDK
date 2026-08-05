#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ChessBoardChessAnimItemForList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x12EFCE00)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12EFCD40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFCE70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardGroupChessAnim_TypeDefinitionIndex = 80687;

	class ConfigChessboardGroupChessAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PivotCellKey; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardChessAnimItemForList*>* ChessBoardChessRandomAnimList; // 0x20
		::System::Single OverrideWaitTime; // 0x28
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x2C
		::UnityEngine::Vector2 InWaveTimeRange; // 0x30
		::System::Boolean UseSpecific; // 0x38
		::System::Boolean UseCustomPivot; // 0x39
		::MoleMole::Vector2Int RelativePos; // 0x3C
		::UnityEngine::Vector2 RadiateWaveTimeRange; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardChessAnimItemForList* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardChessAnimItemForList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}
