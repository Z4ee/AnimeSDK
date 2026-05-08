#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xF63F220)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xF63F290)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_FETCH_PLAYERID_OFFSET UNITYSDK_OFFSET(0xF63F3F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_FETCH_TARGETID_OFFSET UNITYSDK_OFFSET(0xF63F4A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xF63E090)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF63E0D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xF63E0E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xF63F1D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xF63F170)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF63F5A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xF63F550)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceMonsterRatingEffect_TypeDefinitionIndex = 47174;

	class CameraSequenceMonsterRatingEffect : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceMonsterRatingEffect_TypeDefinitionIndex)->GetStaticField(0xF5D0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceMonsterRatingEffect_TypeDefinitionIndex)->GetStaticField(0xF5D8);
		}
		// static const ::System::String* MONSTER_EFFECT_KEY; // 0x0
		// static const ::System::String* PLAYER_EFFECT_KEY; // 0x0
		::System::String* CustomRatingConfgsKey; // 0x50
		::System::UInt32 TargetID; // 0x58
		::System::UInt32 PlayerID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::UInt32 fetch_PlayerID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_FETCH_PLAYERID_OFFSET))(this, context);
		}

		::System::UInt32 fetch_TargetID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEMONSTERRATINGEFFECT_FETCH_TARGETID_OFFSET))(this, context);
		}
	};
}
