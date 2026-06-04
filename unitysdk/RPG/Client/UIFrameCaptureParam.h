#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FrameCaptureManager_CaptureUsage.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UIFRAMECAPTUREPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0xCB4C8A0)
#define RPG_CLIENT_UIFRAMECAPTUREPARAM_CREATEDEFAULTCAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0xCB4CD50)
#define RPG_CLIENT_UIFRAMECAPTUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4CED0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFrameCaptureParam_TypeDefinitionIndex = 68229;

	class UIFrameCaptureParam : public ::System::Object
	{
	public:
		::RPG::Client::FrameCaptureManager_CaptureUsage CaptureUsage; // 0x10
		::RPG::CustomRP::FrameCapture_CaptureFeature CaptureFeature; // 0x14
		::System::Nullable_1<::System::Single> RenderScale; // 0x18
		::RPG::CustomRP::FrameCapture_CaptureType CaptureType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIFrameCaptureParam* CreateDefaultCaptureParam(::System::Boolean a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::RPG::Client::UIFrameCaptureParam*(*)(::System::Boolean, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM_CREATEDEFAULTCAPTUREPARAM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIFrameCaptureParam* Clone(::RPG::Client::UIFrameCaptureParam* a1)
		{
			return ((::RPG::Client::UIFrameCaptureParam*(*)(::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTUREPARAM_CLONE_OFFSET))(a1);
		}
	};
}
