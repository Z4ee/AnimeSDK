#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_2_2CBC78D5C92D43A4;
class Class_3_32CD58E95ADFF8F5_27;
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_ManualStartInteractionRpc; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161E8250)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x161E8260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x161E82D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0_TypeDefinitionIndex = 54545;

	class LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Class_2_2CBC78D5C92D43A4* interaction; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_ManualStartInteractionRpc* __4__this; // 0x18
		::FlowCanvas::Flow flow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::Class_3_32CD58E95ADFF8F5_27* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET))(this, msg);
		}

		::System::Void _RegisterPorts_b__2(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET))(this, msg);
		}
	};
}
