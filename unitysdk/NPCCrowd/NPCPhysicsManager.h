#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCPhysicsManager_PhysicsJobDelegate; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET UNITYSDK_OFFSET(0x157C3F00)
#define NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x157C2C40)
#define NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x157C2DC0)
#define NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET UNITYSDK_OFFSET(0x157C35B0)
#define NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x157C3170)
#define NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x157C3420)
#define NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x157C46C0)
#define NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x157C3080)
#define NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET UNITYSDK_OFFSET(0x157C2750)
#define NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x157C4A90)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET UNITYSDK_OFFSET(0x157C4190)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x157C3D70)
#define NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x157C44E0)
#define NPCCROWD_NPCPHYSICSMANAGER_WAITSPHERECAST_OFFSET UNITYSDK_OFFSET(0x157C4070)
#define NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x157C50A0)
#define NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x157C4FA0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x157C5120)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x157C51B0)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x157C5240)
#define NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x157C52E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_TypeDefinitionIndex = 44410;

	class NPCPhysicsManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_NormalHitResults()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x47680);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet__hitResults()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109C0);
		}
		static ::System::Single* StaticGet_MaxCastDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109D0);
		}
		static ::System::Single* StaticGet_DeltaHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109D4);
		}
		static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet__hitCounts()
		{
			return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109D8);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__originPosition()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109E8);
		}
		static ::UnityEngine::PhysicsScene* StaticGet__physicsScene()
		{
			return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109F8);
		}
		static ::System::Int32* StaticGet_MaxKernelCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x109FC);
		}
		static ::System::Single* StaticGet_SphereRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x10A00);
		}
		static ::System::Boolean* StaticGet_FallbackToNormalCast()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x10A04);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitResultsInJob()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxHitResultCount = 0x8; // 0x0
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* _npcList; // 0x18
		::NPCCrowd::NPCPhysicsManager_PhysicsJobDelegate* _jobDelegate; // 0x20
		::Unity::Collections::NativeArray_1<::System::IntPtr> _delegateFuncArray; // 0x28
		::Unity::Collections::NativeArray_1<::System::Int32> _jobDataArray; // 0x38
		::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate _jobThreadDelegate; // 0x48
		::System::UInt64 _jobID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPhysicsManager* Get()
		{
			return ((::NPCCrowd::NPCPhysicsManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSourcePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATESOURCEPOSITION_OFFSET))(this);
		}

		::System::Void DispatchSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_DISPATCHSPHERECAST_OFFSET))(this);
		}

		::System::Void WaitSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_WAITSPHERECAST_OFFSET))(this);
		}

		::System::Void UpdateResultPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATERESULTPOSITION_OFFSET))(this);
		}

		static ::System::Void UpdateTransform(::NPCCrowd::Ability::NPCAbility* ability, ::System::Single deltaHeight)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UPDATETRANSFORM_OFFSET))(ability, deltaHeight);
		}

		::System::Void NormalSphereCast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_NORMALSPHERECAST_OFFSET))(this);
		}

		::System::Void Register(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_REGISTER_OFFSET))(this, ability);
		}

		::System::Void Unregister(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_UNREGISTER_OFFSET))(this, ability);
		}

		static ::System::Void SphereCastJob(::System::Int32 data)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER_SPHERECASTJOB_OFFSET))(data);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPHYSICSMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
