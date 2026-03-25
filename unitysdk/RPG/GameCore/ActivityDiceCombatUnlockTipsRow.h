#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICECOMBATUNLOCKTIPSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA9660)
#define RPG_GAMECORE_ACTIVITYDICECOMBATUNLOCKTIPSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA97E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatUnlockTipsRow_TypeDefinitionIndex = 10529;

	class ActivityDiceCombatUnlockTipsRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ConditionType UnlockType; // 0x10
		::RPG::Client::TextID UnlockTips; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATUNLOCKTIPSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATUNLOCKTIPSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
