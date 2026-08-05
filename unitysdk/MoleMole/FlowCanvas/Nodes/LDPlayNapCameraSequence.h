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

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_DO_OFFSET UNITYSDK_OFFSET(0x12992CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12992A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x129934F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x12993530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x12993DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE__REGISTERPORTS_B__12_2_OFFSET UNITYSDK_OFFSET(0x12993DC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayNapCameraSequence_TypeDefinitionIndex = 65339;

	class LDPlayNapCameraSequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* _failureMessage; // 0xA8
		::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle _handle; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* _timeOut; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::Utils::INapCameraSequenceDataTableEntry*>* _config; // 0xC8
		::FlowCanvas::FlowOutput* _onStop; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* _section; // 0xD8
		::FlowCanvas::FlowInput* _in; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* _playRate; // 0xE8
		::FlowCanvas::FlowOutput* _onFailed; // 0xF0
		::FlowCanvas::FlowOutput* _out; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::Utils::NapCameraSequence*>* _sequence; // 0x100
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _instigator; // 0x108

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
