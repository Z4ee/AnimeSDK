#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int UnityEventEx_1_TypeDefinitionIndex = 25845;

	template <typename T0>
	class UnityEventEx_1 : public ::UnityEngine::Events::UnityEvent_1<T0>
	{
	public:
		::System::Object* mCallerList; // 0x0
		::System::Reflection::MethodInfo* mCallsCount; // 0x0
		::System::Int32 mCount; // 0x0
	};
}
