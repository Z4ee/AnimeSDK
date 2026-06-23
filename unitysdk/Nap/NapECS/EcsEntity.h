#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsDataCompScopeWriter.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSENTITY_ADDPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F15B0)
#define NAP_NAPECS_ECSENTITY_ADDSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1B2F0D00)
#define NAP_NAPECS_ECSENTITY_CLEARPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F19D0)
#define NAP_NAPECS_ECSENTITY_GETBIT_OFFSET UNITYSDK_OFFSET(0x1B2F2460)
#define NAP_NAPECS_ECSENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F11F0)
#define NAP_NAPECS_ECSENTITY_GETSTRUCTCOMPWRITER_OFFSET UNITYSDK_OFFSET(0x1B2F1550)
#define NAP_NAPECS_ECSENTITY_GET_ARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1B2F0510)
#define NAP_NAPECS_ECSENTITY_GET_COMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x1B2F0500)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1B2EF930)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1B2EF990)
#define NAP_NAPECS_ECSENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2EF940)
#define NAP_NAPECS_ECSENTITY_GET_ISDEBUGPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2F0240)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1B2EF9B0)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1B2EB4F0)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFCE0)
#define NAP_NAPECS_ECSENTITY_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2EFE70)
#define NAP_NAPECS_ECSENTITY_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B2F0250)
#define NAP_NAPECS_ECSENTITY_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1B2EE090)
#define NAP_NAPECS_ECSENTITY_GET_REFWORLD_OFFSET UNITYSDK_OFFSET(0x1B2EF950)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFA50)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFB40)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFD80)
#define NAP_NAPECS_ECSENTITY_GET__ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2EFF00)
#define NAP_NAPECS_ECSENTITY_GET__ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B2F02F0)
#define NAP_NAPECS_ECSENTITY_GET__ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1B2F0A70)
#define NAP_NAPECS_ECSENTITY_GET__ISVALID_OFFSET UNITYSDK_OFFSET(0x1B2F0AC0)
#define NAP_NAPECS_ECSENTITY_GET__REFWORLD_OFFSET UNITYSDK_OFFSET(0x1B2EF970)
#define NAP_NAPECS_ECSENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F1AD0)
#define NAP_NAPECS_ECSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x1B2F0520)
#define NAP_NAPECS_ECSENTITY_ISINSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1B2F0B10)
#define NAP_NAPECS_ECSENTITY_ISREMOVING_OFFSET UNITYSDK_OFFSET(0x1B2F0BF0)
#define NAP_NAPECS_ECSENTITY_ISRUNNABLE_OFFSET UNITYSDK_OFFSET(0x1B2EB590)
#define NAP_NAPECS_ECSENTITY_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x1B2F0C80)
#define NAP_NAPECS_ECSENTITY_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B2F0840)
#define NAP_NAPECS_ECSENTITY_MARKARCHETYPESINGLEDATAWRITE_OFFSET UNITYSDK_OFFSET(0x1B2EF830)
#define NAP_NAPECS_ECSENTITY_ONADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F2020)
#define NAP_NAPECS_ECSENTITY_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1B2F2420)
#define NAP_NAPECS_ECSENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B2F2210)
#define NAP_NAPECS_ECSENTITY_ONREMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2F20C0)
#define NAP_NAPECS_ECSENTITY_ONUPDATEARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1B2F1C70)
#define NAP_NAPECS_ECSENTITY_REMOVESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1B2F0E40)
#define NAP_NAPECS_ECSENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x1B2F1080)
#define NAP_NAPECS_ECSENTITY_SETBIT_OFFSET UNITYSDK_OFFSET(0x1B2F24B0)
#define NAP_NAPECS_ECSENTITY_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1B2EF9A0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFAA0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFB90)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFDD0)
#define NAP_NAPECS_ECSENTITY_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2EFF50)
#define NAP_NAPECS_ECSENTITY_SET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B2F0340)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFAB0)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFC50)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1B2EFDE0)
#define NAP_NAPECS_ECSENTITY_SET__ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1B2F01B0)
#define NAP_NAPECS_ECSENTITY_SET__ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B2F0470)
#define NAP_NAPECS_ECSENTITY_SET__ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1B2F07B0)
#define NAP_NAPECS_ECSENTITY_SET__ISVALID_OFFSET UNITYSDK_OFFSET(0x1B2F0B60)
#define NAP_NAPECS_ECSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F2520)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity_TypeDefinitionIndex = 37318;

	class EcsEntity : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_EMPTY_ENTITY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0xEE10);
		}
		::Nap::NapECS::EcsArchetype* _archetype; // 0x10
		::System::String* _entityName; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _componentList; // 0x20
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _preloadingComponentList; // 0x28
		::System::Int32 _indexInArchetype; // 0x30
		::System::Boolean _isDebugPause; // 0x34
		::System::Boolean editorFoldout; // 0x35
		::System::Byte _entityFlags; // 0x36
		::System::Byte _entityState; // 0x37
		::System::UInt32 _id; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_entityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ID_OFFSET))(this);
		}

		::Nap::NapECS::ComponentMask& get_Mask()
		{
			return ((::Nap::NapECS::ComponentMask&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_MASK_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorld* get_RefWorld()
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_REFWORLD_OFFSET))(this);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ENTITYNAME_OFFSET))(this);
		}

		::System::Void set_EntityName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ENTITYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntityOnPreReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADY_OFFSET))(this);
		}

		::System::Void set_IsEntityOnPreReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntityOnReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADY_OFFSET))(this);
		}

		::System::Void set_IsEntityOnReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntitySendReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADY_OFFSET))(this);
		}

		::System::Void set_IsEntitySendReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPAUSE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDebugPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISDEBUGPAUSE_OFFSET))(this);
		}

		::System::Boolean get_IsPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPRELOAD_OFFSET))(this);
		}

		::System::Void set_IsPreload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPRELOAD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* get_componentList()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_COMPONENTLIST_OFFSET))(this);
		}

		::Nap::NapECS::EcsArchetype* get_Archetype()
		{
			return ((::Nap::NapECS::EcsArchetype*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ARCHETYPE_OFFSET))(this);
		}

		::Nap::NapECS::EcsEntity* Init(::Nap::NapECS::EcsWorld* ecsWorld)
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_INIT_OFFSET))(this, ecsWorld);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsRemoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISREMOVING_OFFSET))(this);
		}

		::System::Boolean IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISTOBEREMOVED_OFFSET))(this);
		}

		::System::Boolean IsInStateMask(::System::Byte mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISINSTATEMASK_OFFSET))(this, mask);
		}

		::System::Void AddStateMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ADDSTATEMASK_OFFSET))(this, mask);
		}

		::System::Void RemoveStateMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_REMOVESTATEMASK_OFFSET))(this, mask);
		}

		::System::Boolean IsRunnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISRUNNABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_RESET_OFFSET))(this);
		}

		::Nap::NapECS::EcsComponent* GetComponent(::System::Int32 classID)
		{
			return ((::Nap::NapECS::EcsComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETCOMPONENT_OFFSET))(this, classID);
		}

		::Nap::NapECS::EcsDataCompScopeWriter GetStructCompWriter()
		{
			return ((::Nap::NapECS::EcsDataCompScopeWriter(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETSTRUCTCOMPWRITER_OFFSET))(this);
		}

		::System::Void AddPreloadComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ADDPRELOADCOMPONENT_OFFSET))(this, component);
		}

		::System::Void ClearPreloadComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_CLEARPRELOADCOMPONENT_OFFSET))(this);
		}

		::System::Boolean HasComponent(::System::Int32 classID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_HASCOMPONENT_OFFSET))(this, classID);
		}

		::System::Void OnUpdateArchetype(::Nap::NapECS::ComponentMask& inNewCompMask, ::System::Boolean needSortCompList, ::System::Boolean needClearCompList)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONUPDATEARCHETYPE_OFFSET))(this, inNewCompMask, needSortCompList, needClearCompList);
		}

		::System::Void OnAddComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONADDCOMPONENT_OFFSET))(this, component);
		}

		::System::Void OnRemoveComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONREMOVECOMPONENT_OFFSET))(this, component);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONDESTROY_OFFSET))(this);
		}

		::System::Void MarkArchetypeSingleDataWrite(::System::Boolean write)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_MARKARCHETYPESINGLEDATAWRITE_OFFSET))(this, write);
		}

		::System::Void OnClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONCLEAN_OFFSET))(this);
		}

		static ::System::Boolean GetBit(::System::Byte flags, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETBIT_OFFSET))(flags, index);
		}

		static ::System::Void SetBit(::System::Byte& flags, ::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SETBIT_OFFSET))(flags, index, value);
		}

		::System::Boolean get__isPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISPAUSE_OFFSET))(this);
		}

		::System::Void set__isPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISPAUSE_OFFSET))(this, value);
		}

		::System::Boolean get__isPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISPRELOAD_OFFSET))(this);
		}

		::System::Void set__isPreload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISPRELOAD_OFFSET))(this, value);
		}

		::System::Boolean get__isEntityOnReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISENTITYONREADY_OFFSET))(this);
		}

		::System::Void set__isEntityOnReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISENTITYONREADY_OFFSET))(this, value);
		}

		::System::Boolean get__isStateDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISSTATEDIRTY_OFFSET))(this);
		}

		::System::Void set__isStateDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISSTATEDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get__isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISVALID_OFFSET))(this);
		}

		::System::Void set__isValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISVALID_OFFSET))(this, value);
		}

		::System::Boolean get__isEntitySendReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISENTITYSENDREADY_OFFSET))(this);
		}

		::System::Void set__isEntitySendReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISENTITYSENDREADY_OFFSET))(this, value);
		}

		::System::Boolean get__isEntityOnPreReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__ISENTITYONPREREADY_OFFSET))(this);
		}

		::System::Void set__isEntityOnPreReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET__ISENTITYONPREREADY_OFFSET))(this, value);
		}

		::Nap::NapECS::EcsWorld* get__refWorld()
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET__REFWORLD_OFFSET))(this);
		}
	};
}
