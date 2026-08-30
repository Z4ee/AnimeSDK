#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { class IGroup; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1EECF130)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1EECE870)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EECE8D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1EECE880)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1EECF7A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONGROUPCREATED_OFFSET UNITYSDK_OFFSET(0x1EECF940)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EECF9E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECE8E0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int ContextObserver_TypeDefinitionIndex = 9998;

	class ContextObserver : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* _entityBehaviourPool; // 0x10
		::UnityEngine::GameObject* _gameObject; // 0x18
		::Entitas::IContext* _context; // 0x20
		::System::Collections::Generic::List_1<::Entitas::IGroup*>* _groups; // 0x28
		::System::Text::StringBuilder* _toStringBuilder; // 0x30

		::System::Void _ctor(::Entitas::IContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER__CTOR_OFFSET))(this, a1);
		}

		::Entitas::IContext* get_context()
		{
			return ((::Entitas::IContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_CONTEXT_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IGroup*>* get_groups()
		{
			return ((::Il2CppArray<::Entitas::IGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GROUPS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_DEACTIVATE_OFFSET))(this);
		}

		::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONENTITYCREATED_OFFSET))(this, a1, a2);
		}

		::System::Void onGroupCreated(::Entitas::IContext* a1, ::Entitas::IGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONGROUPCREATED_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_TOSTRING_OFFSET))(this);
		}
	};
}
