#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1261BEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO_START_OFFSET UNITYSDK_OFFSET(0x1261BF70)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1261C290)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1261C250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PlaySummerShootingClosingAudio_TypeDefinitionIndex = 84767;

	class PlaySummerShootingClosingAudio : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Event()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlaySummerShootingClosingAudio_TypeDefinitionIndex)->GetStaticField(0x30770);
		}
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGCLOSINGAUDIO_START_OFFSET))(this, flow);
		}
	};
}
