#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53DB80)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS29_0__ONINITFAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1B53DB90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c__DisplayClass29_0_TypeDefinitionIndex = 21074;

	class BiliBiliManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::String* msg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitFail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS29_0__ONINITFAIL_B__0_OFFSET))(this);
		}
	};
}
