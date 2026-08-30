#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_CANVASINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1647A090)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_CanvasInfo_TypeDefinitionIndex = 38459;

	class CinemachineStoryboard_CanvasInfo : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineBrain* mCanvasParent; // 0x10
		::UnityEngine::GameObject* mCanvas; // 0x18
		::UnityEngine::UI::RawImage* mRawImage; // 0x20
		::UnityEngine::RectTransform* mViewport; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_CANVASINFO__CTOR_OFFSET))(this);
		}
	};
}
