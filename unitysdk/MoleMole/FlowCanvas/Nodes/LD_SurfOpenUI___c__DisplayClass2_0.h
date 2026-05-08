#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_SurfOpenUI; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10E17FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI___C__DISPLAYCLASS2_0__START_B__0_OFFSET UNITYSDK_OFFSET(0x10E17FE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfOpenUI___c__DisplayClass2_0_TypeDefinitionIndex = 59621;

	class LD_SurfOpenUI___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_SurfOpenUI* __4__this; // 0x10
		::FlowCanvas::Flow flow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI___C__DISPLAYCLASS2_0__START_B__0_OFFSET))(this);
		}
	};
}
