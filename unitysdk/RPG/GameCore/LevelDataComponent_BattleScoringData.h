#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_BATTLESCORINGDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_BattleScoringData_TypeDefinitionIndex = 57752;

	struct alignas(8) LevelDataComponent_BattleScoringData
	{
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::FixPoint DisplayValue; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_BATTLESCORINGDATA_TOSTRING_OFFSET))(this);
		}
	};
}
