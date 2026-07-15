#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x12173590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringChangeParams_TypeDefinitionIndex = 55900;

	class BattleScoringChangeParams : public ::System::Object
	{
	public:
		::System::Boolean IsChallenge; // 0x10
		::System::Single DisplayNewScore; // 0x14
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::System::Single NewScore; // 0x1C
		::System::Single OldScore; // 0x20
		::System::Single ModifyValue; // 0x24
		::RPG::GameCore::ScoringShowType ShowType; // 0x28
		::System::Single DisplayOldScore; // 0x2C
		::System::UInt32 ScoringId; // 0x30
		::System::Single DisplayModifyValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
