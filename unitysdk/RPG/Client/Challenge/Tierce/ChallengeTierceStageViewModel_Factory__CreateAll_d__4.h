#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel_Factory; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18778E20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18779050)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18778FE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187790D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18779040)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18778FF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18778E10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x18778DF0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageViewModel_Factory__CreateAll_d__4_TypeDefinitionIndex = 76614;

	class ChallengeTierceStageViewModel_Factory__CreateAll_d__4 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* __2__current; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* __4__this; // 0x18
		::Class_1_06E38C65842C3B24* tierce; // 0x20
		::Class_1_06E38C65842C3B24* __3__tierce; // 0x28
		::System::Int32 _i_5__2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* System_Collections_Generic_IEnumerator_RPG_Client_Challenge_Tierce_ChallengeTierceStageViewModel__get_Current()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>* System_Collections_Generic_IEnumerable_RPG_Client_Challenge_Tierce_ChallengeTierceStageViewModel__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
