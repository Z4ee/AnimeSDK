#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HTTPHeaderField.h"
#include "unitysdk/MiHoYo/SDK/HTTPStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_BADREQUEST_OFFSET UNITYSDK_OFFSET(0xA19B230)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_CONTENTFILEPATH_OFFSET UNITYSDK_OFFSET(0xA19A820)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_FORBIDDEN_OFFSET UNITYSDK_OFFSET(0xA19B3D0)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0xA19A800)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_METHODNOTALLOWED_OFFSET UNITYSDK_OFFSET(0xA19B300)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xA19A7E0)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SENDTO_OFFSET UNITYSDK_OFFSET(0xA19A8E0)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_CONTENTFILEPATH_OFFSET UNITYSDK_OFFSET(0xA19A830)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0xA19A810)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xA19A7F0)
#define MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0xA19A840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKHTTPResponse_TypeDefinitionIndex = 43702;

	class MiHoYoSDKHTTPResponse : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HTTPHeaderField, ::System::String*>* _Headers_k__BackingField; // 0x10
		::System::String* _ContentFilePath_k__BackingField; // 0x18
		::MiHoYo::SDK::HTTPStatusCode _StatusCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HTTPStatusCode get_StatusCode()
		{
			return ((::MiHoYo::SDK::HTTPStatusCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_STATUSCODE_OFFSET))(this);
		}

		::System::Void set_StatusCode(::MiHoYo::SDK::HTTPStatusCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HTTPStatusCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_STATUSCODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HTTPHeaderField, ::System::String*>* get_Headers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HTTPHeaderField, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HTTPHeaderField, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::HTTPHeaderField, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_HEADERS_OFFSET))(this, a1);
		}

		::System::String* get_ContentFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_CONTENTFILEPATH_OFFSET))(this);
		}

		::System::Void set_ContentFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SET_CONTENTFILEPATH_OFFSET))(this, a1);
		}

		::System::Void SendTo(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_SENDTO_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::MiHoYoSDKHTTPResponse* get_BadRequest()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKHTTPResponse*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_BADREQUEST_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDKHTTPResponse* get_MethodNotAllowed()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKHTTPResponse*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_METHODNOTALLOWED_OFFSET))();
		}

		static ::MiHoYo::SDK::MiHoYoSDKHTTPResponse* get_Forbidden()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKHTTPResponse*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKHTTPRESPONSE_GET_FORBIDDEN_OFFSET))();
		}
	};
}
