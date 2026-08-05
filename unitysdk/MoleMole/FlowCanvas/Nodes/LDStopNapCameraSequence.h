#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE_DO_OFFSET UNITYSDK_OFFSET(0x19245460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x192452E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19245680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x192456C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x192459A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStopNapCameraSequence_TypeDefinitionIndex = 56978;

	class LDStopNapCameraSequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*>* _blendSetting; // 0xA8
		::FlowCanvas::FlowOutput* _onFailed; // 0xB0
		::System::String* _errorMessage; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* _handle; // 0xC0
		::FlowCanvas::FlowOutput* _out; // 0xC8
		::FlowCanvas::FlowInput* _in; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE_DO_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::System::String* _RegisterPorts_b__6_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTOPNAPCAMERASEQUENCE__REGISTERPORTS_B__6_1_OFFSET))(this);
		}
	};
}
