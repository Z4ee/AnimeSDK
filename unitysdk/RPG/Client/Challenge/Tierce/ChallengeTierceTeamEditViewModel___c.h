#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916A609943E0EE80_2;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C05A10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C05A50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__SUBMITCHANGE_B__28_1_OFFSET UNITYSDK_OFFSET(0x18C05BC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__TRYSTARTCHALLENGE_B__27_1_OFFSET UNITYSDK_OFFSET(0x18C05B50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C___EXPORTPLAN_B__26_0_OFFSET UNITYSDK_OFFSET(0x18C05A60)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex = 80303;

	class ChallengeTierceTeamEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>** StaticGet___9__27_1()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1EB60);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1EB68);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::Class_1_916A609943E0EE80_2*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::Class_1_916A609943E0EE80_2*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1EB70);
		}
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1EB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::Class_1_916A609943E0EE80_2* __ExportPlan_b__26_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::Class_1_916A609943E0EE80_2*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C___EXPORTPLAN_B__26_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _TryStartChallenge_b__27_1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__TRYSTARTCHALLENGE_B__27_1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _SubmitChange_b__28_1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__SUBMITCHANGE_B__28_1_OFFSET))(this);
		}
	};
}
