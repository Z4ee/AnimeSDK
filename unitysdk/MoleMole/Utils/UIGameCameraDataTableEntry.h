#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Utils { class NapCameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }

#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_GET_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x115A1F90)
#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_BUILDCONTEXT_OFFSET UNITYSDK_OFFSET(0x115A2120)
#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET UNITYSDK_OFFSET(0x115A21A0)
#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET UNITYSDK_OFFSET(0x115A21F0)
#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET UNITYSDK_OFFSET(0x115A2240)
#define MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x115A2290)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int UIGameCameraDataTableEntry_TypeDefinitionIndex = 78955;

	class UIGameCameraDataTableEntry : public ::System::Object
	{
	public:
		::System::Single uiEdgeRatio; // 0x10
		::System::Single verticalScreenOffset; // 0x14
		::System::Single yawOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_screenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_GET_SCREENOFFSET_OFFSET))(this);
		}

		::System::Void MoleMole_Utils_INapCameraSequenceDataTableEntry_BuildContext(::MoleMole::Utils::NapCameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Utils::NapCameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_BUILDCONTEXT_OFFSET))(this, context);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendInSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDINSETTING_OFFSET))(this, fallback);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* MoleMole_Utils_INapCameraSequenceDataTableEntry_GetBlendOutSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETBLENDOUTSETTING_OFFSET))(this, fallback);
		}

		::System::Boolean MoleMole_Utils_INapCameraSequenceDataTableEntry_GetDuration(::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_UIGAMECAMERADATATABLEENTRY_MOLEMOLE_UTILS_INAPCAMERASEQUENCEDATATABLEENTRY_GETDURATION_OFFSET))(this, duration);
		}
	};
}
