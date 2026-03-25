#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xAB0D670)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET UNITYSDK_OFFSET(0xAB07150)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET UNITYSDK_OFFSET(0xAB0D7F0)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGATIONBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0D730)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 41837;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone(::UnityEngine::GameObject* go)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET))(go);
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
