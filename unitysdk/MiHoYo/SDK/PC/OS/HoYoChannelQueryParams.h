#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS_TOJSONWITHREQUESTID_OFFSET UNITYSDK_OFFSET(0x1ABCF800)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF7F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF810)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelQueryParams_TypeDefinitionIndex = 8544;

	class HoYoChannelQueryParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS_TOJSON_OFFSET))(this);
		}

		::System::String* ToJsonWithRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELQUERYPARAMS_TOJSONWITHREQUESTID_OFFSET))(this, a1);
		}
	};
}
