#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1298E3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1298E510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONSERVERFCEVENT_OFFSET UNITYSDK_OFFSET(0x1298E290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1298DD40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1298E680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1298E6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1298E6D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenServerFcEvent_TypeDefinitionIndex = 88136;

	class LDListenServerFcEvent : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* _paramMap; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::System::Int32 _eventType; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnServerFcEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONSERVERFCEVENT_OFFSET))(this, obj);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENSERVERFCEVENT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
