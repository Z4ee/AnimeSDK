#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CapturePostProcessPass_EPostProcess.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1701DD90)
#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CREATEBLURPOSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0x1701E0D0)
#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1701E150)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFramePostProcessParam_TypeDefinitionIndex = 72974;

	class UIFramePostProcessParam : public ::System::Object
	{
	public:
		::UnityEngine::Material* PostProcessMat; // 0x10
		::RPG::CustomRP::CapturePostProcessPass_EPostProcess PostProcessFeature; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIFramePostProcessParam* CreateBlurPostProcessParam()
		{
			return ((::RPG::Client::UIFramePostProcessParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CREATEBLURPOSTPROCESSPARAM_OFFSET))();
		}

		static ::RPG::Client::UIFramePostProcessParam* Clone(::RPG::Client::UIFramePostProcessParam* a1)
		{
			return ((::RPG::Client::UIFramePostProcessParam*(*)(::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CLONE_OFFSET))(a1);
		}
	};
}
