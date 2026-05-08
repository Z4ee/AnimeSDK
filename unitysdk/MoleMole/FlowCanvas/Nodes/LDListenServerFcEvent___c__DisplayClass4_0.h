#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDListenServerFcEvent; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4AD10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x16E4AD20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x16E4AE50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenServerFcEvent___c__DisplayClass4_0_TypeDefinitionIndex = 45703;

	class LDListenServerFcEvent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDListenServerFcEvent* __4__this; // 0x10
		::System::String* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
