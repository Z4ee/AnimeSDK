#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class GoogleEntitlementsExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxEntitlementsExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1BA20450)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1BA20440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA20490)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEntitlementsResult_TypeDefinitionIndex = 8542;

	class HoYoChannelEntitlementsResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::MiHoYo::SDK::PC::OS::GoogleEntitlementsExtension* google; // 0x30
		::MiHoYo::SDK::PC::OS::XboxEntitlementsExtension* xbox; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
