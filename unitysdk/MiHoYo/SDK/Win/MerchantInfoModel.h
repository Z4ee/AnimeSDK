#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_MERCHANTINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88F0A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MerchantInfoModel_TypeDefinitionIndex = 9199;

	class MerchantInfoModel : public ::System::Object
	{
	public:
		::System::String* merchant_id; // 0x10
		::System::String* mini_program_id; // 0x18
		::System::String* official_account_id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MERCHANTINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
