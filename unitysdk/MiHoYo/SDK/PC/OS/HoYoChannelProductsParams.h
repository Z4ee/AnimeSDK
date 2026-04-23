#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x175AEDE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8C50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelProductsParams_TypeDefinitionIndex = 7547;

	class HoYoChannelProductsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::Il2CppArray<::System::String*>* productIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
