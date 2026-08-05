#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Toast; }
namespace System { class String; }

#define MIHOYO_SDK_TOAST___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD18B70)
#define MIHOYO_SDK_TOAST___C__DISPLAYCLASS8_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1CD18B80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast___c__DisplayClass8_0_TypeDefinitionIndex = 20340;

	class Toast___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* content; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Toast* element)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Toast*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__DISPLAYCLASS8_0__SHOW_B__0_OFFSET))(this, element);
		}
	};
}
