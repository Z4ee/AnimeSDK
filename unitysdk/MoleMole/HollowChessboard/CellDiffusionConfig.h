#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/CellDiffusionConfigParas.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x144DB640)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int CellDiffusionConfig_TypeDefinitionIndex = 53617;

	class CellDiffusionConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::MoleMole::HollowChessboard::CellDiffusionConfigParas paras; // 0x58
		::System::Single updateThreshold; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CELLDIFFUSIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
