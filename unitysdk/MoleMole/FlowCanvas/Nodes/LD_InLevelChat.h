#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_2_CEC585D0736F3660;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_GETAVAILABLECHATKEYS_OFFSET UNITYSDK_OFFSET(0x118C2730)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118C27B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x118C29A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x118C2A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x118C3250)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_2_OFFSET UNITYSDK_OFFSET(0x118C32C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_3_OFFSET UNITYSDK_OFFSET(0x118C2FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_5_OFFSET UNITYSDK_OFFSET(0x118C3000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelChat_TypeDefinitionIndex = 62633;

	class LD_InLevelChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* TAG; // 0x0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity; // 0xA8
		::FlowCanvas::FlowOutput* _onChatUIClosed; // 0xB0
		::FlowCanvas::FlowOutput* _onChatCameraBlendedOut; // 0xB8
		::FlowCanvas::FlowInput* _in; // 0xC0
		::FlowCanvas::FlowOutput* _onChatCameraBlendedIn; // 0xC8
		::FlowCanvas::FlowInput* _popUpChatUI; // 0xD0
		::FlowCanvas::FlowOutput* _out; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _outputData; // 0xE0
		::System::String* ChatKey; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Int32>* _overriddenChatID; // 0xF0
		::System::Boolean EnableChatEntityIK; // 0xF8
		::System::Boolean CutCameraBlendOut; // 0xF9
		::System::Boolean CutCameraBlendIn; // 0xFA
		::System::Boolean ManuallyFinishChat; // 0xFB
		::System::Boolean ManuallyStartUI; // 0xFC
		::System::Int32 ChatID; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetAvailableChatKeys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_GETAVAILABLECHATKEYS_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_5(::Class_2_CEC585D0736F3660* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_5_OFFSET))(this, chatSyncData);
		}

		::System::Void _RegisterPorts_b__18_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_1_OFFSET))(this, f);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _RegisterPorts_b__18_2()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_2_OFFSET))(this);
		}
	};
}
