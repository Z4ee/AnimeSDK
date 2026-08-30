#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_GET_AVATARS_OFFSET UNITYSDK_OFFSET(0xC9EF910)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0xC9EF900)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_METHOD_5_EA814E2C09B7783E_OFFSET UNITYSDK_OFFSET(0xC9EF9B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_SET_AVATARS_OFFSET UNITYSDK_OFFSET(0xC9EF950)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EFB60)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0xC9EFBA0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___REFRESH_B__9_1_OFFSET UNITYSDK_OFFSET(0xC9EFBC0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeAvatarLineupSlotsControl_TypeDefinitionIndex = 80087;

	class ChallengeAvatarLineupSlotsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::PrefabLoadMeta* _PrefabSlot; // 0x18
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl* _ListSlot; // 0x20
		::UnityEngine::Events::UnityEvent* _OnClick_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* KMDPIALJFHP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* get_OnClick()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_GET_ONCLICK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* get_Avatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_GET_AVATARS_OFFSET))(this);
		}

		::System::Void set_Avatars(::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_SET_AVATARS_OFFSET))(this, a1);
		}

		::System::Void Method_5_EA814E2C09B7783E(::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL_METHOD_5_EA814E2C09B7783E_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* __Refresh_b__9_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___REFRESH_B__9_0_OFFSET))(this);
		}

		::System::Action* __Refresh_b__9_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEAVATARLINEUPSLOTSCONTROL___REFRESH_B__9_1_OFFSET))(this, a1, a2);
		}
	};
}
