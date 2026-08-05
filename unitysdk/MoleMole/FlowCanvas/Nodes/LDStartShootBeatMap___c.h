#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B13B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B13BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__REGISTERPORTS_G__STOP_5_0_OFFSET UNITYSDK_OFFSET(0x19B13BB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartShootBeatMap___c_TypeDefinitionIndex = 51814;

	class LDStartShootBeatMap___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDStartShootBeatMap___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDStartShootBeatMap___c**)Il2CppClass::FromTypeDefinitionIndex(LDStartShootBeatMap___c_TypeDefinitionIndex)->GetStaticField(0x39F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_g__Stop_5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__REGISTERPORTS_G__STOP_5_0_OFFSET))(this, flow);
		}
	};
}
