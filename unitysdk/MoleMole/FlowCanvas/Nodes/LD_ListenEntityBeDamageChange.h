#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x107D8A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x107D89B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x107D8A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x107D8450)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x107D8810)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__BINDEVENT_OFFSET UNITYSDK_OFFSET(0x107D8670)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x107D9150)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x107D9190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x107D94D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__START_OFFSET UNITYSDK_OFFSET(0x107D8620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x107D9560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x107D9570)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ListenEntityBeDamageChange_TypeDefinitionIndex = 52146;

	class LD_ListenEntityBeDamageChange : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entityInput; // 0xA8
		::FlowCanvas::FlowOutput* internalValueOutPut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* lowToValueInput; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::FlowOutput* everyValueOutPut; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* internalValueInput; // 0xD0
		::FlowCanvas::FlowOutput* onLowToValueOutPut; // 0xD8
		::System::Boolean totalNotifyTag; // 0xE0
		::System::Boolean hasBindEvent; // 0xE1
		::System::Single totalBeDamage; // 0xE4
		::System::Single internalBeDamage; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__START_OFFSET))(this);
		}

		::System::Void _BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE_ONEVENT_OFFSET))(this, evt);
		}

		::System::Int32 _RegisterPorts_b__11_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__REGISTERPORTS_B__11_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENENTITYBEDAMAGECHANGE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
