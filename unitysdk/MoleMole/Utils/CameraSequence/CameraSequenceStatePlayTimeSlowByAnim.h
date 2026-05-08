#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xE491240)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE491290)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GETNOTIFYNAME_OFFSET UNITYSDK_OFFSET(0xE491190)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GETTIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0xE490D60)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xE491200)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xE491280)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xE490DD0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xE490F90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xE490F30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE491350)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xE491300)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStatePlayTimeSlowByAnim_TypeDefinitionIndex = 47525;

	class CameraSequenceStatePlayTimeSlowByAnim : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_TimeSlowKeyId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStatePlayTimeSlowByAnim_TypeDefinitionIndex)->GetStaticField(0xDF60);
		}
		::System::String* fallbackTimeSlowKey; // 0x50
		::System::Single minStartTime; // 0x58
		::System::Single maxStartTime; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM__CCTOR_OFFSET))();
		}

		::System::String* GetTimeSlowKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GETTIMESLOWKEY_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::String* GetNotifyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GETNOTIFYNAME_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOWBYANIM_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}
	};
}
