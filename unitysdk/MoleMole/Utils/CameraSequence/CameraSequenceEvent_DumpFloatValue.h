#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x11E55C20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x11E55C90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_FETCH_RESULT_OFFSET UNITYSDK_OFFSET(0x11E55DF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x11E55A80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11E55B10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x11E55B20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E55EE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E55EA0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_DumpFloatValue_TypeDefinitionIndex = 79706;

	class CameraSequenceEvent_DumpFloatValue : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_Result()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEvent_DumpFloatValue_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		::Foundation::ReferenceValue_1<::System::Single>* Result; // 0x48
		::System::Single value; // 0x50
		::System::String* info; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_RECEIVENOTIFY_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::Foundation::ReferenceValue_1<::System::Single>* fetch_Result(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::ReferenceValue_1<::System::Single>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_DUMPFLOATVALUE_FETCH_RESULT_OFFSET))(this, context);
		}
	};
}
