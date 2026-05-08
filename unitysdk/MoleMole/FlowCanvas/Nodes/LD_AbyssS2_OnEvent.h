#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/Struct_2_C3228BF2D48C5B85.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_061E58EC483ADC82;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_BINDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x182164C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x18216CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x18216470)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x182167F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONPOSTGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18216C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x18216B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x18216D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18216310)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_UNBINDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x18216840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18216E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x18216EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x18216EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x18216ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x18216EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18216EF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONPOSTGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18216F00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_OnEvent_TypeDefinitionIndex = 74408;

	class LD_AbyssS2_OnEvent : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Struct_2_C3228BF2D48C5B85 _lastData; // 0xA8
		::FlowCanvas::FlowOutput* _onEvent; // 0xB8
		::FlowCanvas::ValueOutput_1<::MoleMole::AbyssS2_EventType>* _eventOut; // 0xC0
		::System::Boolean isBindEvent; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_BINDEVENTLISTENER_OFFSET))(this);
		}

		::System::Void OnStageChanged(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONSTAGECHANGED_OFFSET))(this, entity);
		}

		::System::Void OnPostGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONPOSTGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void UnBindEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_UNBINDEVENTLISTENER_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void ProcessEvent(::Class_2_061E58EC483ADC82* gameEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_061E58EC483ADC82*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT_PROCESSEVENT_OFFSET))(this, gameEvt);
		}

		::MoleMole::AbyssS2_EventType _RegisterPorts_b__4_0()
		{
			return ((::MoleMole::AbyssS2_EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnPostGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ONEVENT___BASE_ONPOSTGRAPHSTOPED_OFFSET))(this);
		}
	};
}
