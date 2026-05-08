#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowGraph.h"

#define FLOWCANVAS_FLOWSCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB2C0)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowScriptBase_TypeDefinitionIndex = 26583;

	class FlowScriptBase : public ::FlowCanvas::FlowGraph
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPTBASE__CTOR_OFFSET))(this);
		}
	};
}
