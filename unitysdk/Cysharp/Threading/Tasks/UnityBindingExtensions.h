#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class AsyncReactiveProperty_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Text; }

#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_1_OFFSET UNITYSDK_OFFSET(0x1EA9A510)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_OFFSET UNITYSDK_OFFSET(0x1EA9A380)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_1_OFFSET UNITYSDK_OFFSET(0x1EA9A3E0)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_2_OFFSET UNITYSDK_OFFSET(0x1EA9A440)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_3_OFFSET UNITYSDK_OFFSET(0x1EA9A570)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_OFFSET UNITYSDK_OFFSET(0x1EA9A2B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityBindingExtensions_TypeDefinitionIndex = 42902;

	class UnityBindingExtensions : public ::System::Object
	{
	public:
		static ::System::Void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindTo_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* a1, ::UnityEngine::UI::Text* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BindTo_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindTo_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTO_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>* a1, ::UnityEngine::UI::Selectable* a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Boolean>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS_BINDTOCORE_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
