#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class EventArgs; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x116079B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONFINISH_OFFSET UNITYSDK_OFFSET(0x11607C90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x116076D0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x11607840)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11607590)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11607D10)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x11607D20)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x11607D30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBeginTutorial_TypeDefinitionIndex = 85173;

	class HackerGameBeginTutorial : public ::FlowCanvas::Nodes::CallableActionNodeBase
	{
	public:
		::FlowCanvas::FlowOutput* onFinish; // 0x30
		::FlowCanvas::ValueInput_1<::System::Int32>* groupId; // 0x38
		::FlowCanvas::Flow _flow; // 0x40
		::System::Boolean _isActive; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_INVOKE_OFFSET))(this, groupID);
		}

		::System::Void OnFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL_ONFINISH_OFFSET))(this, args);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBEGINTUTORIAL___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
