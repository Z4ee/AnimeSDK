#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::EventSystems { class BaseInput; }

#define CLASS_1_7E6CDC97335C6915_METHOD_1_6DEE9254DFA508D9_1_OFFSET UNITYSDK_OFFSET(0x16ADD170)
#define CLASS_1_7E6CDC97335C6915_METHOD_1_6DEE9254DFA508D9_OFFSET UNITYSDK_OFFSET(0x16ADCFA0)
#define CLASS_1_7E6CDC97335C6915_METHOD_1_C23F8EC875F3A69A_OFFSET UNITYSDK_OFFSET(0x16ADD230)
#define CLASS_1_7E6CDC97335C6915_METHOD_1_E3EB1412C632624C_OFFSET UNITYSDK_OFFSET(0x16ADD060)
#define CLASS_1_7E6CDC97335C6915_METHOD_1_ED4E28ADDF899863_OFFSET UNITYSDK_OFFSET(0x16ADD0F0)

inline static constexpr unsigned int Class_1_7E6CDC97335C6915_TypeDefinitionIndex = 61840;

class Class_1_7E6CDC97335C6915 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6DEE9254DFA508D9(::System::Int32 a1, ::UnityEngine::EventSystems::BaseInput* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + CLASS_1_7E6CDC97335C6915_METHOD_1_6DEE9254DFA508D9_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_E3EB1412C632624C(::UnityEngine::EventSystems::BaseInput* a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + CLASS_1_7E6CDC97335C6915_METHOD_1_E3EB1412C632624C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ED4E28ADDF899863(::UnityEngine::Touch a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Touch))((::PBYTE)hIl2Cpp + CLASS_1_7E6CDC97335C6915_METHOD_1_ED4E28ADDF899863_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6DEE9254DFA508D9_1(::System::Int32 a1, ::UnityEngine::EventSystems::BaseInput* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + CLASS_1_7E6CDC97335C6915_METHOD_1_6DEE9254DFA508D9_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C23F8EC875F3A69A(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E6CDC97335C6915_METHOD_1_C23F8EC875F3A69A_OFFSET))(a1);
	}
};
