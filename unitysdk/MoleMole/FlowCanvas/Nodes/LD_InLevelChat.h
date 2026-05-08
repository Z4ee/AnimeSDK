#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_D65512A83CF70AB7;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_GETAVAILABLECHATKEYS_OFFSET UNITYSDK_OFFSET(0x10E16BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E16C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x10E16E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x10E16F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x10E17740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_2_OFFSET UNITYSDK_OFFSET(0x10E177B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_3_OFFSET UNITYSDK_OFFSET(0x10E174B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_5_OFFSET UNITYSDK_OFFSET(0x10E174F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelChat_TypeDefinitionIndex = 64779;

	class LD_InLevelChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* TAG; // 0x0
		::FlowCanvas::FlowOutput* _onChatUIClosed; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _overriddenChatID; // 0xB0
		::FlowCanvas::FlowOutput* _onChatCameraBlendedOut; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _outputData; // 0xC0
		::FlowCanvas::FlowOutput* _onChatCameraBlendedIn; // 0xC8
		::System::String* ChatKey; // 0xD0
		::FlowCanvas::FlowOutput* _out; // 0xD8
		::FlowCanvas::FlowInput* _popUpChatUI; // 0xE0
		::FlowCanvas::FlowInput* _in; // 0xE8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity; // 0xF0
		::System::Boolean CutCameraBlendIn; // 0xF8
		::System::Int32 ChatID; // 0xFC
		::System::Boolean EnableChatEntityIK; // 0x100
		::System::Boolean ManuallyFinishChat; // 0x101
		::System::Boolean ManuallyStartUI; // 0x102
		::System::Boolean CutCameraBlendOut; // 0x103

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

		::System::Void _RegisterPorts_b__18_5(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT__REGISTERPORTS_B__18_5_OFFSET))(this, chatSyncData);
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
