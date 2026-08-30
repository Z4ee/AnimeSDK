#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFRAMECAPTUREUI_METHOD_3_C3CB22651D046549_OFFSET UNITYSDK_OFFSET(0x1D528310)
#define RPG_GAMECORE_SHOWFRAMECAPTUREUI_METHOD_3_E99730E3EB9F9F40_OFFSET UNITYSDK_OFFSET(0x1D5282A0)
#define RPG_GAMECORE_SHOWFRAMECAPTUREUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5282F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFrameCaptureUI_TypeDefinitionIndex = 22968;

	class ShowFrameCaptureUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FrameCaptureFadeoutType Type; // 0x18
		::System::Single Delay; // 0x1C
		::System::Single FadeDuration; // 0x20
		::System::Boolean UseRecord; // 0x24
		::System::Boolean MultiCaptureAllowed; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E99730E3EB9F9F40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFrameCaptureUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFrameCaptureUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI_METHOD_3_E99730E3EB9F9F40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3CB22651D046549(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI_METHOD_3_C3CB22651D046549_OFFSET))(a1, a2);
		}
	};
}
