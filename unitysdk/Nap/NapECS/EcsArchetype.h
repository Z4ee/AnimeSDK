#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsArchetype_PauseAction.h"
#include "unitysdk/Nap/NapECS/EcsArchetype_ReadyAction.h"
#include "unitysdk/Nap/NapECS/EcsArchetype_ResumeAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace Nap::NapECS { class EcsArchetypeGroup; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsComponentChunk; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { template <typename T> class PatchedList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSARCHETYPE_BAKEFILTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x192CA430)
#define NAP_NAPECS_ECSARCHETYPE_GETCACHEDCOMPONENTLISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x192C8200)
#define NAP_NAPECS_ECSARCHETYPE_GETCACHEDCOMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x192C8280)
#define NAP_NAPECS_ECSARCHETYPE_GETCOMPONENTINDEX_OFFSET UNITYSDK_OFFSET(0x192C8180)
#define NAP_NAPECS_ECSARCHETYPE_GETENTITYFOREACHMASK_OFFSET UNITYSDK_OFFSET(0x192C95C0)
#define NAP_NAPECS_ECSARCHETYPE_GETENTITYINDEX_OFFSET UNITYSDK_OFFSET(0x192C83A0)
#define NAP_NAPECS_ECSARCHETYPE_GETFOREACHMASK_OFFSET UNITYSDK_OFFSET(0x192CC6D0)
#define NAP_NAPECS_ECSARCHETYPE_GET_ARCHETYPEGROUP_OFFSET UNITYSDK_OFFSET(0x192C6CE0)
#define NAP_NAPECS_ECSARCHETYPE_GET_COMPONENTCLASSIDLIST_OFFSET UNITYSDK_OFFSET(0x192C6C90)
#define NAP_NAPECS_ECSARCHETYPE_GET_COMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x192C6C80)
#define NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHEEND_OFFSET UNITYSDK_OFFSET(0x192C6CB0)
#define NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHESTART_OFFSET UNITYSDK_OFFSET(0x192C6CA0)
#define NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHE_OFFSET UNITYSDK_OFFSET(0x192C6CC0)
#define NAP_NAPECS_ECSARCHETYPE_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x192C6C70)
#define NAP_NAPECS_ECSARCHETYPE_GET_RELATEDFILTERS_OFFSET UNITYSDK_OFFSET(0x192C6D40)
#define NAP_NAPECS_ECSARCHETYPE_GET_WORLDTYPEID_OFFSET UNITYSDK_OFFSET(0x192C6D50)
#define NAP_NAPECS_ECSARCHETYPE_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x192C6CD0)
#define NAP_NAPECS_ECSARCHETYPE_INFORMCOMPONENTREADYDIAGNOSE_OFFSET UNITYSDK_OFFSET(0x192CB710)
#define NAP_NAPECS_ECSARCHETYPE_INFORMCOMPONENTREADY_OFFSET UNITYSDK_OFFSET(0x192CB470)
#define NAP_NAPECS_ECSARCHETYPE_INFORMENTITYPAUSE_OFFSET UNITYSDK_OFFSET(0x192CB5B0)
#define NAP_NAPECS_ECSARCHETYPE_INFORMENTITYRESUME_OFFSET UNITYSDK_OFFSET(0x192CB660)
#define NAP_NAPECS_ECSARCHETYPE_INIT_OFFSET UNITYSDK_OFFSET(0x192C6F50)
#define NAP_NAPECS_ECSARCHETYPE_MARKSINGLEDATAWRITE_OFFSET UNITYSDK_OFFSET(0x192CC2F0)
#define NAP_NAPECS_ECSARCHETYPE_ONENTITYADDTOARCHETYPE_OFFSET UNITYSDK_OFFSET(0x192C9210)
#define NAP_NAPECS_ECSARCHETYPE_ONENTITYREADYCHANGE_OFFSET UNITYSDK_OFFSET(0x192CCB70)
#define NAP_NAPECS_ECSARCHETYPE_ONENTITYREMOVEFROMARCHETYPE_OFFSET UNITYSDK_OFFSET(0x192CA0C0)
#define NAP_NAPECS_ECSARCHETYPE_ONENTITYRUNNABLECHANGE_OFFSET UNITYSDK_OFFSET(0x192CC810)
#define NAP_NAPECS_ECSARCHETYPE_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x192C8490)
#define NAP_NAPECS_ECSARCHETYPE_TRANSFERSTRUCTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192CBE50)
#define NAP_NAPECS_ECSARCHETYPE_UNREGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x192C9700)
#define NAP_NAPECS_ECSARCHETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x192CCEA0)
#define NAP_NAPECS_ECSARCHETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x192C6DA0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsArchetype_TypeDefinitionIndex = 35761;

	class EcsArchetype : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsArchetype** StaticGet_DummyArchetype()
		{
			return (::Nap::NapECS::EcsArchetype**)Il2CppClass::FromTypeDefinitionIndex(EcsArchetype_TypeDefinitionIndex)->GetStaticField(0x26DC0);
		}
		static ::System::Boolean* StaticGet_EnableFilterComponentCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsArchetype_TypeDefinitionIndex)->GetStaticField(0x84B0);
		}
		static ::System::Boolean* StaticGet_EnableFilterComponentCacheConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsArchetype_TypeDefinitionIndex)->GetStaticField(0x84B1);
		}
		static ::System::Boolean* StaticGet_enableOnEntityPauseAndOnEntityResume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsArchetype_TypeDefinitionIndex)->GetStaticField(0x84B2);
		}
		static ::System::Boolean* StaticGet_enableForEachAccelerateNextWorldCreate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsArchetype_TypeDefinitionIndex)->GetStaticField(0x84B3);
		}
		::System::Collections::Generic::List_1<::System::Int32>* _componentClassIdList; // 0x10
		::Il2CppArray<::Nap::NapECS::EcsArchetype_PauseAction>* _pauseActions; // 0x18
		::Nap::NapECS::EcsComponentChunk* _chunk; // 0x20
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>* _entityCache; // 0x28
		::Nap::NapECS::EcsWorld* _refWorld; // 0x30
		::Il2CppArray<::System::Byte>* _compShotClassIdToIndex; // 0x38
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>* _relatedFilters; // 0x40
		::Il2CppArray<::System::Object*>* _componentCache; // 0x48
		::Il2CppArray<::Nap::NapECS::EcsArchetype_ResumeAction>* _resumeActions; // 0x50
		::System::Collections::Generic::List_1<::System::Byte>* entityForEachMask; // 0x58
		::Il2CppArray<::Nap::NapECS::EcsArchetype_ReadyAction>* _readyActions; // 0x60
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::EcsEntity*, ::System::Int32>* _entityCheckSet; // 0x68
		::System::Int32 _nextEntityCacheIndex; // 0x70
		::System::Int32 _entityCount; // 0x74
		::System::Boolean enableForEachAccelerate; // 0x78
		::System::Int32 _classComponentCount; // 0x7C
		::System::Int32 _entityCacheStart; // 0x80
		::System::Int32 _entityCacheEnd; // 0x84
		::Nap::NapECS::ComponentMask _compMask; // 0x88

		::System::Void _ctor(::Nap::NapECS::ComponentMask compMask, ::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE__CTOR_OFFSET))(this, compMask, world);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE__CCTOR_OFFSET))();
		}

		::System::Boolean get_isDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_ISDUMMY_OFFSET))(this);
		}

		::Nap::NapECS::ComponentMask& get_ComponentMask()
		{
			return ((::Nap::NapECS::ComponentMask&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_COMPONENTMASK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ComponentClassIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_COMPONENTCLASSIDLIST_OFFSET))(this);
		}

		::System::Int32 get_EntityCacheStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHESTART_OFFSET))(this);
		}

		::System::Int32 get_EntityCacheEnd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHEEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>* get_EntityCache()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_ENTITYCACHE_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorld* get_World()
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_WORLD_OFFSET))(this);
		}

		::Nap::NapECS::EcsArchetypeGroup* get_ArchetypeGroup()
		{
			return ((::Nap::NapECS::EcsArchetypeGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_ARCHETYPEGROUP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>* get_RelatedFilters()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_RELATEDFILTERS_OFFSET))(this);
		}

		::System::Int32 get_WorldTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GET_WORLDTYPEID_OFFSET))(this);
		}

		::System::Void Init(::Nap::NapECS::ComponentMask& inCompMask)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_INIT_OFFSET))(this, inCompMask);
		}

		::System::Int32 GetComponentIndex(::System::Int32 compClassId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETCOMPONENTINDEX_OFFSET))(this, compClassId);
		}

		::System::Object* GetCachedComponentListByIndex(::System::Int32 compIndex)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETCACHEDCOMPONENTLISTBYINDEX_OFFSET))(this, compIndex);
		}

		::System::Object* GetCachedComponentList(::System::Int32 compClassId)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETCACHEDCOMPONENTLIST_OFFSET))(this, compClassId);
		}

		::System::Int32 GetEntityIndex(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETENTITYINDEX_OFFSET))(this, entity);
		}

		::System::Boolean RegisterEntity(::Nap::NapECS::EcsEntity* entity, ::System::Int32& outEntityIndex, ::System::Boolean suppressWarning)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_REGISTERENTITY_OFFSET))(this, entity, outEntityIndex, suppressWarning);
		}

		::System::Boolean UnregisterEntity(::Nap::NapECS::EcsEntity* entity, ::System::Int32& entityIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_UNREGISTERENTITY_OFFSET))(this, entity, entityIndex);
		}

		::System::Void BakeFilterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_BAKEFILTERCALLBACKS_OFFSET))(this);
		}

		::System::Void InformComponentReady(::Nap::NapECS::EcsComponent* component, ::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_INFORMCOMPONENTREADY_OFFSET))(this, component, entity);
		}

		::System::Void InformEntityPause(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_INFORMENTITYPAUSE_OFFSET))(this, entity);
		}

		::System::Void InformEntityResume(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_INFORMENTITYRESUME_OFFSET))(this, entity);
		}

		::System::Void InformComponentReadyDiagnose(::Nap::NapECS::EcsComponent* component, ::Nap::NapECS::EcsEntity* entity, ::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsFilter*>* DiagnoseNotifyFilter)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsEntity*, ::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsFilter*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_INFORMCOMPONENTREADYDIAGNOSE_OFFSET))(this, component, entity, DiagnoseNotifyFilter);
		}

		::System::Void TransferStructComponent(::System::Int32 entityIndex, ::Nap::NapECS::EcsArchetype* target, ::System::Int32 targetEntityIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsArchetype*, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_TRANSFERSTRUCTCOMPONENT_OFFSET))(this, entityIndex, target, targetEntityIndex);
		}

		::System::Void MarkSingleDataWrite(::Nap::NapECS::EcsEntity* entity, ::System::Boolean write)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_MARKSINGLEDATAWRITE_OFFSET))(this, entity, write);
		}

		static ::System::Byte GetForEachMask(::System::Boolean needReady, ::System::Boolean excludePaused)
		{
			return ((::System::Byte(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETFOREACHMASK_OFFSET))(needReady, excludePaused);
		}

		::System::Byte GetEntityForEachMask(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Byte(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_GETENTITYFOREACHMASK_OFFSET))(this, entity);
		}

		::System::Void OnEntityRunnableChange(::Nap::NapECS::EcsEntity* entity, ::System::Boolean newRunnable)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_ONENTITYRUNNABLECHANGE_OFFSET))(this, entity, newRunnable);
		}

		::System::Void OnEntityReadyChange(::Nap::NapECS::EcsEntity* entity, ::System::Boolean newReady)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_ONENTITYREADYCHANGE_OFFSET))(this, entity, newReady);
		}

		::System::Void OnEntityAddToArchetype(::Nap::NapECS::EcsEntity* entity, ::System::Int32 entityIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_ONENTITYADDTOARCHETYPE_OFFSET))(this, entity, entityIndex);
		}

		::System::Void OnEntityRemoveFromArchetype(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSARCHETYPE_ONENTITYREMOVEFROMARCHETYPE_OFFSET))(this, entity);
		}
	};
}
