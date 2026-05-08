#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Utils { class NapCameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace System { class String; }

#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_GET_FORWARDOFFSET_OFFSET UNITYSDK_OFFSET(0xE4913B0)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_GET_UPOFFSET_OFFSET UNITYSDK_OFFSET(0xE491420)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_BUILDCONTEXT_OFFSET UNITYSDK_OFFSET(0xE491490)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET UNITYSDK_OFFSET(0xE491510)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET UNITYSDK_OFFSET(0xE491600)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET UNITYSDK_OFFSET(0xE4916F0)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_SET_FORWARDOFFSET_OFFSET UNITYSDK_OFFSET(0xE4913C0)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_SET_UPOFFSET_OFFSET UNITYSDK_OFFSET(0xE491430)
#define MOLEMOLE_UTILS_STRETCHDATATABLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE491740)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int StretchDataTableEntry_TypeDefinitionIndex = 66274;

	class StretchDataTableEntry : public ::System::Object
	{
	public:
		::System::Single blendInDuration; // 0x10
		::System::String* blendInCurveKey; // 0x18
		::System::Single blendOutDuration; // 0x20
		::System::String* blendOutCurveKey; // 0x28
		::System::Single stretchDuration; // 0x30
		::System::Single fieldOfView; // 0x34
		::UnityEngine::Vector3 offset; // 0x38
		::System::Single minPitch; // 0x44
		::System::Single maxPitch; // 0x48
		::System::Boolean ignoreWorldTimeScale; // 0x4C
		::System::Boolean ignoreOwnerTimeScale; // 0x4D
		::System::Boolean ignoreLocalAvatar; // 0x4E
		::System::Boolean allowFieldOfView; // 0x4F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY__CTOR_OFFSET))(this);
		}

		::System::Single get_ForwardOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_GET_FORWARDOFFSET_OFFSET))(this);
		}

		::System::Void set_ForwardOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_SET_FORWARDOFFSET_OFFSET))(this, value);
		}

		::System::Single get_UpOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_GET_UPOFFSET_OFFSET))(this);
		}

		::System::Void set_UpOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_SET_UPOFFSET_OFFSET))(this, value);
		}

		::System::Void MoleMole_Utils_INapCameraSequenceDataTableEntry_BuildContext(::MoleMole::Utils::NapCameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::NapCameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_BUILDCONTEXT_OFFSET))(this, context);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendInSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET))(this, fallback);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendOutSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET))(this, fallback);
		}

		::System::Boolean MoleMole_Utils_INapCameraSequenceDataTableEntry_GetDuration(::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_STRETCHDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET))(this, duration);
		}
	};
}
