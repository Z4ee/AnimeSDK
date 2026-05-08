#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class LDWhileNext; }
namespace FlowCanvas::Nodes { class LDWhileNext___c__DisplayClass8_0; }

#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13637890)
#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13637C70)
#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13637CD0)
#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13637C80)
#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13637880)
#define FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x13637870)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWhileNext__DoWhile_d__8_TypeDefinitionIndex = 46801;

	class LDWhileNext__DoWhile_d__8 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x10
		::FlowCanvas::Nodes::LDWhileNext___c__DisplayClass8_0* __8__1; // 0x18
		::FlowCanvas::FlowOutput* fUpdate; // 0x20
		::System::Object* __2__current; // 0x28
		::FlowCanvas::Flow f; // 0x30
		::FlowCanvas::FlowOutput* fFinish; // 0x58
		::FlowCanvas::Nodes::LDWhileNext* __4__this; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT__DOWHILE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
