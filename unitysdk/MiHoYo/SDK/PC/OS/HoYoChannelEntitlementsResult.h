#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x194B20D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x194B20C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2110)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEntitlementsResult_TypeDefinitionIndex = 19386;

	class HoYoChannelEntitlementsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::PurchaseData*>* purchases; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
