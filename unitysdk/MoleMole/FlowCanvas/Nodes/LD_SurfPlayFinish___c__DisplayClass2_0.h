#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_SurfPlayFinish; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x136A2020)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH___C__DISPLAYCLASS2_0__START_B__0_OFFSET UNITYSDK_OFFSET(0x136A2030)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfPlayFinish___c__DisplayClass2_0_TypeDefinitionIndex = 50872;

	class LD_SurfPlayFinish___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_SurfPlayFinish* __4__this; // 0x10
		::FlowCanvas::Flow flow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH___C__DISPLAYCLASS2_0__START_B__0_OFFSET))(this);
		}
	};
}
