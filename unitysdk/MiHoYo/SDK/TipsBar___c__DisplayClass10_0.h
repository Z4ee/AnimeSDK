#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class TipsBar; }
namespace System { class String; }

#define MIHOYO_SDK_TIPSBAR___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1712F680)
#define MIHOYO_SDK_TIPSBAR___C__DISPLAYCLASS10_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1712F900)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TipsBar___c__DisplayClass10_0_TypeDefinitionIndex = 8183;

	class TipsBar___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* imagePath; // 0x10
		::System::String* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::TipsBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TipsBar*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR___C__DISPLAYCLASS10_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
