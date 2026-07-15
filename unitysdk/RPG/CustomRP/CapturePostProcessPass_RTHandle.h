#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE_GET_FILTERRT_OFFSET UNITYSDK_OFFSET(0x1781BD20)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE_SET_FILTERRT_OFFSET UNITYSDK_OFFSET(0x1781BD30)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1781BD10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapturePostProcessPass_RTHandle_TypeDefinitionIndex = 36220;

	class CapturePostProcessPass_RTHandle : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* _FilterRT_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_FilterRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE_GET_FILTERRT_OFFSET))(this);
		}

		::System::Void set_FilterRT(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RTHANDLE_SET_FILTERRT_OFFSET))(this, a1);
		}
	};
}
