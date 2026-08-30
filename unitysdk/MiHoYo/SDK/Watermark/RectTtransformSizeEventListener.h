#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class Action; }

#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1CD74FE0)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_START_OFFSET UNITYSDK_OFFSET(0x1CD74FD0)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD75000)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int RectTtransformSizeEventListener_TypeDefinitionIndex = 8803;

	class RectTtransformSizeEventListener : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action* RectTransformChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_START_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
