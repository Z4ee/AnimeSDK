#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_NextPortalSelect; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170CB740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x170CB750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextPortalSelect___c__DisplayClass3_0_TypeDefinitionIndex = 68865;

	class LD_AbyssS2_NextPortalSelect___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_NextPortalSelect* __4__this; // 0x10
		::FlowCanvas::Flow flow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET))(this, isOk);
		}
	};
}
