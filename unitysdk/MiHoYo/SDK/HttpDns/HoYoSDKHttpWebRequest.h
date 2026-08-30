#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebResponse; }
namespace MiHoYo::SDK::HttpDns { class HoYoSDKServicePoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }
namespace System::Net { class WebHeaderCollection; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_CREATEHTTPREUQUEST_OFFSET UNITYSDK_OFFSET(0x1C6F9880)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEBODY_OFFSET UNITYSDK_OFFSET(0x1C6F96B0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEEXTRAOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C6F9560)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEHEADERS_OFFSET UNITYSDK_OFFSET(0x1C6F9250)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6F91D0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C6F8DC0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6F9A20)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F9A40)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C6F99E0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C6F99C0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F99A0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C6F9A00)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F9980)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_INITENV_OFFSET UNITYSDK_OFFSET(0x1C6F9820)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6F9A30)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F9A50)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C6F99F0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C6F99D0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F99B0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C6F9A10)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6F9990)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SKIPBOXSWITCH_OFFSET UNITYSDK_OFFSET(0x1C6F9240)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F9960)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebRequest_TypeDefinitionIndex = 47163;

	class HoYoSDKHttpWebRequest : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_bIsInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKHttpWebRequest_TypeDefinitionIndex)->GetStaticField(0x11210);
		}
		// static const ::System::Int32 DEFAULT_TIMEOUT = 0x5; // 0x0
		// static const ::System::String* CONTENT_TYPE_KEY; // 0x0
		::System::Net::WebHeaderCollection* _Headers_k__BackingField; // 0x10
		::System::IO::Stream* m_requestStream; // 0x18
		::System::String* m_strUrl; // 0x20
		::System::String* _Method_k__BackingField; // 0x28
		::System::String* _ContentType_k__BackingField; // 0x30
		::MiHoYo::SDK::HttpDns::HoYoSDKServicePoint* _ServicePoint_k__BackingField; // 0x38
		::System::Int64 _ContentLength_k__BackingField; // 0x40
		::System::Boolean m_bIsSkipBox; // 0x48
		::System::Int32 _ReadWriteTimeout_k__BackingField; // 0x4C
		::System::Int32 _Timeout_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse* GetResponse()
		{
			return ((::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Void SkipBoxSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SKIPBOXSWITCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GenerateHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEHEADERS_OFFSET))(this);
		}

		::System::String* GenerateExtraOptions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEEXTRAOPTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GenerateBody()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GENERATEBODY_OFFSET))(this);
		}

		static ::System::Void InitEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_INITENV_OFFSET))();
		}

		static ::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebRequest* CreateHttpReuquest(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_CREATEHTTPREUQUEST_OFFSET))(a1);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_TIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadWriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_METHOD_OFFSET))(this, a1);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_HEADERS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::HttpDns::HoYoSDKServicePoint* get_ServicePoint()
		{
			return ((::MiHoYo::SDK::HttpDns::HoYoSDKServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Void set_ServicePoint(::MiHoYo::SDK::HttpDns::HoYoSDKServicePoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HttpDns::HoYoSDKServicePoint*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_SERVICEPOINT_OFFSET))(this, a1);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, a1);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, a1);
		}
	};
}
