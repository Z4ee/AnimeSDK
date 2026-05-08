#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class SwitchBool; }

#define FLOWCANVAS_NODES_SWITCHBOOL___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F6F00)
#define FLOWCANVAS_NODES_SWITCHBOOL___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1A8F6F10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchBool___c__DisplayClass2_0_TypeDefinitionIndex = 28047;

	class SwitchBool___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* caseTrue; // 0x10
		::FlowCanvas::FlowOutput* caseFalse; // 0x18
		::FlowCanvas::Nodes::SwitchBool* __4__this; // 0x20
		::FlowCanvas::ValueInput_1<::System::Boolean>* selector; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHBOOL___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
