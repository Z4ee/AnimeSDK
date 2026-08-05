#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsDataCompScopeWriter.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSENTITY_ADDPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C840770)
#define NAP_NAPECS_ECSENTITY_ADDSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1C83FE80)
#define NAP_NAPECS_ECSENTITY_CLEARPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C840AD0)
#define NAP_NAPECS_ECSENTITY_GETBIT_OFFSET UNITYSDK_OFFSET(0x1C841480)
#define NAP_NAPECS_ECSENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C840450)
#define NAP_NAPECS_ECSENTITY_GETSTRUCTCOMPWRITER_OFFSET UNITYSDK_OFFSET(0x1C840710)
#define NAP_NAPECS_ECSENTITY_GET_ARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1C83F3E0)
#define NAP_NAPECS_ECSENTITY_GET_COMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x1C83F3D0)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C83E110)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1C83E170)
#define NAP_NAPECS_ECSENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C83E120)
#define NAP_NAPECS_ECSENTITY_GET_ISDEBUGPAUSE_OFFSET UNITYSDK_OFFSET(0x1C83EF70)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1C83E190)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1C839D80)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1C83E6D0)
#define NAP_NAPECS_ECSENTITY_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C83E950)
#define NAP_NAPECS_ECSENTITY_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C83EF80)
#define NAP_NAPECS_ECSENTITY_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1C83C8A0)
#define NAP_NAPECS_ECSENTITY_GET_REFWORLD_OFFSET UNITYSDK_OFFSET(0x1C83E130)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1C83E280)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1C83E410)
#define NAP_NAPECS_ECSENTITY_GET__ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1C83E7C0)
#define NAP_NAPECS_ECSENTITY_GET__ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C83EA30)
#define NAP_NAPECS_ECSENTITY_GET__ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C83F070)
#define NAP_NAPECS_ECSENTITY_GET__ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1C83FB00)
#define NAP_NAPECS_ECSENTITY_GET__ISVALID_OFFSET UNITYSDK_OFFSET(0x1C83FBA0)
#define NAP_NAPECS_ECSENTITY_GET__REFWORLD_OFFSET UNITYSDK_OFFSET(0x1C83E150)
#define NAP_NAPECS_ECSENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C840BD0)
#define NAP_NAPECS_ECSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x1C83F3F0)
#define NAP_NAPECS_ECSENTITY_ISINSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1C83FC40)
#define NAP_NAPECS_ECSENTITY_ISREMOVING_OFFSET UNITYSDK_OFFSET(0x1C83FD70)
#define NAP_NAPECS_ECSENTITY_ISRUNNABLE_OFFSET UNITYSDK_OFFSET(0x1C839E70)
#define NAP_NAPECS_ECSENTITY_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x1C83FE00)
#define NAP_NAPECS_ECSENTITY_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C83F760)
#define NAP_NAPECS_ECSENTITY_MARKARCHETYPESINGLEDATAWRITE_OFFSET UNITYSDK_OFFSET(0x1C83E010)
#define NAP_NAPECS_ECSENTITY_ONADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C841040)
#define NAP_NAPECS_ECSENTITY_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1C841440)
#define NAP_NAPECS_ECSENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C841230)
#define NAP_NAPECS_ECSENTITY_ONREMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C8410E0)
#define NAP_NAPECS_ECSENTITY_ONUPDATEARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1C840D70)
#define NAP_NAPECS_ECSENTITY_REMOVESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1C840070)
#define NAP_NAPECS_ECSENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x1C8402E0)
#define NAP_NAPECS_ECSENTITY_SETBIT_OFFSET UNITYSDK_OFFSET(0x1C8414D0)
#define NAP_NAPECS_ECSENTITY_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1C83E180)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1C83E320)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1C83E4B0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1C83E860)
#define NAP_NAPECS_ECSENTITY_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C83EAD0)
#define NAP_NAPECS_ECSENTITY_SET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C83F110)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1C83E330)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1C83E5F0)
#define NAP_NAPECS_ECSENTITY_SET__ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1C83E870)
#define NAP_NAPECS_ECSENTITY_SET__ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1C83EEA0)
#define NAP_NAPECS_ECSENTITY_SET__ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C83F2F0)
#define NAP_NAPECS_ECSENTITY_SET__ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1C83F680)
#define NAP_NAPECS_ECSENTITY_SET__ISVALID_OFFSET UNITYSDK_OFFSET(0x1C83FC90)
#define NAP_NAPECS_ECSENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8415A0)
#define NAP_NAPECS_ECSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C841540)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity_TypeDefinitionIndex = 37999;

	class EcsEntity : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Nap::NapECS::EcsComponent*>** StaticGet_s_ClassIdComparison()
		{
			return (::System::Comparison_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0x2A380);
		}
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet_s_NullPredicate()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0x2A388);
		}
		static ::System::UInt32* StaticGet_EMPTY_ENTITY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0x8A80);
		}
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _preloadingComponentList; // 0x10
		::Nap::NapECS::EcsArchetype* _archetype; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _componentList; // 0x20
		::System::String* _entityName; // 0x28
		::System::Boolean _isDebugPause; // 0x30
		::System::Byte _entityFlags; // 0x31
		::System::Byte _entityState; // 0x32
		::System::Boolean editorFoldout; // 0x33
		::System::Int32 _indexInArchetype; // 0x34
		::System::UInt32 _id; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY__CCTOR_OFFSET))();
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
