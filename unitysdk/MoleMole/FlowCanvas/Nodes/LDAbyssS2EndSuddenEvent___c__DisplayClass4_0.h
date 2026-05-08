#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_482;
namespace MoleMole::FlowCanvas::Nodes { class LDAbyssS2EndSuddenEvent; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT___C__DISPLAYCLASS4_0__ENDSUDDENEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x18A39130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2EndSuddenEvent___c__DisplayClass4_0_TypeDefinitionIndex = 59915;

	class LDAbyssS2EndSuddenEvent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDAbyssS2EndSuddenEvent* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _EndSuddenEvent_b__0(::System::Boolean b, ::Class_3_025FF4981524A424_482* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_482*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2ENDSUDDENEVENT___C__DISPLAYCLASS4_0__ENDSUDDENEVENT_B__0_OFFSET))(this, b, rsp);
		}
	};
}
