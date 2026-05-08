#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAAD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x10BAAD40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowSceneInfo___c__DisplayClass7_0_TypeDefinitionIndex = 71570;

	class LDShowSceneInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* flowOutput; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
