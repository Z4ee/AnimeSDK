#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas { class HackerGameBound; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11736DA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x11736DB0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x11736DD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x11736DF0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x11736E10)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__4_OFFSET UNITYSDK_OFFSET(0x11736E30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBound___c__DisplayClass5_0_TypeDefinitionIndex = 59193;

	class HackerGameBound___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::HackerGameBound* __4__this; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__2_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__3_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__4(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__4_OFFSET))(this, f);
		}
	};
}
