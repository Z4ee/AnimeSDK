#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class Finish; }

#define FLOWCANVAS_NODES_FINISH___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1370)
#define FLOWCANVAS_NODES_FINISH___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E1380)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Finish___c__DisplayClass0_0_TypeDefinitionIndex = 27916;

	class Finish___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Finish* __4__this; // 0x10
		::FlowCanvas::ValueInput_1<::System::Boolean>* c; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FINISH___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FINISH___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
