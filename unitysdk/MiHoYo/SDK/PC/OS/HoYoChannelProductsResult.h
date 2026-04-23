#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x175AEE00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x175AEDF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x175AEE40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelProductsResult_TypeDefinitionIndex = 7557;

	class HoYoChannelProductsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::ProductData*>* products; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPRODUCTSRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
