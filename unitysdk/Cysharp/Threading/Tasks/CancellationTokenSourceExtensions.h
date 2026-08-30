#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_1_OFFSET UNITYSDK_OFFSET(0x1D746710)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_OFFSET UNITYSDK_OFFSET(0x1D7466A0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET UNITYSDK_OFFSET(0x1D746650)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_REGISTERRAISECANCELONDESTROY_1_OFFSET UNITYSDK_OFFSET(0x1D7468E0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_REGISTERRAISECANCELONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D746870)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D746B30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenSourceExtensions_TypeDefinitionIndex = 42553;

	class CancellationTokenSourceExtensions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_CancelCancellationTokenSourceStateDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSourceExtensions_TypeDefinitionIndex)->GetStaticField(0x61970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void CancelCancellationTokenSourceState(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET))(a1);
		}

		static ::System::IDisposable* CancelAfterSlim(::System::Threading::CancellationTokenSource* a1, ::System::Int32 a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4)
		{
			return ((::System::IDisposable*(*)(::System::Threading::CancellationTokenSource*, ::System::Int32, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IDisposable* CancelAfterSlim_1(::System::Threading::CancellationTokenSource* a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4)
		{
			return ((::System::IDisposable*(*)(::System::Threading::CancellationTokenSource*, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RegisterRaiseCancelOnDestroy(::System::Threading::CancellationTokenSource* a1, ::UnityEngine::Component* a2)
		{
			return ((::System::Void(*)(::System::Threading::CancellationTokenSource*, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_REGISTERRAISECANCELONDESTROY_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterRaiseCancelOnDestroy_1(::System::Threading::CancellationTokenSource* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::System::Threading::CancellationTokenSource*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_REGISTERRAISECANCELONDESTROY_1_OFFSET))(a1, a2);
		}
	};
}
