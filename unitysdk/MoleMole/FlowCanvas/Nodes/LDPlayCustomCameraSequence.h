#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"

class Class_0_16E4307DCC419505_363;
class Class_1_AAE113EF1D654B70;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_CLEARWHENGAMEEND_OFFSET UNITYSDK_OFFSET(0x1710AEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_INVOKEKILLLEVELPERFORM_OFFSET UNITYSDK_OFFSET(0x1710AE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1710AC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1710AFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1710AFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1710B410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayCustomCameraSequence_TypeDefinitionIndex = 45388;

	class LDPlayCustomCameraSequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _onInFailed; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _sectionName; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* _graphName; // 0xC0
		::FlowCanvas::FlowOutput* _jumpOut; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* _config; // 0xD0
		::Class_1_AAE113EF1D654B70* _performer; // 0xD8
		::FlowCanvas::FlowOutput* _onJumpFailed; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* _environment; // 0xE8
		::FlowCanvas::FlowOutput* _onFinished; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* InvokeKillLevelPerform()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_INVOKEKILLLEVELPERFORM_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::UniTask ClearWhenGameEnd(::System::WeakReference_1<::Class_0_16E4307DCC419505_363*>* performer, ::Cysharp::Threading::Tasks::UniTask finishEventTask)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::WeakReference_1<::Class_0_16E4307DCC419505_363*>*, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_CLEARWHENGAMEEND_OFFSET))(performer, finishEventTask);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__10_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_1_OFFSET))(this, f);
		}
	};
}
