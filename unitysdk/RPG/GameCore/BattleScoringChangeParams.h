#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE5CBA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringChangeParams_TypeDefinitionIndex = 58524;

	class BattleScoringChangeParams : public ::System::Object
	{
	public:
		::System::UInt32 ScoringId; // 0x10
		::System::Boolean IsChallenge; // 0x14
		::System::Single OldScore; // 0x18
		::System::Single DisplayModifyValue; // 0x1C
		::System::Single DisplayOldScore; // 0x20
		::System::Single DisplayNewScore; // 0x24
		::System::Single ModifyValue; // 0x28
		::RPG::GameCore::ScoringShowType ShowType; // 0x2C
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x30
		::System::Single NewScore; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
