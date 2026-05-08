#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDFariyTipCountDown; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1498E6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1498E6B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFariyTipCountDown___c__DisplayClass5_0_TypeDefinitionIndex = 64837;

	class LDFariyTipCountDown___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDFariyTipCountDown* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
