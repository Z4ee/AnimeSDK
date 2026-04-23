#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FrameCaptureManager_CaptureUsage.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UIFRAMECAPTUREPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0xB3EBF10)
#define RPG_CLIENT_UIFRAMECAPTUREPARAM_CREATEDEFAULTCAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0xB3EC3C0)
#define RPG_CLIENT_UIFRAMECAPTUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3EC530)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFrameCaptureParam_TypeDefinitionIndex = 67277;

	class UIFrameCaptureParam : public ::System::Object
	{
	public:
		::RPG::CustomRP::FrameCapture_CaptureType CaptureType; // 0x10
		::System::Nullable_1<::System::Single> RenderScale; // 0x14
		::RPG::Client::FrameCaptureManager_CaptureUsage CaptureUsage; // 0x1C
		::RPG::CustomRP::FrameCapture_CaptureFeature CaptureFeature; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIFrameCaptureParam* CreateDefaultCaptureParam(::System::Boolean showUI, ::RPG::CustomRP::FrameCapture_CaptureFeature captureFeature)
		{
			return ((::RPG::Client::UIFrameCaptureParam*(*)(::System::Boolean, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM_CREATEDEFAULTCAPTUREPARAM_OFFSET))(showUI, captureFeature);
		}

		static ::RPG::Client::UIFrameCaptureParam* Clone(::RPG::Client::UIFrameCaptureParam* captureParam)
		{
			return ((::RPG::Client::UIFrameCaptureParam*(*)(::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM_CLONE_OFFSET))(captureParam);
		}
	};
}
