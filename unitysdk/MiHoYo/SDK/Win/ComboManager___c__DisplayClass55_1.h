#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ComboManager___c__DisplayClass55_0; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD238B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_1__GETREALNAMEURL_B__0_OFFSET UNITYSDK_OFFSET(0x1BD32360)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass55_1_TypeDefinitionIndex = 9434;

	class ComboManager___c__DisplayClass55_1 : public ::System::Object
	{
	public:
		::System::String* realNameUrl; // 0x10
		::MiHoYo::SDK::Win::ComboManager___c__DisplayClass55_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_1__CTOR_OFFSET))(this);
		}

		::System::Void _GetRealNameUrl_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS55_1__GETREALNAMEURL_B__0_OFFSET))(this, a1);
		}
	};
}
