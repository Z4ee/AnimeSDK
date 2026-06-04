#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_HttpRequestParams; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace MiHoYo::SDK::HttpDns { template <typename T> class HoYoSDKHttpWebResponse_CaseInsensitiveDictionary_1; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0xA17AC30)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA17AC40)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0xA17A1C0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOLOGGER_OFFSET UNITYSDK_OFFSET(0xA17ACD0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0xA17ADA0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0xA17ABB0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0xA17B0B0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA17B0D0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xA17B130)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORMSG_OFFSET UNITYSDK_OFFSET(0xA17B150)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xA17B110)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xA17B0F0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_NATIVEPTRTOBYTES_OFFSET UNITYSDK_OFFSET(0xA17B040)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0xA17B0C0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA17B0E0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xA17B140)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORMSG_OFFSET UNITYSDK_OFFSET(0xA17B160)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xA17B120)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xA17B100)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0xA179990)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__DOHTTPREQUEST_B__4_0_OFFSET UNITYSDK_OFFSET(0xA17B170)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse_TypeDefinitionIndex = 44059;

	class HoYoSDKHttpWebResponse : public ::System::Object
	{
	public:
		// static const ::System::String* CONTENT_TYPE_KEY; // 0x0
		// static const ::System::String* CONTENT_LENGTH_KEY; // 0x0
		::System::String* m_strHeaders; // 0x10
		::System::String* _ContentType_k__BackingField; // 0x18
		::System::IO::Stream* m_responseStream; // 0x20
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse_CaseInsensitiveDictionary_1<::System::String*>* m_dicHeaders; // 0x28
		::System::String* _ErrorMsg_k__BackingField; // 0x30
		::System::Int32 _SessionId_k__BackingField; // 0x38
		::System::Int32 _ErrorCode_k__BackingField; // 0x3C
		::System::Net::HttpStatusCode _StatusCode_k__BackingField; // 0x40
		::System::Int64 _ContentLength_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DISPOSE_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* DoHttpRequest(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOHTTPREQUEST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* NativePtrToBytes(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_NATIVEPTRTOBYTES_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetResponseHeader(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET))(this, a1, a2);
		}

		::System::Void DoLogger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOLOGGER_OFFSET))(this, a1);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTLENGTH_OFFSET))(this, a1);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_STATUSCODE_OFFSET))(this, a1);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Void set_ErrorCode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORCODE_OFFSET))(this, a1);
		}

		::System::String* get_ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORMSG_OFFSET))(this);
		}

		::System::Void set_ErrorMsg(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORMSG_OFFSET))(this, a1);
		}

		::System::UInt64 _DoHttpRequest_b__4_0(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__DOHTTPREQUEST_B__4_0_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
