#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

namespace FluffyUnderware::Curvy { class CurvyControllerJobData; }
namespace FluffyUnderware::Curvy::Controllers { class CurvyControllerUnityUpdater; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ADDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1EFAD2B0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_BEGINJOB_OFFSET UNITYSDK_OFFSET(0x1EFAC640)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAC2D0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ENDJOB_OFFSET UNITYSDK_OFFSET(0x1EFACB20)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1EFAC530)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EFACE70)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EFAD080)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EFACC60)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EFAC970)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REGISTERCURVYCONTROLLERUNITYUPDATER_OFFSET UNITYSDK_OFFSET(0x1EFAC560)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REMOVEJOBDATA_OFFSET UNITYSDK_OFFSET(0x1EFAD6A0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_UNREGISTERCURVYCONTROLLERUNITYUPDATER_OFFSET UNITYSDK_OFFSET(0x1EFAC5D0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFADA90)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAD890)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControllerTickManager_TypeDefinitionIndex = 39465;

	class CurvyControllerTickManager : public ::Foundation::SingletonDisposable_1<::FluffyUnderware::Curvy::CurvyControllerTickManager*>
	{
	public:
		static ::System::Boolean* StaticGet_enableCurvyControllerDistanceCull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurvyControllerTickManager_TypeDefinitionIndex)->GetStaticField(0x94D0);
		}
		static ::System::Boolean* StaticGet_openCurvyControllerInZenkov()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurvyControllerTickManager_TypeDefinitionIndex)->GetStaticField(0x94D1);
		}
		static ::System::Single* StaticGet_cullDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CurvyControllerTickManager_TypeDefinitionIndex)->GetStaticField(0x94D4);
		}
		::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*>* _activeCurvyControllers; // 0x10
		::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*>>* _delayChangeList; // 0x18
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*, ::System::Int32>* _indexMap; // 0x20
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyControllerJobData*>* _curvyControllers; // 0x28
		::Unity::Jobs::JobHandle _jobHandle; // 0x30
		::UnityEngine::Jobs::TransformAccessArray _curvyControllerTransform; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void RegisterCurvyControllerUnityUpdater(::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater* updater)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REGISTERCURVYCONTROLLERUNITYUPDATER_OFFSET))(this, updater);
		}

		::System::Void UnregisterCurvyControllerUnityUpdater(::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater* updater)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_UNREGISTERCURVYCONTROLLERUNITYUPDATER_OFFSET))(this, updater);
		}

		::System::Void BeginJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_BEGINJOB_OFFSET))(this);
		}

		::System::Void EndJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ENDJOB_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REFRESH_OFFSET))(this);
		}

		::System::Void AddJobData(::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater* curvyController)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_ADDJOBDATA_OFFSET))(this, curvyController);
		}

		::System::Void RemoveJobData(::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater* curvyController)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_REMOVEJOBDATA_OFFSET))(this, curvyController);
		}
	};
}
