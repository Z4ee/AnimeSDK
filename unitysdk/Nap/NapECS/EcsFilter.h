#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsCompFilter.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsSystem; }
namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { template <typename T1, typename T2, typename T3> class EcsFilter_Foreach_icc_3; }
namespace Nap::NapECS { template <typename T1, typename T2, typename T3> class EcsFilter_Foreach_rcc_3; }
namespace Nap::NapECS { template <typename T1, typename T2, typename T3> class EcsFilter_Foreach_rrc_3; }
namespace Nap::NapECS { template <typename T1, typename T2> class DictionaryList_2; }
namespace Nap::NapECS { template <typename T1, typename T2> class EcsFilter_Foreach_rc_2; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSFILTER_ADDARCHETYPE_OFFSET UNITYSDK_OFFSET(0x192D4060)
#define NAP_NAPECS_ECSFILTER_ADDEXCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x192D58B0)
#define NAP_NAPECS_ECSFILTER_ADDINCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x192D56B0)
#define NAP_NAPECS_ECSFILTER_ADDWAITTYPE_OFFSET UNITYSDK_OFFSET(0x192D5A60)
#define NAP_NAPECS_ECSFILTER_CHECKANDMARKASYNCCOMP_OFFSET UNITYSDK_OFFSET(0x192D5DC0)
#define NAP_NAPECS_ECSFILTER_CHECKENTITYFOREACHCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x192D40F0)
#define NAP_NAPECS_ECSFILTER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x192D5520)
#define NAP_NAPECS_ECSFILTER_DESTROY_OFFSET UNITYSDK_OFFSET(0x192D4C70)
#define NAP_NAPECS_ECSFILTER_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x192D5850)
#define NAP_NAPECS_ECSFILTER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x192D55C0)
#define NAP_NAPECS_ECSFILTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x192D45B0)
#define NAP_NAPECS_ECSFILTER_GET_ARCHETYPELIST_OFFSET UNITYSDK_OFFSET(0x192D4030)
#define NAP_NAPECS_ECSFILTER_GET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3AC0)
#define NAP_NAPECS_ECSFILTER_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x192D4040)
#define NAP_NAPECS_ECSFILTER_GET_EXCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x192D4000)
#define NAP_NAPECS_ECSFILTER_GET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x192D3B20)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDECOMPMASK_OFFSET UNITYSDK_OFFSET(0x192D4020)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x192D3FF0)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x192CB3B0)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x192CB2F0)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x192CB350)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x192CB290)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x192CB410)
#define NAP_NAPECS_ECSFILTER_GET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x192D3C40)
#define NAP_NAPECS_ECSFILTER_GET_READYENTITYSET_OFFSET UNITYSDK_OFFSET(0x192D4050)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3AE0)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3B00)
#define NAP_NAPECS_ECSFILTER_GET_WAITREADYTYPELIST_OFFSET UNITYSDK_OFFSET(0x192D4010)
#define NAP_NAPECS_ECSFILTER_HASRUNNABLEENTITY_OFFSET UNITYSDK_OFFSET(0x192D60C0)
#define NAP_NAPECS_ECSFILTER_INCLUDE_OFFSET UNITYSDK_OFFSET(0x192D5650)
#define NAP_NAPECS_ECSFILTER_INITEMPTYCOMPONENTDICT_OFFSET UNITYSDK_OFFSET(0x192D5BD0)
#define NAP_NAPECS_ECSFILTER_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x192D5460)
#define NAP_NAPECS_ECSFILTER_ISENTITYPAUSED_OFFSET UNITYSDK_OFFSET(0x192D2190)
#define NAP_NAPECS_ECSFILTER_REMOVEENTITYFROMFILTER_OFFSET UNITYSDK_OFFSET(0x192D4630)
#define NAP_NAPECS_ECSFILTER_REMOVEFROMASYNCDICT_OFFSET UNITYSDK_OFFSET(0x192D4A80)
#define NAP_NAPECS_ECSFILTER_SET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3AD0)
#define NAP_NAPECS_ECSFILTER_SET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x192D3B30)
#define NAP_NAPECS_ECSFILTER_SET_ONADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x192D3B40)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x192D3ED0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x192D3DB0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x192D3E40)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x192D3D20)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x192D3F60)
#define NAP_NAPECS_ECSFILTER_SET_ONPOSTADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x192D3BC0)
#define NAP_NAPECS_ECSFILTER_SET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x192D3CA0)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3AF0)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x192D3B10)
#define NAP_NAPECS_ECSFILTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x192D5B30)
#define NAP_NAPECS_ECSFILTER_WAITREADY_OFFSET UNITYSDK_OFFSET(0x192D5A00)
#define NAP_NAPECS_ECSFILTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192D52A0)
#define NAP_NAPECS_ECSFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192D4E40)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilter_TypeDefinitionIndex = 35697;

