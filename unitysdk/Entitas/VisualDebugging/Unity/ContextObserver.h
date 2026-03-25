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

#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x11A88900)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x11A88400)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11A884C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x11A88410)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x11A88B50)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONGROUPCREATED_OFFSET UNITYSDK_OFFSET(0x11A88C70)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A88CD0)
#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A884D0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int ContextObserver_TypeDefinitionIndex = 9745;

	class ContextObserver : public ::System::Object
	{
	public:
		::Entitas::IContext* _context; // 0x10
		::UnityEngine::GameObject* _gameObject; // 0x18
		::System::Text::StringBuilder* _toStringBuilder; // 0x20
		::System::Collections::Generic::List_1<::Entitas::IGroup*>* _groups; // 0x28
		::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* _entityBehaviourPool; // 0x30

		::System::Void _ctor(::Entitas::IContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER__CTOR_OFFSET))(this, context);
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

		::System::Void onEntityCreated(::Entitas::IContext* context, ::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONENTITYCREATED_OFFSET))(this, context, entity);
		}

		::System::Void onGroupCreated(::Entitas::IContext* context, ::Entitas::IGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_ONGROUPCREATED_OFFSET))(this, context, group);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVER_TOSTRING_OFFSET))(this);
		}
	};
}
