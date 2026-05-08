#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_0_16E4307DCC419505_212;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ConditionExpression; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x10BA20A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_DESC_OFFSET UNITYSDK_OFFSET(0x10BA21F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x10BA2160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BA1E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ISFAILBACK_OFFSET UNITYSDK_OFFSET(0x10BA21B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x10BA1E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10BA1BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10BA1D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x10BA1E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_PARSEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x10BA1900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10BA1820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_SAFEINVOKE_OFFSET UNITYSDK_OFFSET(0x10BA1FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA2260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x10BA22E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10BA22F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10BA2300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x10BA2310)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCheckPoint_TypeDefinitionIndex = 78950;

	class LDCheckPoint : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::ConditionExpression* expressionVal; // 0xA8
		::FlowCanvas::FlowOutput* Output; // 0xB0
		::FlowCanvas::FlowOutput* OnReconnect; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* ResetRandomValue; // 0xC0
		::System::String* ExpressionStr; // 0xC8
		::System::Int32 Priority; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean ParserExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_PARSEREXPRESSION_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ONGRAPHUNPAUSED_OFFSET))(this);
		}

		::System::Void Invoke(::FlowCanvas::Flow flow, ::System::Boolean asFirstSection)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_INVOKE_OFFSET))(this, flow, asFirstSection);
		}

		::System::Collections::IEnumerator* SafeInvoke(::FlowCanvas::Flow flow, ::System::Boolean asFirstSection)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_SAFEINVOKE_OFFSET))(this, flow, asFirstSection);
		}

		::System::Boolean CheckCondition(::Class_0_16E4307DCC419505_212* paramContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_212*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_CHECKCONDITION_OFFSET))(this, paramContext);
		}

		::System::Int32 GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_GETPRIORITY_OFFSET))(this);
		}

		::System::Boolean IsFailBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_ISFAILBACK_OFFSET))(this);
		}

		::System::String* Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT_DESC_OFFSET))(this);
		}

		::System::Void __base_OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT___BASE_ONGRAPHUNPAUSED_OFFSET))(this);
		}
	};
}