	class EcsFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsComponent*>*>* asyncComponentSet; // 0x10
		::System::Type* _CurWorldRefType_k__BackingField; // 0x18
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnPostAddEntityActionItem; // 0x20
		::Nap::NapECS::DictionaryList_2<::System::UInt32, ::Nap::NapECS::EcsEntity*>* entityList; // 0x28
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnRemoveEntityActionItem; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* excludeTypeList; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* waitTypeList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* includeTypeList; // 0x48
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnAddEntityActionItem; // 0x50
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* archetypeList; // 0x58
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyPreActionItem; // 0x60
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* tmpComponentList; // 0x68
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyActionItem; // 0x70
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityResumeActionItem; // 0x78
		::Nap::NapECS::EcsWorld* worldRef; // 0x80
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityPauseActionItem; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* componentDict; // 0x90
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>* entityListForEach; // 0x98
		::Nap::NapECS::EcsSystem* System; // 0xA0
		::System::String* DebugName; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* readyEntitySet; // 0xB0
		::System::String* Name; // 0xB8
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyPostActionItem; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* componentDictForEach; // 0xC8
		::System::Int32 _EntityCount_k__BackingField; // 0xD0
		::System::Int32 WaitReadyCompClassId; // 0xD4
		::System::Int32 IsVisitingFrame; // 0xD8
		::System::Int32 _RunnableEntityCount_k__BackingField; // 0xDC
		::Nap::NapECS::EcsCompFilter compFilter; // 0xE0
		::System::Boolean _HasSystemDepend_k__BackingField; // 0x168
		::System::Boolean isDirty; // 0x169
		::System::Boolean enableForEachAccelerate; // 0x16A
		::System::Boolean isEverVisited; // 0x16B
		::System::Int32 FilterIndex; // 0x16C
		::System::Int32 _RunnableIncludePausedEntityCount_k__BackingField; // 0x170

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__CTOR_OFFSET))(this, world);
		}

		::System::Void _ctor_1(::Nap::NapECS::EcsWorld* world, ::System::Action_1<::Nap::NapECS::EcsEntity*>* onEntiyAdd, ::System::Action_1<::Nap::NapECS::EcsEntity*>* onEntityRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__CTOR_1_OFFSET))(this, world, onEntiyAdd, onEntityRemove);
		}

		::System::Int32 get_EntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_EntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_RunnableEntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_RUNNABLEENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_RunnableEntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_RUNNABLEENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_RunnableIncludePausedEntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_RunnableIncludePausedEntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_HasSystemDepend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_HASSYSTEMDEPEND_OFFSET))(this);
		}

		::System::Void set_HasSystemDepend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_HASSYSTEMDEPEND_OFFSET))(this, value);
		}

		::System::Void set_OnAddEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONADDENTITYACTION_OFFSET))(this, value);
		}

		::System::Void set_OnPostAddEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONPOSTADDENTITYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::Nap::NapECS::EcsEntity*>* get_OnRemoveEntityAction()
		{
			return ((::System::Action_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONREMOVEENTITYACTION_OFFSET))(this);
		}

		::System::Void set_OnRemoveEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONREMOVEENTITYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyPreAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPREACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyPreAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPREACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyPostAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPOSTACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyPostAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPOSTACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityPauseAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYPAUSEACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityPauseAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYPAUSEACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityResumeAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYRESUMEACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityResumeAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYRESUMEACTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_IncludeTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_INCLUDETYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ExcludeTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_EXCLUDETYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WaitReadyTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_WAITREADYTYPELIST_OFFSET))(this);
		}

		::Nap::NapECS::ComponentMask& get_IncludeCompMask()
		{
			return ((::Nap::NapECS::ComponentMask&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_INCLUDECOMPMASK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* get_ArchetypeList()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ARCHETYPELIST_OFFSET))(this);
		}

		::Nap::NapECS::DictionaryList_2<::System::UInt32, ::Nap::NapECS::EcsEntity*>* get_EntityList()
		{
			return ((::Nap::NapECS::DictionaryList_2<::System::UInt32, ::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ReadyEntitySet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_READYENTITYSET_OFFSET))(this);
		}

		::System::Void AddArchetype(::Nap::NapECS::EcsArchetype* archetype)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetype*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDARCHETYPE_OFFSET))(this, archetype);
		}

		::System::Void CheckEntityForEachConsistency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CHECKENTITYFOREACHCONSISTENCY_OFFSET))(this);
		}

		::System::Boolean RemoveEntityFromFilter(::Nap::NapECS::EcsEntity* entity, ::System::Boolean noNotify)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_REMOVEENTITYFROMFILTER_OFFSET))(this, entity, noNotify);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_DESTROY_OFFSET))(this);
		}

		::System::Boolean IsCompatible(::Nap::NapECS::ComponentMask& compMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ISCOMPATIBLE_OFFSET))(this, compMask);
		}

		::System::Boolean Contains(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CONTAINS_OFFSET))(this, entity);
		}

		::Nap::NapECS::EcsEntity* GetEntity(::System::UInt32 entityId)
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GETENTITY_OFFSET))(this, entityId);
		}

		::Nap::NapECS::EcsFilter* Include(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_INCLUDE_OFFSET))(this, typeIds);
		}

		::Nap::NapECS::EcsFilter* Exclude(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_EXCLUDE_OFFSET))(this, typeIds);
		}

		::Nap::NapECS::EcsFilter* WaitReady(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_WAITREADY_OFFSET))(this, typeIds);
		}

		static ::System::Boolean IsEntityPaused(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ISENTITYPAUSED_OFFSET))(entity);
		}

		::System::Collections::Generic::IEnumerator_1<::Nap::NapECS::EcsEntity*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* InitEmptyComponentDict(::System::Int32 typeId)
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_INITEMPTYCOMPONENTDICT_OFFSET))(this, typeId);
		}

		::System::Void AddIncludeType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDINCLUDETYPE_OFFSET))(this, typeIds);
		}

		::System::Void AddExcludeType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDEXCLUDETYPE_OFFSET))(this, typeIds);
		}

		::System::Void AddWaitType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDWAITTYPE_OFFSET))(this, typeIds);
		}

		::System::Void CheckAndMarkAsyncComp(::System::Int32 classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CHECKANDMARKASYNCCOMP_OFFSET))(this, classId);
		}

		::System::Void RemoveFromAsyncDict(::System::UInt32 entityId, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_REMOVEFROMASYNCDICT_OFFSET))(this, entityId, components);
		}

		::System::Boolean HasRunnableEntity(::System::Boolean excludePaused)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_HASRUNNABLEENTITY_OFFSET))(this, excludePaused);
		}
	};
}
