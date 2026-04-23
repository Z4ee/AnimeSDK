#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_COLORMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x173F48C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ColorModel_TypeDefinitionIndex = 6931;

	class ColorModel : public ::System::Object
	{
	public:
		::System::String* textButton; // 0x10
		::System::String* imageTextButton; // 0x18
		::System::String* button; // 0x20
		::System::String* cancelButton; // 0x28
		::System::String* buttonDefault; // 0x30
		::System::String* buttonPressed; // 0x38
		::System::String* userAgreementAcceptDisable; // 0x40
		::System::String* QRAppTips; // 0x48
		::System::String* textInput; // 0x50
		::System::String* textPlaceholder; // 0x58
		::System::String* linkText; // 0x60
		::System::String* textTitle; // 0x68
		::System::String* textContent; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COLORMODEL__CTOR_OFFSET))(this);
		}
	};
}
