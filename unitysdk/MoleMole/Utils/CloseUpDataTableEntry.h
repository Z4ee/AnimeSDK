#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/EulerRotationChannel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Utils { class NapCameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_BUILDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1149D5D0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_ELEVATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1149D430)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1149D3A0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_HEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x1149D380)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_MAINTAINROTATIONCHANNEL_OFFSET UNITYSDK_OFFSET(0x1149D3E0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_OVERRIDEEULER_OFFSET UNITYSDK_OFFSET(0x1149D400)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_POLARANGLE_OFFSET UNITYSDK_OFFSET(0x1149D500)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1149D3C0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET UNITYSDK_OFFSET(0x1149D650)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET UNITYSDK_OFFSET(0x1149D740)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1149D830)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1149D3B0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_HEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x1149D390)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_MAINTAINROTATIONCHANNEL_OFFSET UNITYSDK_OFFSET(0x1149D3F0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_OVERRIDEEULER_OFFSET UNITYSDK_OFFSET(0x1149D420)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1149D3D0)
#define MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1149D880)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int CloseUpDataTableEntry_TypeDefinitionIndex = 89620;

	class CloseUpDataTableEntry : public ::System::Object
	{
	public:
		::System::Single _HeightRatio_k__BackingField; // 0x10
		::System::Single _FieldOfView_k__BackingField; // 0x14
		::UnityEngine::Vector2 _ScreenOffset_k__BackingField; // 0x18
		::PipelineCamera::EulerRotationChannel _MaintainRotationChannel_k__BackingField; // 0x20
		::UnityEngine::Vector3 _OverrideEuler_k__BackingField; // 0x24
		::System::Single blendInDuration; // 0x30
		::System::String* blendInCurveKey; // 0x38
		::System::Single blendOutDuration; // 0x40
		::System::String* blendOutCurveKey; // 0x48
		::System::Single closeUpDuration; // 0x50
		::System::String* lookAtPoint; // 0x58
		::UnityEngine::Vector3 lookAtOffset; // 0x60
		::System::Single minPitch; // 0x6C
		::System::Single maxPitch; // 0x70
		::System::Single minExitElevation; // 0x74
		::System::Single maxExitElevation; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY__CTOR_OFFSET))(this);
		}

		::System::Single get_HeightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_HEIGHTRATIO_OFFSET))(this);
		}

		::System::Void set_HeightRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_HEIGHTRATIO_OFFSET))(this, value);
		}

		::System::Single get_FieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_FieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_SCREENOFFSET_OFFSET))(this);
		}

		::System::Void set_ScreenOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_SCREENOFFSET_OFFSET))(this, value);
		}

		::PipelineCamera::EulerRotationChannel get_MaintainRotationChannel()
		{
			return ((::PipelineCamera::EulerRotationChannel(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_MAINTAINROTATIONCHANNEL_OFFSET))(this);
		}

		::System::Void set_MaintainRotationChannel(::PipelineCamera::EulerRotationChannel value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::EulerRotationChannel))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_MAINTAINROTATIONCHANNEL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_OverrideEuler()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_OVERRIDEEULER_OFFSET))(this);
		}

		::System::Void set_OverrideEuler(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_SET_OVERRIDEEULER_OFFSET))(this, value);
		}

		::System::Single get_ElevationRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_ELEVATIONRATIO_OFFSET))(this);
		}

		::System::Single get_PolarAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_GET_POLARANGLE_OFFSET))(this);
		}

		::System::Void BuildContext(::MoleMole::Utils::NapCameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::NapCameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_BUILDCONTEXT_OFFSET))(this, context);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendInSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET))(this, fallback);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendOutSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET))(this, fallback);
		}

		::System::Boolean MoleMole_Utils_INapCameraSequenceDataTableEntry_GetDuration(::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CLOSEUPDATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET))(this, duration);
		}
	};
}
