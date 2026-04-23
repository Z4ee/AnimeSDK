#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Protocol; }

#define MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1761CFA0)
#define MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS28_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1761E4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Protocol___c__DisplayClass28_0_TypeDefinitionIndex = 7286;

	class Protocol___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Boolean update; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Protocol* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS28_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
