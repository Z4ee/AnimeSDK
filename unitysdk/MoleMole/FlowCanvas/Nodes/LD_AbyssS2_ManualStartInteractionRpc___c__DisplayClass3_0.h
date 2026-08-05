#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_360B5C80C04E3AB6;
class Class_3_5F8D071C8DE2658F;
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_ManualStartInteractionRpc; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144D0B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x144D0B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x144D0B80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0_TypeDefinitionIndex = 80254;

	class LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::Class_2_360B5C80C04E3AB6* interaction; // 0x38
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_ManualStartInteractionRpc* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::Class_3_5F8D071C8DE2658F* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8D071C8DE2658F*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET))(this, msg);
		}

		::System::Void _RegisterPorts_b__2(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET))(this, msg);
		}
	};
}
