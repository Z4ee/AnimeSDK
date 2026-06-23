#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EDA7331D681F4905.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x12608D10)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x12608D60)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x12608CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x12608D50)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x12608EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x12609150)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x126090F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x126093E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x12609390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CameraSequenceStateEvent_DisableUI_TypeDefinitionIndex = 49733;

	class CameraSequenceStateEvent_DisableUI : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_DisableUI_TypeDefinitionIndex)->GetStaticField(0xAFA0);
		}
		::Enum_3_EDA7331D681F4905 _category; // 0x50
		::System::Int32 _priority; // 0x54
		::System::Boolean _ignoreFadeAnimation; // 0x58
		::System::String* _tag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_DISABLEUI_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
