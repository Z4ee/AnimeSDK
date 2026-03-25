#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_HttpRequestParams; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace MiHoYo::SDK::HttpDns { template <typename T> class HoYoSDKHttpWebResponse_CaseInsensitiveDictionary_1; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x84EF230)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84EF240)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0x84EE810)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOLOGGER_OFFSET UNITYSDK_OFFSET(0x84EF2D0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0x84EF390)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x84EF1B0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x84EF6E0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x84EF700)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x84EF760)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORMSG_OFFSET UNITYSDK_OFFSET(0x84EF780)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x84EF740)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x84EF720)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_NATIVEPTRTOBYTES_OFFSET UNITYSDK_OFFSET(0x84EF670)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x84EF6F0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x84EF710)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x84EF770)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORMSG_OFFSET UNITYSDK_OFFSET(0x84EF790)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x84EF750)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x84EF730)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x84EDFB0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__DOHTTPREQUEST_B__4_0_OFFSET UNITYSDK_OFFSET(0x84EF7A0)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse_TypeDefinitionIndex = 37379;

	class HoYoSDKHttpWebResponse : public ::System::Object
	{
	public:
		// static const ::System::String* CONTENT_TYPE_KEY; // 0x0
		// static const ::System::String* CONTENT_LENGTH_KEY; // 0x0
		::System::String* _ContentType_k__BackingField; // 0x10
		::System::String* _ErrorMsg_k__BackingField; // 0x18
		::System::String* m_strHeaders; // 0x20
		::System::IO::Stream* m_responseStream; // 0x28
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse_CaseInsensitiveDictionary_1<::System::String*>* m_dicHeaders; // 0x30
		::System::Int32 _SessionId_k__BackingField; // 0x38
		::System::Int64 _ContentLength_k__BackingField; // 0x40
		::System::Net::HttpStatusCode _StatusCode_k__BackingField; // 0x48
		::System::Int32 _ErrorCode_k__BackingField; // 0x4C

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

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* DoHttpRequest(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* requestParams)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOHTTPREQUEST_OFFSET))(this, requestParams);
		}

		::Il2CppArray<::System::Byte>* NativePtrToBytes(::System::IntPtr lpBuffer, ::System::Int32 nOffset, ::System::Int32 nCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_NATIVEPTRTOBYTES_OFFSET))(this, lpBuffer, nOffset, nCount);
		}

		::System::Boolean GetResponseHeader(::System::String* strHeaderKey, ::System::String*& strHeaderValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GETRESPONSEHEADER_OFFSET))(this, strHeaderKey, strHeaderValue);
		}

		::System::Void DoLogger(::System::String* strLogMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_DOLOGGER_OFFSET))(this, strLogMsg);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::HttpStatusCode get_StatusCode()
		{
			return ((::System::Net::HttpStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_STATUSCODE_OFFSET))(this, value);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_SESSIONID_OFFSET))(this, value);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Void set_ErrorCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORCODE_OFFSET))(this, value);
		}

		::System::String* get_ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_GET_ERRORMSG_OFFSET))(this);
		}

		::System::Void set_ErrorMsg(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_SET_ERRORMSG_OFFSET))(this, value);
		}

		::System::UInt64 _DoHttpRequest_b__4_0(::System::IntPtr buffer, ::System::UInt64 sz, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE__DOHTTPREQUEST_B__4_0_OFFSET))(this, buffer, sz, nitems, outstream);
		}
	};
}
