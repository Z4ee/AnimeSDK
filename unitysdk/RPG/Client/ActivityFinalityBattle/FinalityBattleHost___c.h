#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;

#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3F0D70)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F0DA0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC3F0DB0)

namespace RPG::Client::ActivityFinalityBattle
{
	inline static constexpr unsigned int FinalityBattleHost___c_TypeDefinitionIndex = 82060;

	class FinalityBattleHost___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityFinalityBattle::FinalityBattleHost___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityFinalityBattle::FinalityBattleHost___c**)Il2CppClass::FromTypeDefinitionIndex(FinalityBattleHost___c_TypeDefinitionIndex)->GetStaticField(0x15730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C__CTOR_OFFSET))(this);
		}

		::Class_1_C6F4C4ABEDB8B5E9* __cctor_b__0_0()
		{
			return ((::Class_1_C6F4C4ABEDB8B5E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C___CCTOR_B__0_0_OFFSET))(this);
		}
	};
}
