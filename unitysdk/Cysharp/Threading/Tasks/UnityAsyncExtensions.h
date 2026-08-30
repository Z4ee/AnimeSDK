#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleRequestAwaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_AsyncOperationAwaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_ResourceRequestAwaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cysharp::Threading::Tasks { class AsyncUnityEventHandler; }
namespace Cysharp::Threading::Tasks { class IAsyncClickEventHandler; }
namespace Cysharp::Threading::Tasks { template <typename T> class AsyncUnityEventHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IAsyncEndEditEventHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IAsyncValueChangedEventHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Scrollbar; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Toggle; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_1_OFFSET UNITYSDK_OFFSET(0x1EA8F290)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_2_OFFSET UNITYSDK_OFFSET(0x1EA8F470)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_3_OFFSET UNITYSDK_OFFSET(0x1EA8F2D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_OFFSET UNITYSDK_OFFSET(0x1EA8F220)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCCLICKEVENTHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA927E0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCCLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA92720)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCENDEDITEVENTHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA93EC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCENDEDITEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA93DF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA92590)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_10_OFFSET UNITYSDK_OFFSET(0x1EA947F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_11_OFFSET UNITYSDK_OFFSET(0x1EA948C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA92C60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_2_OFFSET UNITYSDK_OFFSET(0x1EA93030)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_3_OFFSET UNITYSDK_OFFSET(0x1EA93100)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_4_OFFSET UNITYSDK_OFFSET(0x1EA934C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_5_OFFSET UNITYSDK_OFFSET(0x1EA93590)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_6_OFFSET UNITYSDK_OFFSET(0x1EA93960)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_7_OFFSET UNITYSDK_OFFSET(0x1EA93A30)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_8_OFFSET UNITYSDK_OFFSET(0x1EA942F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_9_OFFSET UNITYSDK_OFFSET(0x1EA943C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA92B90)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_1_OFFSET UNITYSDK_OFFSET(0x1EA900E0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_2_OFFSET UNITYSDK_OFFSET(0x1EA90390)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_3_OFFSET UNITYSDK_OFFSET(0x1EA90A50)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_4_OFFSET UNITYSDK_OFFSET(0x1EA910B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_5_OFFSET UNITYSDK_OFFSET(0x1EA91700)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_6_OFFSET UNITYSDK_OFFSET(0x1EA91D50)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1EA8F870)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASASYNCENUMERABLE_1_OFFSET UNITYSDK_OFFSET(0x1EA92B30)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASASYNCENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1EA92A80)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA92990)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x1EA92850)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASASYNCENUMERABLE_1_OFFSET UNITYSDK_OFFSET(0x1EA94280)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASASYNCENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1EA941D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA940B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASYNC_OFFSET UNITYSDK_OFFSET(0x1EA93F40)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONINVOKEASASYNCENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1EA926C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONINVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x1EA925F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_10_OFFSET UNITYSDK_OFFSET(0x1EA94B60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_11_OFFSET UNITYSDK_OFFSET(0x1EA94C10)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_1_OFFSET UNITYSDK_OFFSET(0x1EA92FC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_2_OFFSET UNITYSDK_OFFSET(0x1EA933A0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_3_OFFSET UNITYSDK_OFFSET(0x1EA93450)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_4_OFFSET UNITYSDK_OFFSET(0x1EA93850)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_5_OFFSET UNITYSDK_OFFSET(0x1EA93900)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_6_OFFSET UNITYSDK_OFFSET(0x1EA93CD0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_7_OFFSET UNITYSDK_OFFSET(0x1EA93D80)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_8_OFFSET UNITYSDK_OFFSET(0x1EA946D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_9_OFFSET UNITYSDK_OFFSET(0x1EA94780)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1EA92F10)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_10_OFFSET UNITYSDK_OFFSET(0x1EA94940)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_11_OFFSET UNITYSDK_OFFSET(0x1EA94A80)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA92E20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_2_OFFSET UNITYSDK_OFFSET(0x1EA93180)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_3_OFFSET UNITYSDK_OFFSET(0x1EA932C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_4_OFFSET UNITYSDK_OFFSET(0x1EA93600)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_5_OFFSET UNITYSDK_OFFSET(0x1EA93750)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_6_OFFSET UNITYSDK_OFFSET(0x1EA93AB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_7_OFFSET UNITYSDK_OFFSET(0x1EA93BF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_8_OFFSET UNITYSDK_OFFSET(0x1EA94440)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_9_OFFSET UNITYSDK_OFFSET(0x1EA945B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1EA92CE0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_STARTASYNCCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EA902F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_1_OFFSET UNITYSDK_OFFSET(0x1EA90240)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_2_OFFSET UNITYSDK_OFFSET(0x1EA90440)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_3_OFFSET UNITYSDK_OFFSET(0x1EA90B00)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_4_OFFSET UNITYSDK_OFFSET(0x1EA91160)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_5_OFFSET UNITYSDK_OFFSET(0x1EA917B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_6_OFFSET UNITYSDK_OFFSET(0x1EA91E00)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x1EA8F9B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x1EA90080)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_10_OFFSET UNITYSDK_OFFSET(0x1EA91DC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_11_OFFSET UNITYSDK_OFFSET(0x1EA92020)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_1_OFFSET UNITYSDK_OFFSET(0x1EA8FBF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_2_OFFSET UNITYSDK_OFFSET(0x1EA90400)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_3_OFFSET UNITYSDK_OFFSET(0x1EA905C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_4_OFFSET UNITYSDK_OFFSET(0x1EA90AC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_5_OFFSET UNITYSDK_OFFSET(0x1EA90CB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_6_OFFSET UNITYSDK_OFFSET(0x1EA91120)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_7_OFFSET UNITYSDK_OFFSET(0x1EA91300)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_8_OFFSET UNITYSDK_OFFSET(0x1EA91770)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_9_OFFSET UNITYSDK_OFFSET(0x1EA91950)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1EA8FAB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_TypeDefinitionIndex = 42864;

	class UnityAsyncExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(::UnityEngine::AssetBundleRequest* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter(*)(::UnityEngine::AssetBundleRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*> AwaitForAllAssets_1(::UnityEngine::AssetBundleRequest* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*>(*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*> AwaitForAllAssets_2(::UnityEngine::AssetBundleRequest* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*>(*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_2_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*> AwaitForAllAssets_3(::UnityEngine::AssetBundleRequest* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Object*>*>(*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_AWAITFORALLASSETS_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> GetAwaiter(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> WithCancellation_1(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_1_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ToUniTask(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::UniTask WaitAsync(::Unity::Jobs::JobHandle a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WAITASYNC_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_1(::Unity::Jobs::JobHandle a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask ToUniTask_1(::Unity::Jobs::JobHandle a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartAsyncCoroutine(::UnityEngine::MonoBehaviour* a1, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::MonoBehaviour*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_STARTASYNCCOROUTINE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter GetAwaiter_2(::UnityEngine::AsyncOperation* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_2_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask WithCancellation_2(::UnityEngine::AsyncOperation* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::AsyncOperation*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask WithCancellation_3(::UnityEngine::AsyncOperation* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::AsyncOperation*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_3_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask ToUniTask_2(::UnityEngine::AsyncOperation* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::AsyncOperation*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter GetAwaiter_3(::UnityEngine::ResourceRequest* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter(*)(::UnityEngine::ResourceRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_3_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> WithCancellation_4(::UnityEngine::ResourceRequest* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::ResourceRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> WithCancellation_5(::UnityEngine::ResourceRequest* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::ResourceRequest*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_5_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> ToUniTask_3(::UnityEngine::ResourceRequest* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::ResourceRequest*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter GetAwaiter_4(::UnityEngine::AssetBundleRequest* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter(*)(::UnityEngine::AssetBundleRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> WithCancellation_6(::UnityEngine::AssetBundleRequest* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> WithCancellation_7(::UnityEngine::AssetBundleRequest* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_7_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*> ToUniTask_4(::UnityEngine::AssetBundleRequest* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Object*>(*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter GetAwaiter_5(::UnityEngine::AssetBundleCreateRequest* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter(*)(::UnityEngine::AssetBundleCreateRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_5_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*> WithCancellation_8(::UnityEngine::AssetBundleCreateRequest* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*>(*)(::UnityEngine::AssetBundleCreateRequest*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*> WithCancellation_9(::UnityEngine::AssetBundleCreateRequest* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*>(*)(::UnityEngine::AssetBundleCreateRequest*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_9_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*> ToUniTask_5(::UnityEngine::AssetBundleCreateRequest* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AssetBundle*>(*)(::UnityEngine::AssetBundleCreateRequest*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter GetAwaiter_6(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETAWAITER_6_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> WithCancellation_10(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> WithCancellation_11(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_WITHCANCELLATION_11_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> ToUniTask_6(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1, ::System::IProgress_1<::System::Single>* a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::IProgress_1<::System::Single>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_TOUNITASK_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* GetAsyncEventHandler(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnityEventHandler*(*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCEVENTHANDLER_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnInvokeAsync(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONINVOKEASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONINVOKEASASYNCENUMERABLE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler(::UnityEngine::UI::Button* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncClickEventHandler*(*)(::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCCLICKEVENTHANDLER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler_1(::UnityEngine::UI::Button* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncClickEventHandler*(*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCCLICKEVENTHANDLER_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnClickAsync(::UnityEngine::UI::Button* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASYNC_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnClickAsync_1(::UnityEngine::UI::Button* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable(::UnityEngine::UI::Button* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASASYNCENUMERABLE_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable_1(::UnityEngine::UI::Button* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONCLICKASASYNCENUMERABLE_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Boolean>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Boolean>*(*)(::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Boolean>* GetAsyncValueChangedEventHandler_1(::UnityEngine::UI::Toggle* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Boolean>*(*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnValueChangedAsync(::UnityEngine::UI::Toggle* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnValueChangedAsync_1(::UnityEngine::UI::Toggle* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*(*)(::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* OnValueChangedAsAsyncEnumerable_1(::UnityEngine::UI::Toggle* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*(*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>* GetAsyncValueChangedEventHandler_2(::UnityEngine::UI::Scrollbar* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>*(*)(::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_2_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>* GetAsyncValueChangedEventHandler_3(::UnityEngine::UI::Scrollbar* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>*(*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnValueChangedAsync_2(::UnityEngine::UI::Scrollbar* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_2_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnValueChangedAsync_3(::UnityEngine::UI::Scrollbar* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* OnValueChangedAsAsyncEnumerable_2(::UnityEngine::UI::Scrollbar* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*(*)(::UnityEngine::UI::Scrollbar*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_2_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* OnValueChangedAsAsyncEnumerable_3(::UnityEngine::UI::Scrollbar* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*(*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler_4(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*(*)(::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler_5(::UnityEngine::UI::ScrollRect* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*(*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync_4(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>(*)(::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync_5(::UnityEngine::UI::ScrollRect* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>(*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable_4(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*(*)(::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable_5(::UnityEngine::UI::ScrollRect* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*(*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>* GetAsyncValueChangedEventHandler_6(::UnityEngine::UI::Slider* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>*(*)(::UnityEngine::UI::Slider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_6_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>* GetAsyncValueChangedEventHandler_7(::UnityEngine::UI::Slider* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Single>*(*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnValueChangedAsync_6(::UnityEngine::UI::Slider* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::UnityEngine::UI::Slider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_6_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> OnValueChangedAsync_7(::UnityEngine::UI::Slider* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* OnValueChangedAsAsyncEnumerable_6(::UnityEngine::UI::Slider* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*(*)(::UnityEngine::UI::Slider*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_6_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* OnValueChangedAsAsyncEnumerable_7(::UnityEngine::UI::Slider* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*(*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::System::String*>* GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::System::String*>*(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCENDEDITEVENTHANDLER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::System::String*>* GetAsyncEndEditEventHandler_1(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::System::String*>*(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCENDEDITEVENTHANDLER_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::String*> OnEndEditAsync(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASYNC_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::String*> OnEndEditAsync_1(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASASYNCENUMERABLE_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* OnEndEditAsAsyncEnumerable_1(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONENDEDITASASYNCENUMERABLE_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::String*>* GetAsyncValueChangedEventHandler_8(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::String*>*(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_8_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::String*>* GetAsyncValueChangedEventHandler_9(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::String*>*(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::String*> OnValueChangedAsync_8(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_8_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::String*> OnValueChangedAsync_9(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* OnValueChangedAsAsyncEnumerable_8(::UnityEngine::UI::InputField* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*(*)(::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_8_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* OnValueChangedAsAsyncEnumerable_9(::UnityEngine::UI::InputField* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*(*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Int32>* GetAsyncValueChangedEventHandler_10(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Int32>*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_10_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Int32>* GetAsyncValueChangedEventHandler_11(::UnityEngine::UI::Dropdown* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::System::Int32>*(*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_GETASYNCVALUECHANGEDEVENTHANDLER_11_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnValueChangedAsync_10(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_10_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnValueChangedAsync_11(::UnityEngine::UI::Dropdown* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASYNC_11_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* OnValueChangedAsAsyncEnumerable_10(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_10_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* OnValueChangedAsAsyncEnumerable_11(::UnityEngine::UI::Dropdown* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*(*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ONVALUECHANGEDASASYNCENUMERABLE_11_OFFSET))(a1, a2);
		}
	};
}
