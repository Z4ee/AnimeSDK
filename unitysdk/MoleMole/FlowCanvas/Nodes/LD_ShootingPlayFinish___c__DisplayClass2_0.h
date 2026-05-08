#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_ShootingPlayFinish; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOOTINGPLAYFINISH___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149A0020)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOOTINGPLAYFINISH___C__DISPLAYCLASS2_0__START_B__0_OFFSET UNITYSDK_OFFSET(0x149A0030)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShootingPlayFinish___c__DisplayClass2_0_TypeDefinitionIndex = 81928;

	class LD_ShootingPlayFinish___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_ShootingPlayFinish* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOOTINGPLAYFINISH___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOOTINGPLAYFINISH___C__DISPLAYCLASS2_0__START_B__0_OFFSET))(this);
		}
	};
}
