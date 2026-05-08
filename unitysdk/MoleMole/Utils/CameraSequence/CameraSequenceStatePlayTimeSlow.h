#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xE490A30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE490AA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_FETCH_TIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0xE490C00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xE4909E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xE490A20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xE490780)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xE4908E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xE490880)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW__CCTOR_OFFSET UNITYSDK_OFFSET(0xE490D00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE490CB0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStatePlayTimeSlow_TypeDefinitionIndex = 73601;

	class CameraSequenceStatePlayTimeSlow : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_timeSlowKey()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStatePlayTimeSlow_TypeDefinitionIndex)->GetStaticField(0xDF50);
		}
		::System::String* timeSlowKey; // 0x50
		::System::Boolean makeContextDependent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW__CCTOR_OFFSET))();
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::String* fetch_timeSlowKey(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEPLAYTIMESLOW_FETCH_TIMESLOWKEY_OFFSET))(this, context);
		}
	};
}
