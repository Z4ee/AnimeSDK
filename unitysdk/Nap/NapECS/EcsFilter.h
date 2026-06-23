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

#define NAP_NAPECS_ECSFILTER_ADDARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1B2F2E70)
#define NAP_NAPECS_ECSFILTER_ADDEXCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1B2F46A0)
#define NAP_NAPECS_ECSFILTER_ADDINCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1B2F44A0)
#define NAP_NAPECS_ECSFILTER_ADDWAITTYPE_OFFSET UNITYSDK_OFFSET(0x1B2F4850)
#define NAP_NAPECS_ECSFILTER_CHECKANDMARKASYNCCOMP_OFFSET UNITYSDK_OFFSET(0x1B2F4BB0)
#define NAP_NAPECS_ECSFILTER_CHECKENTITYFOREACHCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1B2F2F00)
#define NAP_NAPECS_ECSFILTER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B2F4320)
#define NAP_NAPECS_ECSFILTER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2F3A70)
#define NAP_NAPECS_ECSFILTER_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x1B2F4640)
#define NAP_NAPECS_ECSFILTER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1B2F43C0)
#define NAP_NAPECS_ECSFILTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2F33C0)
#define NAP_NAPECS_ECSFILTER_GET_ARCHETYPELIST_OFFSET UNITYSDK_OFFSET(0x1B2F2E40)
#define NAP_NAPECS_ECSFILTER_GET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F28D0)
#define NAP_NAPECS_ECSFILTER_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1B2F2E50)
#define NAP_NAPECS_ECSFILTER_GET_EXCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x1B2F2E10)
#define NAP_NAPECS_ECSFILTER_GET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x1B2F2930)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDECOMPMASK_OFFSET UNITYSDK_OFFSET(0x1B2F2E30)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x1B2F2E00)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x1B2EA170)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x1B2EA0B0)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x1B2EA110)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x1B2EA050)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x1B2EA1D0)
#define NAP_NAPECS_ECSFILTER_GET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2A50)
#define NAP_NAPECS_ECSFILTER_GET_READYENTITYSET_OFFSET UNITYSDK_OFFSET(0x1B2F2E60)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F28F0)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F2910)
#define NAP_NAPECS_ECSFILTER_GET_WAITREADYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1B2F2E20)
#define NAP_NAPECS_ECSFILTER_HASRUNNABLEENTITY_OFFSET UNITYSDK_OFFSET(0x1B2F4EB0)
#define NAP_NAPECS_ECSFILTER_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1B2F4440)
#define NAP_NAPECS_ECSFILTER_INITEMPTYCOMPONENTDICT_OFFSET UNITYSDK_OFFSET(0x1B2F49C0)
#define NAP_NAPECS_ECSFILTER_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B2F4260)
#define NAP_NAPECS_ECSFILTER_ISENTITYPAUSED_OFFSET UNITYSDK_OFFSET(0x1B2F0F90)
#define NAP_NAPECS_ECSFILTER_REMOVEENTITYFROMFILTER_OFFSET UNITYSDK_OFFSET(0x1B2F3440)
#define NAP_NAPECS_ECSFILTER_REMOVEFROMASYNCDICT_OFFSET UNITYSDK_OFFSET(0x1B2F3880)
#define NAP_NAPECS_ECSFILTER_SET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F28E0)
#define NAP_NAPECS_ECSFILTER_SET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x1B2F2940)
#define NAP_NAPECS_ECSFILTER_SET_ONADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2950)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2CE0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2BC0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2C50)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2B30)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2D70)
#define NAP_NAPECS_ECSFILTER_SET_ONPOSTADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1B2F29D0)
#define NAP_NAPECS_ECSFILTER_SET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1B2F2AB0)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F2900)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2F2920)
#define NAP_NAPECS_ECSFILTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2F4920)
#define NAP_NAPECS_ECSFILTER_WAITREADY_OFFSET UNITYSDK_OFFSET(0x1B2F47F0)
#define NAP_NAPECS_ECSFILTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2F40A0)
#define NAP_NAPECS_ECSFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F3C40)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilter_TypeDefinitionIndex = 37271;

	class EcsFilter : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyPostActionItem; // 0x10
		::Nap::NapECS::EcsSystem* System; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* componentDict; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* excludeTypeList; // 0x28
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* archetypeList; // 0x30
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* tmpComponentList; // 0x38
		::Nap::NapECS::DictionaryList_2<::System::UInt32, ::Nap::NapECS::EcsEntity*>* entityList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* includeTypeList; // 0x48
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnAddEntityActionItem; // 0x50
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityPauseActionItem; // 0x58
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnRemoveEntityActionItem; // 0x60
		::System::String* DebugName; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsComponent*>*>* asyncComponentSet; // 0x70
		::Nap::NapECS::EcsWorld* worldRef; // 0x78
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* OnPostAddEntityActionItem; // 0x80
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyActionItem; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* readyEntitySet; // 0x90
		::System::String* Name; // 0x98
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>* entityListForEach; // 0xA0
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityResumeActionItem; // 0xA8
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* OnEntityReadyPreActionItem; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* waitTypeList; // 0xB8
		::System::Type* _CurWorldRefType_k__BackingField; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* componentDictForEach; // 0xC8
		::Nap::NapECS::EcsCompFilter compFilter; // 0xD0
		::System::Int32 _RunnableEntityCount_k__BackingField; // 0x158
		::System::Int32 _RunnableIncludePausedEntityCount_k__BackingField; // 0x15C
		::System::Int32 WaitReadyCompClassId; // 0x160
		::System::Boolean _HasSystemDepend_k__BackingField; // 0x164
		::System::Boolean isDirty; // 0x165
		::System::Boolean isEverVisited; // 0x166
		::System::Boolean enableForEachAccelerate; // 0x167
		::System::Int32 IsVisitingFrame; // 0x168
		::System::Int32 FilterIndex; // 0x16C
		::System::Int32 _EntityCount_k__BackingField; // 0x170

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
