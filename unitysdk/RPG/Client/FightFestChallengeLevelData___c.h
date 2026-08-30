#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD04F160)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD04F1A0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET UNITYSDK_OFFSET(0xD04F1B0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET UNITYSDK_OFFSET(0xD04F220)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestChallengeLevelData___c_TypeDefinitionIndex = 64236;

	class FightFestChallengeLevelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0xE570);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0xE578);
		}
		static ::RPG::Client::FightFestChallengeLevelData___c** StaticGet___9()
		{
			return (::RPG::Client::FightFestChallengeLevelData___c**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0xE580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasRewardCanTake_b__27_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsFinishAllQuest_b__29_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET))(this, a1);
		}
	};
}
