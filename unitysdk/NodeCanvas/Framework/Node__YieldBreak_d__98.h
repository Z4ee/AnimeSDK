#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B7E9960)
#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7E9A00)
#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7E9A60)
#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7E9A10)
#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7E9950)
#define NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E9940)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node__YieldBreak_d__98_TypeDefinitionIndex = 28015;

	class Node__YieldBreak_d__98 : public ::System::Object
	{
	public:
		::System::Action* resume; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__YIELDBREAK_D__98_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
