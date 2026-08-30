#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_RTPROPERTYMODIFYDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x15CB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPropertyModifyData_TypeDefinitionIndex = 53946;

	struct alignas(8) RtPropertyModifyData
	{
		::RPG::GameCore::RtAbilityProperty PropertyType; // 0x10
		::RPG::GameCore::FixPoint ModifyValue; // 0x18

		::System::Boolean Equals(::RPG::GameCore::RtPropertyModifyData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROPERTYMODIFYDATA_EQUALS_OFFSET))(this, a1);
		}
	};
}
