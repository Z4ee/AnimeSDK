#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define FLOWCANVAS_NODES_CHANCE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C810)
#define FLOWCANVAS_NODES_CHANCE___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D51C820)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Chance___c__DisplayClass0_0_TypeDefinitionIndex = 30164;

	class Chance___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* chance; // 0x10
		::FlowCanvas::ValueInput_1<::System::Single>* max; // 0x18
		::FlowCanvas::FlowOutput* success; // 0x20
		::FlowCanvas::ValueInput_1<::System::Single>* min; // 0x28
		::FlowCanvas::FlowOutput* failure; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHANCE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHANCE___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
