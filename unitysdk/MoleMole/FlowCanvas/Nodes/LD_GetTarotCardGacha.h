#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_F7E5D5115AAF8D85;
class Class_3_6EF456A21AE85EEC_15;
class Class_3_BC1F78839C5B555C;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_CHOOSEACTION_OFFSET UNITYSDK_OFFSET(0x1499D930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1499DCE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1499DD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONSELECTEDCALL_OFFSET UNITYSDK_OFFSET(0x1499DC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REFRESHACTION_OFFSET UNITYSDK_OFFSET(0x1499D8E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1499CC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1499E080)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_G___DELAYWAIT_13_1_OFFSET UNITYSDK_OFFSET(0x1499E3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1499DD80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__ONRECV_OFFSET UNITYSDK_OFFSET(0x1499D150)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REFRESHCARD_OFFSET UNITYSDK_OFFSET(0x1499CDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1499DDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1499DDD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1499E3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1499E400)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_0_OFFSET UNITYSDK_OFFSET(0x1499DED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_1_OFFSET UNITYSDK_OFFSET(0x1499E000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTarotCardGacha_TypeDefinitionIndex = 75043;

	class LD_GetTarotCardGacha : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _indexInput; // 0xA8
		::Class_1_F7E5D5115AAF8D85* _ldGetTarot; // 0xB0
		::UnityEngine::Coroutine* _afterChooseCoroutine; // 0xB8
		::FlowCanvas::FlowOutput* _output; // 0xC0
		::FlowCanvas::FlowOutput* _onPop; // 0xC8
		::FlowCanvas::FlowOutput* _onSelected; // 0xD0
		::System::Int32 _SelectItemID; // 0xD8
		::System::Boolean isValid; // 0xDC
		::System::Boolean isInRefresh; // 0xDD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RefreshCard(::System::Boolean isRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REFRESHCARD_OFFSET))(this, isRefresh);
		}

		::System::Void _OnRecv(::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_15*>* cardCachaDataList, ::System::Int32 refreshCount, ::System::Boolean isRefreshNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_6EF456A21AE85EEC_15*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__ONRECV_OFFSET))(this, cardCachaDataList, refreshCount, isRefreshNew);
		}

		::System::Void RefreshAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_REFRESHACTION_OFFSET))(this);
		}

		::System::Void ChooseAction(::System::Int32 value, ::System::Int32 itemId, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_CHOOSEACTION_OFFSET))(this, value, itemId, action);
		}

		::System::Void OnSelectedCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONSELECTEDCALL_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__REGISTERPORTS_B__6_1_OFFSET))(this, f);
		}

		::System::Void __RefreshCard_b__8_0(::System::Boolean b, ::Class_3_BC1F78839C5B555C* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_BC1F78839C5B555C*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_0_OFFSET))(this, b, rsp);
		}

		::System::Void __RefreshCard_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___REFRESHCARD_B__8_1_OFFSET))(this);
		}

		::System::Void _ChooseAction_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_B__13_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _ChooseAction_g___DelayWait_13_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA__CHOOSEACTION_G___DELAYWAIT_13_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
