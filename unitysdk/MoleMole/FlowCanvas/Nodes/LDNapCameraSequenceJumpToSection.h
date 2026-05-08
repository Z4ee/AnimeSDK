#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION_DO_OFFSET UNITYSDK_OFFSET(0x16E4B150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16E4AFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4B420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x16E4B460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x16E4B800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDNapCameraSequenceJumpToSection_TypeDefinitionIndex = 77520;

	class LDNapCameraSequenceJumpToSection : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* _in; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* _handle; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* _section; // 0xC0
		::System::String* _errorMessage; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _toEnd; // 0xD0
		::FlowCanvas::FlowOutput* _onFailed; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION_DO_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::String* _RegisterPorts_b__7_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNAPCAMERASEQUENCEJUMPTOSECTION__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
