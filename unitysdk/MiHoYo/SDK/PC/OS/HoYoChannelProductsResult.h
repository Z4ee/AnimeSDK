#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF790)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF780)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF7D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelProductsResult_TypeDefinitionIndex = 8540;

	class HoYoChannelProductsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>* products; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
