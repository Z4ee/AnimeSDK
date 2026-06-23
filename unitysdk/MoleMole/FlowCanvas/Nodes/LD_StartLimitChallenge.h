#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_DB10471F01974BCE;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x161EE0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET UNITYSDK_OFFSET(0x161EE1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x161EE280)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x161EE300)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x161EE380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET UNITYSDK_OFFSET(0x161EDAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161ED610)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x161EE510)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET UNITYSDK_OFFSET(0x161EE610)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET UNITYSDK_OFFSET(0x161EE620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET UNITYSDK_OFFSET(0x161EE630)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET UNITYSDK_OFFSET(0x161EE6E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartLimitChallenge_TypeDefinitionIndex = 79936;

	class LD_StartLimitChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* ChallengeID; // 0xA8
		::FlowCanvas::FlowInput* DoFinish; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Single>* TimeLeft; // 0xB8
		::Class_3_DB10471F01974BCE* challengeItem; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsUseItem; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputSubItemOffsetProgress; // 0xD0
		::System::Collections::Generic::HashSet_1<::MoleMole::Battle::ChallengeSubTypeItem*>* _sucessSubTypeItems; // 0xD8
		::FlowCanvas::FlowOutput* SubSuccessOutput; // 0xE0
		::FlowCanvas::FlowInput* Pause; // 0xE8
		::MoleMole::Battle::ChallengeSubTypeItem* _lastSuccessChallengeSubTypeItem; // 0xF0
		::FlowCanvas::FlowOutput* FailOutput; // 0xF8
		::FlowCanvas::FlowInput* Start; // 0x100
		::FlowCanvas::FlowOutput* StartOutput; // 0x108
		::FlowCanvas::ValueInput_1<::System::Boolean>* ReadFromServer; // 0x110
		::FlowCanvas::ValueOutput_1<::System::Single>* NormalizedTime; // 0x118
		::FlowCanvas::FlowInput* Resume; // 0x120
		::FlowCanvas::FlowOutput* UpdateOutput; // 0x128
		::FlowCanvas::FlowOutput* Out; // 0x130
		::FlowCanvas::ValueInput_1<::System::Boolean>* DisableTaimeScale; // 0x138
		::FlowCanvas::ValueInput_1<::System::Boolean>* SubSuccessTriggerSelfSuccess; // 0x140
		::FlowCanvas::FlowInput* ForceSuccessFinish; // 0x148
		::FlowCanvas::FlowOutput* FinishOutput; // 0x150
		::FlowCanvas::FlowInput* DoSetSubItemProgress; // 0x158
		::MoleMole::Battle::ChallengeSubTypeItem* _challengeSubTypeItem; // 0x160
		::FlowCanvas::ValueInput_1<::System::Single>* TotalTime; // 0x168
		::System::Int32 _challengeIDVar; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnStart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET))(this, f);
		}

		::System::Void OnFinish(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET))(this, f);
		}

		::System::Void OnForceSuccessFinish(::FlowCanvas::Flow ff)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET))(this, ff);
		}

		::System::Void OnPause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET))(this, f);
		}

		::System::Void OnResume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET))(this, f);
		}

		::System::Void OnSetSubItemProgress(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET))(this, f);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_0()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET))(this);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_1()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET))(this);
		}
	};
}
