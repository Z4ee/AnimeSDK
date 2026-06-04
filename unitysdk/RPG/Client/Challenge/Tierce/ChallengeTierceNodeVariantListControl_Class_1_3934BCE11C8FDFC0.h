#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0_GET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xB4CF0A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0_GET_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xB4CF090)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CEF10)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_TypeDefinitionIndex = 74184;

	class ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0 : public ::System::Object
	{
	public:
		::System::Func_1<::UnityEngine::GameObject*>* _CreateItem_k__BackingField; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766* _BindItem_k__BackingField; // 0x18
		::System::Int32 Field_1_2; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Func_1<::UnityEngine::GameObject*>* a2, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_1<::UnityEngine::GameObject*>*, ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Func_1<::UnityEngine::GameObject*>* get_CreateItem()
		{
			return ((::System::Func_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0_GET_CREATEITEM_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766* get_BindItem()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0_Class_3_B01F7166D09AE766*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_CLASS_1_3934BCE11C8FDFC0_GET_BINDITEM_OFFSET))(this);
		}
	};
}
