#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Protocol; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183FC830)
#define MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x183FDBB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Protocol___c__DisplayClass29_0_TypeDefinitionIndex = 8190;

	class Protocol___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::String* strTitle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Protocol* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
