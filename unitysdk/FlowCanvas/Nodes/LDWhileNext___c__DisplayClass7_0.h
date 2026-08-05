#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class LDWhileNext; }

#define FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F286A0)
#define FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x17F286B0)
#define FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x17F28840)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWhileNext___c__DisplayClass7_0_TypeDefinitionIndex = 71778;

	class LDWhileNext___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* c; // 0x10
		::FlowCanvas::Nodes::LDWhileNext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS7_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}
	};
}
