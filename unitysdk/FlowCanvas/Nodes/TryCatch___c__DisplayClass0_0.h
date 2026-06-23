#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_TRYCATCH___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BB920)
#define FLOWCANVAS_NODES_TRYCATCH___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D7BB930)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TryCatch___c__DisplayClass0_0_TypeDefinitionIndex = 30625;

	class TryCatch___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fTry; // 0x10
		::FlowCanvas::FlowOutput* fFinally; // 0x18
		::FlowCanvas::FlowOutput* fCatch; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
