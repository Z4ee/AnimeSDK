#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDStartRealtimeQTE; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151192A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__STARTREALTIMEQTE_B__0_OFFSET UNITYSDK_OFFSET(0x151192B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartRealtimeQTE___c__DisplayClass7_0_TypeDefinitionIndex = 54657;

	class LDStartRealtimeQTE___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDStartRealtimeQTE* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartRealtimeQTE_b__0(::Enum_3_D2BBBB758B896E04 finishType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D2BBBB758B896E04))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__STARTREALTIMEQTE_B__0_OFFSET))(this, finishType);
		}
	};
}
