#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaBaseModel.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANANETWORKMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9887A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaNetworkModel_TypeDefinitionIndex = 7839;

	class KibanaNetworkModel : public ::MiHoYo::SDK::KibanaBaseModel
	{
	public:
		::System::String* network_url; // 0xD8
		::System::Int32 network_status_code; // 0xE0
		::System::String* network_data; // 0xE8
		::System::String* net_request_body; // 0xF0
		::System::String* network_response_region; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANANETWORKMODEL__CTOR_OFFSET))(this);
		}
	};
}
