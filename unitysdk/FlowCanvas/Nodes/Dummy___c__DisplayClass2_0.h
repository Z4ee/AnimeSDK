#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_DUMMY___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D387F30)
#define FLOWCANVAS_NODES_DUMMY___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D387F40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Dummy___c__DisplayClass2_0_TypeDefinitionIndex = 30758;

	class Dummy___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fOut; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DUMMY___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DUMMY___C__DISPLAYCLASS2_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
