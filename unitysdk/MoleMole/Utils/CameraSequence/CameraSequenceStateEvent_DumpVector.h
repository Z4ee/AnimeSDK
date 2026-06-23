#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x116BD0A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x116BD110)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_DUMPRESULT_OFFSET UNITYSDK_OFFSET(0x116BD300)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_SHAKEOFFSET_OFFSET UNITYSDK_OFFSET(0x116BD270)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0x116BD3B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_CURDUMPKEY_OFFSET UNITYSDK_OFFSET(0x116BCC30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x116BCBE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x116BCC20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x116BCCB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x116BCF40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x116BCEE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x116BD4C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x116BD460)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_DumpVector_TypeDefinitionIndex = 66926;

	class CameraSequenceStateEvent_DumpVector : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_StartOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_DumpVector_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_DumpResult()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_DumpVector_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ShakeOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_DumpVector_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		::Foundation::ReferenceValue_1<::System::Single>* DumpResult; // 0x50
		::Foundation::ReferenceValue_1<::System::Single>* StartOffset; // 0x58
		::UnityEngine::AnimationCurve* dumpCurve; // 0x60
		::UnityEngine::Vector3 ShakeOffset; // 0x68
		::System::String* DumpKey; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::Foundation::Unreal::FName get_CurDumpKey()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_GET_CURDUMPKEY_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_ShakeOffset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_SHAKEOFFSET_OFFSET))(this, context);
		}

		::Foundation::ReferenceValue_1<::System::Single>* fetch_DumpResult(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::ReferenceValue_1<::System::Single>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_DUMPRESULT_OFFSET))(this, context);
		}

		::Foundation::ReferenceValue_1<::System::Single>* fetch_StartOffset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::ReferenceValue_1<::System::Single>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DUMPVECTOR_FETCH_STARTOFFSET_OFFSET))(this, context);
		}
	};
}
