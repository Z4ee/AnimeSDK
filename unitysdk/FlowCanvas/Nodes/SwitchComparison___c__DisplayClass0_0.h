#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class IComparable; }

#define FLOWCANVAS_NODES_SWITCHCOMPARISON___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8A620)
#define FLOWCANVAS_NODES_SWITCHCOMPARISON___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EF8A630)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchComparison___c__DisplayClass0_0_TypeDefinitionIndex = 31118;

	class SwitchComparison___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::IComparable*>* b; // 0x10
		::FlowCanvas::ValueInput_1<::System::IComparable*>* a; // 0x18
		::FlowCanvas::FlowOutput* equal; // 0x20
		::FlowCanvas::FlowOutput* less; // 0x28
		::FlowCanvas::FlowOutput* greater; // 0x30
		::FlowCanvas::FlowOutput* notEqual; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHCOMPARISON___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHCOMPARISON___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
