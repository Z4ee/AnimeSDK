#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_1_A26009A270D71B3D;
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace MoleMole::FlowCanvas::Nodes { class LD_StartLimitChallenge; }
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11616680)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__1_OFFSET UNITYSDK_OFFSET(0x11616C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__2_OFFSET UNITYSDK_OFFSET(0x11616C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__3_OFFSET UNITYSDK_OFFSET(0x11616CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__4_OFFSET UNITYSDK_OFFSET(0x11616D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__5_OFFSET UNITYSDK_OFFSET(0x11616D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__6_OFFSET UNITYSDK_OFFSET(0x11616FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__7_OFFSET UNITYSDK_OFFSET(0x11617050)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_G__STARTCHALLENGE_0_OFFSET UNITYSDK_OFFSET(0x11616690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartLimitChallenge___c__DisplayClass27_0_TypeDefinitionIndex = 79937;

	class LD_StartLimitChallenge___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::System::Action* __9__7; // 0x38
		::MoleMole::FlowCanvas::Nodes::LD_StartLimitChallenge* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_g__StartChallenge_0(::Class_1_A26009A270D71B3D* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A26009A270D71B3D*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_G__STARTCHALLENGE_0_OFFSET))(this, item);
		}

		::System::Void _OnStart_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__1_OFFSET))(this);
		}

		::System::Void _OnStart_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__2_OFFSET))(this);
		}

		::System::Void _OnStart_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__3_OFFSET))(this);
		}

		::System::Void _OnStart_b__4(::MoleMole::Battle::ChallengeSubTypeItem* typeItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__4_OFFSET))(this, typeItem);
		}

		::System::Void _OnStart_b__5(::MoleMole::Battle::ChallengeSubTypeItem* typeItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__5_OFFSET))(this, typeItem);
		}

		::System::Void _OnStart_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__6_OFFSET))(this);
		}

		::System::Void _OnStart_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE___C__DISPLAYCLASS27_0__ONSTART_B__7_OFFSET))(this);
		}
	};
}
