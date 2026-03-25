#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x975CE70)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x975D290)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x975D1E0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDSWITHNAMES_OFFSET UNITYSDK_OFFSET(0x975E0F0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x975D740)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_OFFSET UNITYSDK_OFFSET(0x975D340)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTRENDERCHILDWITHNAME_OFFSET UNITYSDK_OFFSET(0x975DAD0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_REMOVEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0x975D090)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET UNITYSDK_OFFSET(0x975CC60)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x975CB20)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x975CBC0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x975E4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectExtensions_TypeDefinitionIndex = 59645;

	class GameObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet__transformCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(GameObjectExtensions_TypeDefinitionIndex)->GetStaticField(0xF6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void SafeSetActive(::UnityEngine::GameObject* go, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET))(go, value, outputError);
		}

		static ::System::Void SafeSetLightWeightActive(::UnityEngine::GameObject* go, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET))(go, value, outputError);
		}

		static ::System::Void SafeSetActiveByScale(::UnityEngine::GameObject* go, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET))(go, value, outputError);
		}

		static ::System::Void AddTrigger(::UnityEngine::GameObject* pTargetGameObject, ::UnityEngine::EventSystems::EventTriggerType eventType, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_ADDTRIGGER_OFFSET))(pTargetGameObject, eventType, callback);
		}

		static ::System::Void RemoveAllTrigger(::UnityEngine::GameObject* pTargetGameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_REMOVEALLTRIGGER_OFFSET))(pTargetGameObject);
		}

		static ::System::Void DestroyChildren(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDREN_OFFSET))(go);
		}

		static ::System::Void DestroyChildrenImmediate(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET))(go);
		}

		static ::UnityEngine::GameObject* FindFirstChildWithName(::UnityEngine::GameObject* go, ::System::String* childName)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_OFFSET))(go, childName);
		}

		static ::UnityEngine::Transform* FindFirstChildWithName_1(::UnityEngine::Transform* trans, ::System::String* childName)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_1_OFFSET))(trans, childName);
		}

		static ::UnityEngine::Renderer* FindFirstRenderChildWithName(::UnityEngine::GameObject* trans, ::System::String* childName)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTRENDERCHILDWITHNAME_OFFSET))(trans, childName);
		}

		static ::System::Void FindFirstChildsWithNames(::UnityEngine::Transform* trans, ::System::Collections::Generic::List_1<::System::String*>* childNames, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* result)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDSWITHNAMES_OFFSET))(trans, childNames, result);
		}
	};
}
