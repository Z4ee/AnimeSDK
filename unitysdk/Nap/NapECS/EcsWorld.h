#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class ComponentMaskFilter; }
namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsArchetypeGroup; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsComponentGroup; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsEntityGroup; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsFilterGroup; }
namespace Nap::NapECS { class EcsSystem; }
namespace Nap::NapECS { class EcsSystemGroup; }
namespace Nap::NapECS { class EcsWorldTimeCenter; }
namespace Nap::NapECS { class EcsWorld_EntityComponentMaskMap; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSWORLD_ADDCOMPONENTSTOENTITY_1_OFFSET UNITYSDK_OFFSET(0x192E6760)
#define NAP_NAPECS_ECSWORLD_ADDCOMPONENTSTOENTITY_OFFSET UNITYSDK_OFFSET(0x192E6500)
#define NAP_NAPECS_ECSWORLD_ADDCOMPONENTTOENTITY_OFFSET UNITYSDK_OFFSET(0x192E7A00)
#define NAP_NAPECS_ECSWORLD_ADDFILTER_OFFSET UNITYSDK_OFFSET(0x192D5240)
#define NAP_NAPECS_ECSWORLD_ADDSYSTEM_OFFSET UNITYSDK_OFFSET(0x192E4670)
#define NAP_NAPECS_ECSWORLD_AFTERANIMATORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5E70)
#define NAP_NAPECS_ECSWORLD_CREATESYSTEMS_OFFSET UNITYSDK_OFFSET(0x192E4480)
#define NAP_NAPECS_ECSWORLD_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x192E8690)
#define NAP_NAPECS_ECSWORLD_DIAGNOSECHECKFILTERCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x192E83A0)
#define NAP_NAPECS_ECSWORLD_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5F10)
#define NAP_NAPECS_ECSWORLD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5A00)
#define NAP_NAPECS_ECSWORLD_GETARCHETYPEVERSION_OFFSET UNITYSDK_OFFSET(0x192E8DB0)
#define NAP_NAPECS_ECSWORLD_GETCOMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x192E8E50)
#define NAP_NAPECS_ECSWORLD_GET_TIMECENTER_OFFSET UNITYSDK_OFFSET(0x192E3BB0)
#define NAP_NAPECS_ECSWORLD_INNERFIXEDSTEPTIMECENTER_OFFSET UNITYSDK_OFFSET(0x192E5A70)
#define NAP_NAPECS_ECSWORLD_INNERSTEPTIMECENTER_OFFSET UNITYSDK_OFFSET(0x192E49B0)
#define NAP_NAPECS_ECSWORLD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x192E4A80)
#define NAP_NAPECS_ECSWORLD_LINKFILTERARCHETYPE_OFFSET UNITYSDK_OFFSET(0x192CD3B0)
#define NAP_NAPECS_ECSWORLD_MODIFYENTITYCOMPONENTSINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x192E6B00)
#define NAP_NAPECS_ECSWORLD_MODIFYENTITYCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x192E66A0)
#define NAP_NAPECS_ECSWORLD_ONADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192E85E0)
#define NAP_NAPECS_ECSWORLD_ONANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5F60)
#define NAP_NAPECS_ECSWORLD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x192E6050)
#define NAP_NAPECS_ECSWORLD_ONPOSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x192E6000)
#define NAP_NAPECS_ECSWORLD_ONPOSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5FB0)
#define NAP_NAPECS_ECSWORLD_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x192E4AF0)
#define NAP_NAPECS_ECSWORLD_REMOVECOMPONENTFROMENTITY_OFFSET UNITYSDK_OFFSET(0x192E8010)
#define NAP_NAPECS_ECSWORLD_REMOVECOMPONENTSFROMENTITY_OFFSET UNITYSDK_OFFSET(0x192E7C40)
#define NAP_NAPECS_ECSWORLD_REMOVEFILTER_OFFSET UNITYSDK_OFFSET(0x192E64A0)
#define NAP_NAPECS_ECSWORLD_SET_TIMECENTER_OFFSET UNITYSDK_OFFSET(0x192E3BC0)
#define NAP_NAPECS_ECSWORLD_STARTTIMECENTER_OFFSET UNITYSDK_OFFSET(0x192E4780)
#define NAP_NAPECS_ECSWORLD_START_OFFSET UNITYSDK_OFFSET(0x192E46E0)
#define NAP_NAPECS_ECSWORLD_UPDATE_OFFSET UNITYSDK_OFFSET(0x192E4940)
#define NAP_NAPECS_ECSWORLD_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192E5EC0)
#define NAP_NAPECS_ECSWORLD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192E3BE0)
#define NAP_NAPECS_ECSWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x192E3BD0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_TypeDefinitionIndex = 35683;

