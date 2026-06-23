#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_DO_OFFSET UNITYSDK_OFFSET(0x15813880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15813620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x158140B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x158140F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x15814980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_2_OFFSET UNITYSDK_OFFSET(0x15814990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayNapCameraSequence_TypeDefinitionIndex = 42674;

	class LDPlayNapCameraSequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::FlowOutput* _onFailed; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Utils::NapCameraSequence*>* _sequence; // 0xB8
		::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle _handle; // 0xC0
		::FlowCanvas::FlowOutput* _onStop; // 0xD0
		::FlowCanvas::FlowInput* _in; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* _timeOut; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* _playRate; // 0xE8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _instigator; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::Utils::INapCameraSequenceDataTableEntry*>* _config; // 0xF8
		::FlowCanvas::ValueInput_1<::System::String*>* _section; // 0x100
		::System::String* _failureMessage; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_DO_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__12_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_0_OFFSET))(this, f);
		}

		::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle _RegisterPorts_b__12_1()
		{
			return ((::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_1_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__12_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_2_OFFSET))(this);
		}
	};
}
