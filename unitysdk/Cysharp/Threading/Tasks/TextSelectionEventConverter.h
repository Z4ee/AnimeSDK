#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityAction_3; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityEvent_3; }

#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D756A00)
#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_INVOKECORE_OFFSET UNITYSDK_OFFSET(0x1D7569A0)
#define CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7568D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TextSelectionEventConverter_TypeDefinitionIndex = 42895;

	class TextSelectionEventConverter : public ::UnityEngine::Events::UnityEvent_1<::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Int32>>
	{
	public:
		::UnityEngine::Events::UnityEvent_3<::System::String*, ::System::Int32, ::System::Int32>* innerEvent; // 0x30
		::UnityEngine::Events::UnityAction_3<::System::String*, ::System::Int32, ::System::Int32>* invokeDelegate; // 0x38

		::System::Void _ctor(::UnityEngine::Events::UnityEvent_3<::System::String*, ::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent_3<::System::String*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void InvokeCore(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_INVOKECORE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TEXTSELECTIONEVENTCONVERTER_DISPOSE_OFFSET))(this);
		}
	};
}
