#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCD386B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringChangeParams_TypeDefinitionIndex = 54675;

	class BattleScoringChangeParams : public ::System::Object
	{
	public:
		::System::UInt32 ScoringId; // 0x10
		::System::Single ModifyValue; // 0x14
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::System::Single OldScore; // 0x1C
		::System::Single DisplayNewScore; // 0x20
		::RPG::GameCore::ScoringShowType ShowType; // 0x24
		::System::Single DisplayModifyValue; // 0x28
		::System::Boolean IsChallenge; // 0x2C
		::System::Single DisplayOldScore; // 0x30
		::System::Single NewScore; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
