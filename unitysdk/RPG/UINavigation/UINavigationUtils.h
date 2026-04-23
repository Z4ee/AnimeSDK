#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET UNITYSDK_OFFSET(0xB87FD40)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xB87FCE0)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET UNITYSDK_OFFSET(0xB87D2B0)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET UNITYSDK_OFFSET(0xB87FED0)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGATIONBUTTON_OFFSET UNITYSDK_OFFSET(0xB87FE00)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 47808;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone(::UnityEngine::Transform* trans)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET))(trans);
		}

		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone_1(::UnityEngine::GameObject* go)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET))(go);
		}

		static ::System::Boolean IsNavigationButton(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGATIONBUTTON_OFFSET))(go);
		}

		static ::System::Boolean IsGameObjectValid(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET))(go);
		}

		static ::System::Boolean IsBehaviourValid(::UnityEngine::Behaviour* behaviour)
		{
			return ((::System::Boolean(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET))(behaviour);
		}
	};
}
