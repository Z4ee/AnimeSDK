#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_METHOD_4_29CD0D465EA2DD37_OFFSET UNITYSDK_OFFSET(0x1CD60140)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_METHOD_4_7B474BAB11AD0C44_OFFSET UNITYSDK_OFFSET(0x1CD60100)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD60130)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_TimedState_TypeDefinitionIndex = 10294;

	class RoadRashGameModifier_TimedState : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B474BAB11AD0C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_TimedState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_TimedState*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_METHOD_4_7B474BAB11AD0C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29CD0D465EA2DD37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_TimedState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_TimedState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_TIMEDSTATE_METHOD_4_29CD0D465EA2DD37_OFFSET))(a1, a2);
		}
	};
}
