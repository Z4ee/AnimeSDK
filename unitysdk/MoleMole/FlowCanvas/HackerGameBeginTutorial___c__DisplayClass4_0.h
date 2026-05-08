#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas { class HackerGameBeginTutorial; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18410800)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___C__DISPLAYCLASS4_0__ONREGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x18410810)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBeginTutorial___c__DisplayClass4_0_TypeDefinitionIndex = 78260;

	class HackerGameBeginTutorial___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0x10
		::MoleMole::FlowCanvas::HackerGameBeginTutorial* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___C__DISPLAYCLASS4_0__ONREGISTERPORTS_B__0_OFFSET))(this, flow);
		}
	};
}
