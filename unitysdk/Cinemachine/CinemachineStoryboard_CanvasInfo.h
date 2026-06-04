#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_CANVASINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A2E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_CanvasInfo_TypeDefinitionIndex = 36818;

	class CinemachineStoryboard_CanvasInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mCanvas; // 0x10
		::UnityEngine::RectTransform* mViewport; // 0x18
		::UnityEngine::UI::RawImage* mRawImage; // 0x20
		::Cinemachine::CinemachineBrain* mCanvasParent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CANVASINFO__CTOR_OFFSET))(this);
		}
	};
}
