#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_23D0762D2F78FF0A.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AreaCategoryInOutSubsystem_CategoryCheckState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANCELCHECKLOOP_OFFSET UNITYSDK_OFFSET(0x1107B320)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANPUBLISHRESULT_OFFSET UNITYSDK_OFFSET(0x1107BDF0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CHECKLOOP_OFFSET UNITYSDK_OFFSET(0x1107B1D0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_COLLECTAREAHITRESULT_OFFSET UNITYSDK_OFFSET(0x1107C090)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_DISPOSECANCELEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1107C800)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ISCHECKINTERVALREACHED_OFFSET UNITYSDK_OFFSET(0x1107BBC0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAENTER_OFFSET UNITYSDK_OFFSET(0x1107C780)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAEXIT_OFFSET UNITYSDK_OFFSET(0x1107C700)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1107B090)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1107B250)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_PUBLISHAREAHITRESULTS_OFFSET UNITYSDK_OFFSET(0x1107C3B0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RECONCILECATEGORIES_OFFSET UNITYSDK_OFFSET(0x1107B6E0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x1107B3A0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_RUNAREACHECKSONTHREAD_OFFSET UNITYSDK_OFFSET(0x1107BE50)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_TRYREFRESHCACHEDAREAS_OFFSET UNITYSDK_OFFSET(0x1107BC30)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1107B550)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1107C870)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1107C990)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1107CA20)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem_TypeDefinitionIndex = 63602;

	class AreaCategoryInOutSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::AreaCategoryInOutSubsystem*>
	{
	public:
		// static const ::System::Int32 CheckLoopWakeupMilliseconds = 0x32; // 0x0
		::System::Collections::Generic::Dictionary_2<::Enum_3_23D0762D2F78FF0A, ::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState*>* _categoryStates; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_23D0762D2F78FF0A, ::System::Int32>* _registrationRefCount; // 0x18
		::System::Threading::CancellationTokenSource* _destroyCancellationTokenSource; // 0x20
		::System::Single _lastCheckStartTime; // 0x28
		::System::Boolean _categoriesDirty; // 0x2C
		::System::Boolean _isChecking; // 0x2D
		::System::Boolean _isWillDestroy; // 0x2E
		::System::Single _checkIntervalSeconds; // 0x30

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

		::System::Void Register(::Enum_3_23D0762D2F78FF0A categoryType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_23D0762D2F78FF0A))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_REGISTER_OFFSET))(this, categoryType);
		}

		::System::Void Unregister(::Enum_3_23D0762D2F78FF0A categoryType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_23D0762D2F78FF0A))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_UNREGISTER_OFFSET))(this, categoryType);
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

		::System::Void OnAreaEnter(::Enum_3_23D0762D2F78FF0A categoryType, ::System::String* sceneNameId, ::MoleMole::Config::SceneConfigRuntimeDataArea area)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_23D0762D2F78FF0A, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAENTER_OFFSET))(this, categoryType, sceneNameId, area);
		}

		::System::Void OnAreaExit(::Enum_3_23D0762D2F78FF0A categoryType, ::System::String* sceneNameId, ::MoleMole::Config::SceneConfigRuntimeDataArea area)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_23D0762D2F78FF0A, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_ONAREAEXIT_OFFSET))(this, categoryType, sceneNameId, area);
		}

		::System::Void CollectAreaHitResult(::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState* state, ::UnityEngine::Vector3 playerPos, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AreaCategoryInOutSubsystem_CategoryCheckState*, ::UnityEngine::Vector3, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_COLLECTAREAHITRESULT_OFFSET))(this, state, playerPos, cancellationToken);
		}

		::System::Void CancelCheckLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CANCELCHECKLOOP_OFFSET))(this);
		}

		::System::Void DisposeCanceledTokenSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_DISPOSECANCELEDTOKENSOURCE_OFFSET))(this);
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
