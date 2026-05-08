#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_BEGIN_OFFSET UNITYSDK_OFFSET(0x125B0C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_DESTROYTARGETAREAUI_OFFSET UNITYSDK_OFFSET(0x125B1020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONEVENT_OFFSET UNITYSDK_OFFSET(0x125B1950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONFCSTARTQUICKEXECMODE_OFFSET UNITYSDK_OFFSET(0x125B1AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x125B18A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x125B1900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125B0B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_REMOVELISTEN_OFFSET UNITYSDK_OFFSET(0x125B1260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_STARTLISTEN_OFFSET UNITYSDK_OFFSET(0x125B1580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED__CTOR_OFFSET UNITYSDK_OFFSET(0x125B1C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x125B1DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x125B1E20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x125B1E30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenTargetAreaUIRemoved_TypeDefinitionIndex = 75698;

	class LDListenTargetAreaUIRemoved : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* listenedTarget; // 0xA8
		::FlowCanvas::FlowOutput* conditionReachedOutput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* targetUIInput; // 0xC0
		::System::Collections::Generic::List_1<::System::String*>* quickRemoveTargetList; // 0xC8
		::System::Boolean nodeEnter; // 0xD0
		::System::Boolean isListened; // 0xD1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void StartListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_STARTLISTEN_OFFSET))(this);
		}

		::System::Void RemoveListen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_REMOVELISTEN_OFFSET))(this);
		}

		::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONEVENT_OFFSET))(this, evt);
		}

		::System::Void DestroyTargetAreaUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_DESTROYTARGETAREAUI_OFFSET))(this);
		}

		::System::Void OnFcStartQuickExecMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED_ONFCSTARTQUICKEXECMODE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENTARGETAREAUIREMOVED___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
