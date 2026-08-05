#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_87492AF8E794E45E_63;
class Class_5_F7642E8A3A348DE4;
namespace MoleMole::FlowCanvas::Nodes { class LD_ReCreateTeam; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x107D9B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__PROCESS_B__0_OFFSET UNITYSDK_OFFSET(0x107D9B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__PROCESS_G__CALLBACKWITHLOCALAVATAR_1_OFFSET UNITYSDK_OFFSET(0x107D9E30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReCreateTeam___c__DisplayClass2_0_TypeDefinitionIndex = 52094;

	class LD_ReCreateTeam___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_ReCreateTeam* __4__this; // 0x10
		::Class_5_F7642E8A3A348DE4* hgc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Process_b__0(::System::Boolean isSuccess, ::Class_3_87492AF8E794E45E_63* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_87492AF8E794E45E_63*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__PROCESS_B__0_OFFSET))(this, isSuccess, rsp);
		}

		::System::Void _Process_g__CallbackWithLocalAvatar_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM___C__DISPLAYCLASS2_0__PROCESS_G__CALLBACKWITHLOCALAVATAR_1_OFFSET))(this);
		}
	};
}
