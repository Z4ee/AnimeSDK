#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A4D50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_HttpRequestParams_TypeDefinitionIndex = 36494;

	class HoYoSDKNetworkInterface_HttpRequestParams : public ::System::Object
	{
	public:
		::System::String* m_strUrl; // 0x10
		::System::String* m_strOptions; // 0x18
		::Il2CppArray<::System::Byte>* m_arraBody; // 0x20
		::System::String* m_strHeaders; // 0x28
		::System::String* m_strIpAddr; // 0x30
		::System::String* m_strMethodName; // 0x38
		::System::Int32 m_nPort; // 0x40
		::System::Int32 m_nRecvTimeout; // 0x44
		::System::Int32 m_nConnectTimeout; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTPARAMS__CTOR_OFFSET))(this);
		}
	};
}