	class EcsWorld : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableDiagnose()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsWorld_TypeDefinitionIndex)->GetStaticField(0x84C0);
		}
		static ::System::Boolean* StaticGet_StartWithDiagnose()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsWorld_TypeDefinitionIndex)->GetStaticField(0x84C1);
		}
		::Nap::NapECS::EcsComponentGroup* componentGroup; // 0x10
		::Nap::NapECS::EcsWorld_EntityComponentMaskMap* _componentMaskMap; // 0x18
		::Nap::NapECS::EcsSystemGroup* systemGroup; // 0x20
		::Nap::NapECS::EcsWorldTimeCenter* _TimeCenter_k__BackingField; // 0x28
		::Nap::NapECS::EcsFilterGroup* filterGroup; // 0x30
		::Nap::NapECS::EcsArchetypeGroup* archetypeGroup; // 0x38
		::Nap::NapECS::EcsEntityGroup* entityGroup; // 0x40
		::System::Int32 worldTypeID; // 0x48
		::System::Boolean enableForEachAccelerate; // 0x4C
		::System::Int32 worldId; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 worldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD__CTOR_1_OFFSET))(this, worldType);
		}

		::Nap::NapECS::EcsWorldTimeCenter* get_TimeCenter()
		{
			return ((::Nap::NapECS::EcsWorldTimeCenter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_GET_TIMECENTER_OFFSET))(this);
		}

		::System::Void set_TimeCenter(::Nap::NapECS::EcsWorldTimeCenter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorldTimeCenter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_SET_TIMECENTER_OFFSET))(this, value);
		}

		::System::Void CreateSystems(::Il2CppArray<::System::Type*>* typeOrders, ::System::Func_2<::System::Type*, ::System::Boolean>* shouldAddSystem)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::System::Func_2<::System::Type*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_CREATESYSTEMS_OFFSET))(this, typeOrders, shouldAddSystem);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_START_OFFSET))(this);
		}

		::System::Void Update(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_UPDATE_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Void LateUpdate(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_LATEUPDATE_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Void PostLateUpdate(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_POSTLATEUPDATE_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Void FixedUpdate(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_FIXEDUPDATE_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Boolean StartTimeCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_STARTTIMECENTER_OFFSET))(this);
		}

		::System::Void InnerStepTimeCenter(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_INNERSTEPTIMECENTER_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Void InnerFixedStepTimeCenter(::System::Single& rawDeltaTime, ::System::Single& worldTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_INNERFIXEDSTEPTIMECENTER_OFFSET))(this, rawDeltaTime, worldTimeScale);
		}

		::System::Void AfterAnimatorFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_AFTERANIMATORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void WaitForFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_WAITFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void EndOfFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENDOFFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnAnimIkPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ONANIMIKPOSTUPDATE_OFFSET))(this);
		}

		::System::Void OnPostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ONPOSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void OnPostParticleSystemUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ONPOSTPARTICLESYSTEMUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ONDESTROY_OFFSET))(this);
		}

		::System::Void AddSystem(::System::Int32 orderIndex, ::Nap::NapECS::EcsSystem* system)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ADDSYSTEM_OFFSET))(this, orderIndex, system);
		}

		::System::Void AddFilter(::Nap::NapECS::EcsFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ADDFILTER_OFFSET))(this, filter);
		}

		::System::Void RemoveFilter(::Nap::NapECS::EcsFilter* fitler)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_REMOVEFILTER_OFFSET))(this, fitler);
		}

		::System::Void AddComponentsToEntity(::Nap::NapECS::EcsEntity* entity, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentList)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ADDCOMPONENTSTOENTITY_OFFSET))(this, entity, componentList);
		}

		::System::Void AddComponentsToEntity_1(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::ComponentMask& dataCompoentMask, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentList)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ADDCOMPONENTSTOENTITY_1_OFFSET))(this, entity, dataCompoentMask, componentList);
		}

		::System::Void AddComponentToEntity(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::EcsComponent* component, ::System::Boolean refreshFilter)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ADDCOMPONENTTOENTITY_OFFSET))(this, entity, component, refreshFilter);
		}

		::System::Void RemoveComponentsFromEntity(::Nap::NapECS::EcsEntity* entity, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_REMOVECOMPONENTSFROMENTITY_OFFSET))(this, entity, components);
		}

		::System::Void RemoveComponentFromEntity(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_REMOVECOMPONENTFROMENTITY_OFFSET))(this, entity, component);
		}

		::System::Void ModifyEntityComponentsInternal(::Nap::NapECS::EcsEntity* entity, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToAdd, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_MODIFYENTITYCOMPONENTSINTERNAL_OFFSET))(this, entity, componentsToAdd, componentsToRemove);
		}

		::System::Void ModifyEntityComponentsInternal_1(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::ComponentMask& nextMask, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToAdd, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* componentsToRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::ComponentMask&, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_MODIFYENTITYCOMPONENTSINTERNAL_1_OFFSET))(this, entity, nextMask, componentsToAdd, componentsToRemove);
		}

		::System::Void OnAddComponent(::Nap::NapECS::EcsEntity* entity, ::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ONADDCOMPONENT_OFFSET))(this, entity, component);
		}

		::System::Void DestroyEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_DESTROYENTITY_OFFSET))(this, entity);
		}

		::System::UInt32 GetArchetypeVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_GETARCHETYPEVERSION_OFFSET))(this);
		}

		::System::Void GetComponentMask(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* cache, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* buffer, ::Nap::NapECS::ComponentMaskFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::Nap::NapECS::ComponentMaskFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_GETCOMPONENTMASK_OFFSET))(this, cache, buffer, filter);
		}

		::System::Void LinkFilterArchetype(::Nap::NapECS::EcsArchetype* newArchetype)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetype*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_LINKFILTERARCHETYPE_OFFSET))(this, newArchetype);
		}

		::System::Void DiagnoseCheckFilterConsistency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_DIAGNOSECHECKFILTERCONSISTENCY_OFFSET))(this);
		}
	};
}
