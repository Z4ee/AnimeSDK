#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1FFED0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FFF00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_0_OFFSET UNITYSDK_OFFSET(0xB1FFF10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_1_OFFSET UNITYSDK_OFFSET(0xB2000A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_2_OFFSET UNITYSDK_OFFSET(0xB200020)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule___c_TypeDefinitionIndex = 57894;

	class ActivityStrongChallengeModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityStrongChallengeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityStrongChallengeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5AEA0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5AEA8);
		}
		static ::System::Func_2<::RPG::Client::ActivityStrongChallengeStageData*, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityStrongChallengeStageData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5AEB0);
		}
		static ::System::Func_2<::RPG::Client::ActivityStrongChallengeStageData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityStrongChallengeStageData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStrongChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5AEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshFinishedQuestIDs_b__16_0(::RPG::Client::ActivityStrongChallengeStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshFinishedQuestIDs_b__16_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_2_OFFSET))(this, a1);
		}

		::System::UInt32 __RefreshFinishedQuestIDs_b__16_1(::RPG::Client::ActivityStrongChallengeStageData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C___REFRESHFINISHEDQUESTIDS_B__16_1_OFFSET))(this, a1);
		}
	};
}
