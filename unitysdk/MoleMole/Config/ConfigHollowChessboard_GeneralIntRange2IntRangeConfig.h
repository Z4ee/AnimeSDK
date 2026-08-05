#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALINTRANGE2INTRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11471F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_GeneralIntRange2IntRangeConfig_TypeDefinitionIndex = 59260;

	class ConfigHollowChessboard_GeneralIntRange2IntRangeConfig : public ::System::Object
	{
	public:
		::MoleMole::Vector2Int InputRange; // 0x10
		::MoleMole::Vector2Int OutputRange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALINTRANGE2INTRANGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
