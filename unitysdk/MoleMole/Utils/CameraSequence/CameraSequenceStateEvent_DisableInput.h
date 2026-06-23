#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5DA5A8B5C7266F47.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x108A05A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x108A05F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x108A0560)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_INPUTGROUP_OFFSET UNITYSDK_OFFSET(0x108A04C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x108A05E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x108A0750)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x108A0A90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x108A0A30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_SET_INPUTGROUP_OFFSET UNITYSDK_OFFSET(0x108A0510)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x108A0D70)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_DisableInput_TypeDefinitionIndex = 53964;

	class CameraSequenceStateEvent_DisableInput : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::Int32 _inputGroupMask; // 0x50
		::System::Int32 _inputGroup; // 0x54
		::Enum_3_5DA5A8B5C7266F47 _switchType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT__CTOR_OFFSET))(this);
		}

		::Foundation::EnumAsFlag_1<::MoleMole::Config::InputGroup> get_InputGroup()
		{
			return ((::Foundation::EnumAsFlag_1<::MoleMole::Config::InputGroup>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_INPUTGROUP_OFFSET))(this);
		}

		::System::Void set_InputGroup(::Foundation::EnumAsFlag_1<::MoleMole::Config::InputGroup> value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::MoleMole::Config::InputGroup>))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_SET_INPUTGROUP_OFFSET))(this, value);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEINPUT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
