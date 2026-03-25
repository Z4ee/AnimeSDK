#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIPAYINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16052540)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliPayInfoModel_TypeDefinitionIndex = 7940;

	class BiliBiliPayInfoModel : public ::System::Object
	{
	public:
		::System::String* orderSign; // 0x10
		::System::String* outTradeNo; // 0x18
		::System::String* gameMoney; // 0x20
		::System::String* productName; // 0x28
		::System::String* amount; // 0x30
		::System::String* productDesc; // 0x38
		::System::String* roleName; // 0x40
		::System::String* roleId; // 0x48
		::System::String* extensionInfo; // 0x50
		::System::String* notifyUrl; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIPAYINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
