#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass51_0; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS51_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E2FA0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS51_1__GETREALNAMEURL_B__0_OFFSET UNITYSDK_OFFSET(0x1D3E2FB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass51_1_TypeDefinitionIndex = 21528;

	class ComboManager___c__DisplayClass51_1 : public ::System::Object
	{
	public:
		::System::String* realNameUrl; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass51_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS51_1__CTOR_OFFSET))(this);
		}

		::System::Void _GetRealNameUrl_b__0(::System::String* convertedUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS51_1__GETREALNAMEURL_B__0_OFFSET))(this, convertedUrl);
		}
	};
}
