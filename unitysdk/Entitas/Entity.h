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

#define ENTITAS_ENTITY_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A83EE0)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x11A83780)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x11A83860)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x11A83920)
#define ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x11A83AA0)
#define ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x11A839E0)
#define ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x11A85D00)
#define ENTITAS_ENTITY_CREATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A85C80)
#define ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x11A83D70)
#define ENTITAS_ENTITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A86590)
#define ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET UNITYSDK_OFFSET(0x11A85A00)
#define ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET UNITYSDK_OFFSET(0x11A85620)
#define ENTITAS_ENTITY_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x11A85870)
#define ENTITAS_ENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A85740)
#define ENTITAS_ENTITY_GET_AERC_OFFSET UNITYSDK_OFFSET(0x11A83BB0)
#define ENTITAS_ENTITY_GET_COMPONENTPOOLS_OFFSET UNITYSDK_OFFSET(0x11A83B90)
#define ENTITAS_ENTITY_GET_CONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x11A83BA0)
#define ENTITAS_ENTITY_GET_CREATIONINDEX_OFFSET UNITYSDK_OFFSET(0x11A83B70)
#define ENTITAS_ENTITY_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x11A83B80)
#define ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x11A85D80)
#define ENTITAS_ENTITY_GET_TOTALCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x11A83B60)
#define ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A85B90)
#define ENTITAS_ENTITY_HASCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x11A85B10)
#define ENTITAS_ENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A84270)
#define ENTITAS_ENTITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11A83C40)
#define ENTITAS_ENTITY_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x11A86610)
#define ENTITAS_ENTITY_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x11A83D60)
#define ENTITAS_ENTITY_RELEASE_OFFSET UNITYSDK_OFFSET(0x11A85EE0)
#define ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x11A85C10)
#define ENTITAS_ENTITY_REMOVEALLONENTITYRELEASEDHANDLERS_OFFSET UNITYSDK_OFFSET(0x11A866C0)
#define ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A84930)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x11A837F0)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x11A838C0)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x11A83980)
#define ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x11A83B00)
#define ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x11A83A40)
#define ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x11A84C30)
#define ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A84E50)
#define ENTITAS_ENTITY_RETAIN_OFFSET UNITYSDK_OFFSET(0x11A85E30)
#define ENTITAS_ENTITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A866D0)
#define ENTITAS_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x11A83BC0)

namespace Entitas
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 9693;

	class Entity : public ::System::Object
	{
	public:
		::Entitas::EntityEvent* OnEntityReleased; // 0x10
		::System::String* _toStringCache; // 0x18
		::Entitas::IAERC* _aerc; // 0x20
		::Il2CppArray<::Entitas::IComponent*>* _componentsCache; // 0x28
		::Entitas::EntityComponentChanged* OnComponentRemoved; // 0x30
		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* _componentPools; // 0x38
		::Entitas::EntityEvent* OnDestroyEntity; // 0x40
		::Entitas::ContextInfo* _contextInfo; // 0x48
		::System::Text::StringBuilder* _toStringBuilder; // 0x50
		::System::Collections::Generic::List_1<::Entitas::IComponent*>* _componentBuffer; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* _indexBuffer; // 0x60
		::Entitas::EntityComponentReplaced* OnComponentReplaced; // 0x68
		::Il2CppArray<::Entitas::IComponent*>* _components; // 0x70
		::Il2CppArray<::System::Int32>* _componentIndicesCache; // 0x78
		::Entitas::EntityComponentChanged* OnComponentAdded; // 0x80
		::System::Int32 _totalComponents; // 0x88
		::System::Boolean _isEnabled; // 0x8C
		::System::Int32 _creationIndex; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY__CTOR_OFFSET))(this);
		}

		::System::Void add_OnComponentAdded(::Entitas::EntityComponentChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET))(this, value);
		}

		::System::Void remove_OnComponentAdded(::Entitas::EntityComponentChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET))(this, value);
		}

		::System::Void add_OnComponentRemoved(::Entitas::EntityComponentChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_OnComponentRemoved(::Entitas::EntityComponentChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET))(this, value);
		}

		::System::Void add_OnComponentReplaced(::Entitas::EntityComponentReplaced* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET))(this, value);
		}

		::System::Void remove_OnComponentReplaced(::Entitas::EntityComponentReplaced* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET))(this, value);
		}

		::System::Void add_OnEntityReleased(::Entitas::EntityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET))(this, value);
		}

		::System::Void remove_OnEntityReleased(::Entitas::EntityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET))(this, value);
		}

		::System::Void add_OnDestroyEntity(::Entitas::EntityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET))(this, value);
		}

		::System::Void remove_OnDestroyEntity(::Entitas::EntityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET))(this, value);
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

		::System::Void Initialize(::System::Int32 creationIndex, ::System::Int32 totalComponents, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* componentPools, ::Entitas::ContextInfo* contextInfo, ::Entitas::IAERC* aerc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>*, ::Entitas::ContextInfo*, ::Entitas::IAERC*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_INITIALIZE_OFFSET))(this, creationIndex, totalComponents, componentPools, contextInfo, aerc);
		}

		::Entitas::ContextInfo* createDefaultContextInfo()
		{
			return ((::Entitas::ContextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET))(this);
		}

		::System::Void Reactivate(::System::Int32 creationIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REACTIVATE_OFFSET))(this, creationIndex);
		}

		::System::Void AddComponent(::System::Int32 index, ::Entitas::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADDCOMPONENT_OFFSET))(this, index, component);
		}

		::System::Void RemoveComponent(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET))(this, index);
		}

		::System::Void ReplaceComponent(::System::Int32 index, ::Entitas::IComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET))(this, index, component);
		}

		::System::Void replaceComponent_1(::System::Int32 index, ::Entitas::IComponent* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET))(this, index, replacement);
		}

		::Entitas::IComponent* GetComponent(::System::Int32 index)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENT_OFFSET))(this, index);
		}

		::Il2CppArray<::Entitas::IComponent*>* GetComponents()
		{
			return ((::Il2CppArray<::Entitas::IComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetComponentIndices()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET))(this);
		}

		::System::Boolean HasComponent(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENT_OFFSET))(this, index);
		}

		::System::Boolean HasComponents(::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENTS_OFFSET))(this, indices);
		}

		::System::Boolean HasAnyComponent(::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET))(this, indices);
		}

		::System::Void RemoveAllComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::Entitas::IComponent*>* GetComponentPool(::System::Int32 index)
		{
			return ((::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET))(this, index);
		}

		::Entitas::IComponent* CreateComponent(::System::Int32 index, ::System::RuntimeTypeHandle type)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_OFFSET))(this, index, type);
		}

		::Entitas::IComponent* CreateComponent_1(::System::Int32 index, ::System::Type* type)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET))(this, index, type);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RETAIN_OFFSET))(this, owner);
		}

		::System::Void Release(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RELEASE_OFFSET))(this, owner);
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
