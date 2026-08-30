#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace Entitas { class ContextInfo; }
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class EntityEvent; }
namespace Entitas { class IAERC; }
namespace Entitas { class IComponent; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define ENTITAS_ENTITY_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16533E20)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x165336E0)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x165337A0)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x16533860)
#define ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x165339E0)
#define ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x16533920)
#define ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x16535150)
#define ENTITAS_ENTITY_CREATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16535070)
#define ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x16533CB0)
#define ENTITAS_ENTITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x165355F0)
#define ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET UNITYSDK_OFFSET(0x16534DC0)
#define ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET UNITYSDK_OFFSET(0x16534A30)
#define ENTITAS_ENTITY_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x16534C60)
#define ENTITAS_ENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16534B20)
#define ENTITAS_ENTITY_GET_AERC_OFFSET UNITYSDK_OFFSET(0x16533AF0)
#define ENTITAS_ENTITY_GET_COMPONENTPOOLS_OFFSET UNITYSDK_OFFSET(0x16533AD0)
#define ENTITAS_ENTITY_GET_CONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x16533AE0)
#define ENTITAS_ENTITY_GET_CREATIONINDEX_OFFSET UNITYSDK_OFFSET(0x16533AB0)
#define ENTITAS_ENTITY_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x16533AC0)
#define ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x165351D0)
#define ENTITAS_ENTITY_GET_TOTALCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x16533AA0)
#define ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16534F80)
#define ENTITAS_ENTITY_HASCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x16534F10)
#define ENTITAS_ENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x165341C0)
#define ENTITAS_ENTITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16533B80)
#define ENTITAS_ENTITY_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x16535680)
#define ENTITAS_ENTITY_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x16533CA0)
#define ENTITAS_ENTITY_RELEASE_OFFSET UNITYSDK_OFFSET(0x165353D0)
#define ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x16534FF0)
#define ENTITAS_ENTITY_REMOVEALLONENTITYRELEASEDHANDLERS_OFFSET UNITYSDK_OFFSET(0x16535700)
#define ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x165342F0)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x16533740)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x16533800)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x165338C0)
#define ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x16533A40)
#define ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x16533980)
#define ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x16534620)
#define ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET UNITYSDK_OFFSET(0x165348A0)
#define ENTITAS_ENTITY_RETAIN_OFFSET UNITYSDK_OFFSET(0x165352D0)
#define ENTITAS_ENTITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16535710)
#define ENTITAS_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16533B00)

namespace Entitas
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 9946;

	class Entity : public ::System::Object
	{
	public:
		::Entitas::EntityComponentChanged* OnComponentAdded; // 0x10
		::Entitas::EntityComponentChanged* OnComponentRemoved; // 0x18
		::Entitas::ContextInfo* _contextInfo; // 0x20
		::Il2CppArray<::Entitas::IComponent*>* _components; // 0x28
		::Entitas::EntityEvent* OnEntityReleased; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _indexBuffer; // 0x38
		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* _componentPools; // 0x40
		::Il2CppArray<::System::Int32>* _componentIndicesCache; // 0x48
		::System::Text::StringBuilder* _toStringBuilder; // 0x50
		::Entitas::EntityComponentReplaced* OnComponentReplaced; // 0x58
		::Entitas::EntityEvent* OnDestroyEntity; // 0x60
		::Entitas::IAERC* _aerc; // 0x68
		::Il2CppArray<::Entitas::IComponent*>* _componentsCache; // 0x70
		::System::Collections::Generic::List_1<::Entitas::IComponent*>* _componentBuffer; // 0x78
		::System::String* _toStringCache; // 0x80
		::System::Int32 _creationIndex; // 0x88
		::System::Boolean _isEnabled; // 0x8C
		::System::Int32 _totalComponents; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY__CTOR_OFFSET))(this);
		}

		::System::Void add_OnComponentAdded(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentAdded(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnComponentRemoved(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentRemoved(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnComponentReplaced(::Entitas::EntityComponentReplaced* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentReplaced(::Entitas::EntityComponentReplaced* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET))(this, a1);
		}

		::System::Void add_OnEntityReleased(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEntityReleased(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void add_OnDestroyEntity(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Void remove_OnDestroyEntity(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Int32 get_totalComponents()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_TOTALCOMPONENTS_OFFSET))(this);
		}

		::System::Int32 get_creationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_CREATIONINDEX_OFFSET))(this);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_ISENABLED_OFFSET))(this);
		}

		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* get_componentPools()
		{
			return ((::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_COMPONENTPOOLS_OFFSET))(this);
		}

		::Entitas::ContextInfo* get_contextInfo()
		{
			return ((::Entitas::ContextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_CONTEXTINFO_OFFSET))(this);
		}

		::Entitas::IAERC* get_aerc()
		{
			return ((::Entitas::IAERC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_AERC_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* a3, ::Entitas::ContextInfo* a4, ::Entitas::IAERC* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>*, ::Entitas::ContextInfo*, ::Entitas::IAERC*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_INITIALIZE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Entitas::ContextInfo* createDefaultContextInfo()
		{
			return ((::Entitas::ContextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET))(this);
		}

		::System::Void Reactivate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REACTIVATE_OFFSET))(this, a1);
		}

		::System::Void AddComponent(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADDCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveComponent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET))(this, a1);
		}

		::System::Void ReplaceComponent(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void replaceComponent_1(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::Entitas::IComponent* GetComponent(::System::Int32 a1)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Entitas::IComponent*>* GetComponents()
		{
			return ((::Il2CppArray<::Entitas::IComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetComponentIndices()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET))(this);
		}

		::System::Boolean HasComponent(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean HasComponents(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyComponent(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void RemoveAllComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::Entitas::IComponent*>* GetComponentPool(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET))(this, a1);
		}

		::Entitas::IComponent* CreateComponent(::System::Int32 a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_OFFSET))(this, a1, a2);
		}

		::Entitas::IComponent* CreateComponent_1(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RETAIN_OFFSET))(this, a1);
		}

		::System::Void Release(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_DESTROY_OFFSET))(this);
		}

		::System::Void InternalDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_INTERNALDESTROY_OFFSET))(this);
		}

		::System::Void RemoveAllOnEntityReleasedHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVEALLONENTITYRELEASEDHANDLERS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_TOSTRING_OFFSET))(this);
		}
	};
}
