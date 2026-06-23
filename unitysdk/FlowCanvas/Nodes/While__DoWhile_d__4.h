#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class While; }
namespace FlowCanvas::Nodes { class While___c__DisplayClass4_0; }

#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CC367E0)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC36A40)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CC36AA0)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CC36A50)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC367D0)
#define FLOWCANVAS_NODES_WHILE__DOWHILE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC367C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int While__DoWhile_d__4_TypeDefinitionIndex = 29122;

	class While__DoWhile_d__4 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::While* __4__this; // 0x10
		::FlowCanvas::FlowOutput* fUpdate; // 0x18
		::FlowCanvas::FlowOutput* fFinish; // 0x20
		::System::Object* __2__current; // 0x28
		::FlowCanvas::Nodes::While___c__DisplayClass4_0* __8__1; // 0x30
		::FlowCanvas::Flow f; // 0x38
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE__DOWHILE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
