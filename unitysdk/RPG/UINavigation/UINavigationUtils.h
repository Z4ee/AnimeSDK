#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET UNITYSDK_OFFSET(0x1B51BF40)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0x1B51BEE0)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET UNITYSDK_OFFSET(0x1B511750)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET UNITYSDK_OFFSET(0x1B51C110)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B51C000)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 52040;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone(::UnityEngine::Transform* a1)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET))(a1);
		}

		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone_1(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET))(a1);
		}

		static ::System::Boolean IsNavigableButton(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGABLEBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean IsGameObjectValid(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET))(a1);
		}

		static ::System::Boolean IsBehaviourValid(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET))(a1);
		}
	};
}
