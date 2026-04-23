#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineSmoothPath; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define PREVIEWTRACKCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A8D0A0)
#define PREVIEWTRACKCAMERA_PREVIEWCAMERA_OFFSET UNITYSDK_OFFSET(0x9A8D370)
#define PREVIEWTRACKCAMERA_STOPPREVIEWCAMERA_OFFSET UNITYSDK_OFFSET(0x9A8D2A0)
#define PREVIEWTRACKCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0x9A8D0F0)
#define PREVIEWTRACKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8D480)

inline static constexpr unsigned int PreviewTrackCamera_TypeDefinitionIndex = 44070;

class PreviewTrackCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCamera* VC; // 0x18
	::Cinemachine::CinemachineSmoothPath* Path; // 0x20
	::UnityEngine::Vector3 TrackLocalOffset; // 0x28
	::System::Single OffsetDuration; // 0x34
	::UnityEngine::AnimationCurve* OffsetCurve; // 0x38
	::UnityEngine::Vector2 PathPositionRange; // 0x40
	::System::Single PathDuration; // 0x48
	::UnityEngine::AnimationCurve* PathCurve; // 0x50
	::System::Boolean Field_5_8; // 0x58
	::System::Single Field_5_9; // 0x5C
	::UnityEngine::Vector3 Field_5_10; // 0x60
	::System::Action* Field_5_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREVIEWTRACKCAMERA__CTOR_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREVIEWTRACKCAMERA_ONDESTROY_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PREVIEWTRACKCAMERA_TICK_OFFSET))(this, a1);
	}

	::System::Void PreviewCamera(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PREVIEWTRACKCAMERA_PREVIEWCAMERA_OFFSET))(this, a1);
	}

	::System::Void StopPreviewCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREVIEWTRACKCAMERA_STOPPREVIEWCAMERA_OFFSET))(this);
	}
};
