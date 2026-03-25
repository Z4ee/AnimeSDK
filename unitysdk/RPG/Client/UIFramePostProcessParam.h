#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CapturePostProcessPass_EPostProcess.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0xA691A70)
#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CREATEBLURPOSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0xA691DE0)
#define RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA691E60)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFramePostProcessParam_TypeDefinitionIndex = 59880;

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

		static ::RPG::Client::UIFramePostProcessParam* Clone(::RPG::Client::UIFramePostProcessParam* param)
		{
			return ((::RPG::Client::UIFramePostProcessParam*(*)(::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMEPOSTPROCESSPARAM_CLONE_OFFSET))(param);
		}
	};
}
