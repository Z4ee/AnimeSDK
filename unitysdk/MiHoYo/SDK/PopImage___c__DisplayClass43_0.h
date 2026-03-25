#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PopImage; }

#define MIHOYO_SDK_POPIMAGE___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB9960)
#define MIHOYO_SDK_POPIMAGE___C__DISPLAYCLASS43_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15FBC920)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage___c__DisplayClass43_0_TypeDefinitionIndex = 7252;

	class PopImage___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Boolean animationed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PopImage* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE___C__DISPLAYCLASS43_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
