#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_903FDA347BBAD2AB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AreaCategoryInOutSubsystem_CategoryCheckState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANCELCHECKLOOP_OFFSET UNITYSDK_OFFSET(0x12EDE3C0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANPUBLISHRESULT_OFFSET UNITYSDK_OFFSET(0x12EDEE90)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CHECKLOOP_OFFSET UNITYSDK_OFFSET(0x12EDE260)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_COLLECTAREAHITRESULT_OFFSET UNITYSDK_OFFSET(0x12EDF230)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_DISPOSECANCELEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x12EDFCB0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_GETAREABYPOSITIONASYNC_OFFSET UNITYSDK_OFFSET(0x12EDFE70)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ISCHECKINTERVALREACHED_OFFSET UNITYSDK_OFFSET(0x12EDEC50)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAENTER_OFFSET UNITYSDK_OFFSET(0x12EDF7B0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAEXIT_OFFSET UNITYSDK_OFFSET(0x12EDF610)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12EDE110)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12EDE2F0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_PUBLISHAREAHITRESULTS_OFFSET UNITYSDK_OFFSET(0x12EDF370)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RECONCILECATEGORIES_OFFSET UNITYSDK_OFFSET(0x12EDE780)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x12EDE440)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RUNAREACHECKSONTHREAD_OFFSET UNITYSDK_OFFSET(0x12EDEEF0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYFINDBESTAREA_OFFSET UNITYSDK_OFFSET(0x12EDF950)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYGETCURRENTAREA_OFFSET UNITYSDK_OFFSET(0x12EDFD20)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYREFRESHCACHEDAREAS_OFFSET UNITYSDK_OFFSET(0x12EDECC0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x12EDE5F0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EDFFA0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12EE00C0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12EE0150)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem_TypeDefinitionIndex = 68255;

	class AreaCategoryInOutSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::AreaCategoryInOutSubsystem*>
	{
	public:
		// static const ::System::Int32 CheckLoopWakeupMilliseconds = 0x32; // 0x0
		::System::Threading::CancellationTokenSource* _destroyCancellationTokenSource; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_44A8FD5EE475BAE7, ::System::Int32>* _registrationRefCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_44A8FD5EE475BAE7, ::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState*>* _categoryStates; // 0x20
		::System::Boolean _categoriesDirty; // 0x28
		::System::Boolean _isWillDestroy; // 0x29
		::System::Boolean _isChecking; // 0x2A
		::System::Single _lastCheckStartTime; // 0x2C
		::System::Int32 _checkLoopWakeupMilliseconds; // 0x30
		::System::Single _checkIntervalSeconds; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register(::Enum_3_44A8FD5EE475BAE7 categoryType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_REGISTER_OFFSET))(this, categoryType);
		}

		::System::Void Unregister(::Enum_3_44A8FD5EE475BAE7 categoryType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_UNREGISTER_OFFSET))(this, categoryType);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CheckLoop(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CHECKLOOP_OFFSET))(this, cancellationToken);
		}

		::System::Void ReconcileCategories()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RECONCILECATEGORIES_OFFSET))(this);
		}

		::System::Boolean IsCheckIntervalReached(::System::Single now)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ISCHECKINTERVALREACHED_OFFSET))(this, now);
		}

		::System::Boolean TryRefreshCachedAreas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYREFRESHCACHEDAREAS_OFFSET))(this);
		}

		::System::Boolean CanPublishResult(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANPUBLISHRESULT_OFFSET))(this, cancellationToken);
		}

		::System::Void RunAreaChecksOnThread(::UnityEngine::Vector3 playerPos, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RUNAREACHECKSONTHREAD_OFFSET))(this, playerPos, cancellationToken);
		}

		::System::Void PublishAreaHitResults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_PUBLISHAREAHITRESULTS_OFFSET))(this);
		}

		::System::Void OnAreaEnter(::Enum_3_44A8FD5EE475BAE7 categoryType, ::System::String* sceneNameId, ::MoleMole::Config::SceneConfigRuntimeDataArea area)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAENTER_OFFSET))(this, categoryType, sceneNameId, area);
		}

		::System::Void OnAreaExit(::Enum_3_44A8FD5EE475BAE7 categoryType, ::System::String* sceneNameId, ::MoleMole::Config::SceneConfigRuntimeDataArea area)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAEXIT_OFFSET))(this, categoryType, sceneNameId, area);
		}

		::System::Void CollectAreaHitResult(::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState* state, ::UnityEngine::Vector3 playerPos, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState*, ::UnityEngine::Vector3, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_COLLECTAREAHITRESULT_OFFSET))(this, state, playerPos, cancellationToken);
		}

		static ::System::Boolean TryFindBestArea(::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* areas, ::UnityEngine::Vector3 position, ::System::String*& sceneNameId, ::MoleMole::Config::SceneConfigRuntimeDataArea& hitArea, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>*, ::UnityEngine::Vector3, ::System::String*&, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYFINDBESTAREA_OFFSET))(areas, position, sceneNameId, hitArea, cancellationToken);
		}

		::System::Void CancelCheckLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANCELCHECKLOOP_OFFSET))(this);
		}

		::System::Void DisposeCanceledTokenSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_DISPOSECANCELEDTOKENSOURCE_OFFSET))(this);
		}

		::System::Boolean TryGetCurrentArea(::Enum_3_44A8FD5EE475BAE7 categoryType, ::System::String*& sceneNameId, ::System::Collections::Generic::List_1<::System::String*>*& areaTagList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7, ::System::String*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYGETCURRENTAREA_OFFSET))(this, categoryType, sceneNameId, areaTagList);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::Struct_2_903FDA347BBAD2AB> GetAreaByPositionAsync(::Enum_3_44A8FD5EE475BAE7 categoryType, ::UnityEngine::Vector3 position, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::Struct_2_903FDA347BBAD2AB>(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7, ::UnityEngine::Vector3, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_GETAREABYPOSITIONASYNC_OFFSET))(this, categoryType, position, cancellationToken);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
