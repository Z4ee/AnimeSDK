#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDPlayShootingStartTips; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15415A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS___C__DISPLAYCLASS2_0__START_G__CONTINUEFLOW_0_OFFSET UNITYSDK_OFFSET(0x15415AA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayShootingStartTips___c__DisplayClass2_0_TypeDefinitionIndex = 65155;

	class LDPlayShootingStartTips___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDPlayShootingStartTips* __4__this; // 0x10
		::FlowCanvas::Flow flow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_g__ContinueFlow_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS___C__DISPLAYCLASS2_0__START_G__CONTINUEFLOW_0_OFFSET))(this);
		}
	};
}
