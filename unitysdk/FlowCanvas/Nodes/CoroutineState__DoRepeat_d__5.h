#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class CoroutineState; }

#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DFC7FE0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DFC81B0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DFC8210)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DFC81C0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DFC7FD0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC7FC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CoroutineState__DoRepeat_d__5_TypeDefinitionIndex = 31421;

	class CoroutineState__DoRepeat_d__5 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fFinish; // 0x10
		::System::Object* __2__current; // 0x18
		::FlowCanvas::FlowOutput* fStart; // 0x20
		::FlowCanvas::FlowOutput* fUpdate; // 0x28
		::FlowCanvas::Nodes::CoroutineState* __4__this; // 0x30
		::FlowCanvas::Flow f; // 0x38
		::System::Int32 __1__state; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
