#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xFAEF530)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xFAEF5A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_PLAYERID_OFFSET UNITYSDK_OFFSET(0xFAEF860)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_POSITIONWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xFAEF7B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_SHAREDOFFSETVALUE_OFFSET UNITYSDK_OFFSET(0xFAEF700)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_TARGETID_OFFSET UNITYSDK_OFFSET(0xFAEF910)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xFAEE5D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xFAEE610)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xFAEF390)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xFAEF310)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAEFA10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAEF9C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xFAEFAF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xFAEFB80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xFAEFBC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xFAEFC50)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xFAEFCE0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingEffect_TypeDefinitionIndex = 42541;

	class CameraSequenceCreateRatingEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingEffect_TypeDefinitionIndex)->GetStaticField(0xE5E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PositionWithOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingEffect_TypeDefinitionIndex)->GetStaticField(0xE5E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SharedOffsetValue()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingEffect_TypeDefinitionIndex)->GetStaticField(0xE5F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingEffect_TypeDefinitionIndex)->GetStaticField(0xE5F8);
		}
		::System::Single dumpOffset; // 0x58
		::Foundation::ReferenceValue_1<::System::Single>* SharedOffsetValue; // 0x60
		::System::Single PositionWithOffset; // 0x68
		::System::Boolean usePositionAsTimestamp; // 0x6C
		::System::String* CustomRatingConfgsKey; // 0x70
		::System::Boolean IsAudioDisabled; // 0x78
		::UnityEngine::Vector3 _initPos; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::Foundation::ReferenceValue_1<::System::Single>* fetch_SharedOffsetValue(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::ReferenceValue_1<::System::Single>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_SHAREDOFFSETVALUE_OFFSET))(this, context);
		}

		::System::Single fetch_PositionWithOffset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_POSITIONWITHOFFSET_OFFSET))(this, context);
		}

		::System::UInt32 fetch_PlayerID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_PLAYERID_OFFSET))(this, context);
		}

		::System::UInt32 fetch_TargetID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT_FETCH_TARGETID_OFFSET))(this, context);
		}

		::System::Void __base_BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void __base_CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_COLLECTVARIABLEINTERNAL_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYEND_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGEFFECT___BASE_RECEIVENOTIFYTICK_OFFSET))(this, P0, P1);
		}
	};
}
