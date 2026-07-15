#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_CustomHttpRequestHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CHECKHTTPDNSPLUSENABLE_OFFSET UNITYSDK_OFFSET(0x1ACF2B10)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_DICTIONARY2JSON_OFFSET UNITYSDK_OFFSET(0x1ACF2F20)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF2760)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_OFFSET UNITYSDK_OFFSET(0x1ACF28B0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYHTTPDNSPLUS_OFFSET UNITYSDK_OFFSET(0x1ACF2BB0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYTHTTPDNS_OFFSET UNITYSDK_OFFSET(0x1ACF2840)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0x1ACF27B0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_ISHTTPDNSPLUSCONFIGVALID_OFFSET UNITYSDK_OFFSET(0x1ACF2A40)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF27A0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF2750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_TypeDefinitionIndex = 44375;

	class HoYoSDKNetworkInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNetworkInterface** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkInterface**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkInterface_TypeDefinitionIndex)->GetStaticField(0xDFA0);
		}
		// static const ::System::Int32 TIMEOUT_ERROR_CODE = 0x1C; // 0x0
		// static const ::System::String* INTERNAL_ENV; // 0x0
		::System::Boolean m_bIsInit; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkInterface* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkInterface*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::HoYoSDKNetworkInterface* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoSDKNetworkInterface*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_INITENV_OFFSET))(this);
		}

		::System::Void HttpRequestBytHttpDns(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Action_1<::System::String*>* a5, ::System::Action* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Int32 a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYTHTTPDNS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean IsHttpDnsPlusConfigValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_ISHTTPDNSPLUSCONFIGVALID_OFFSET))(this);
		}

		::System::Boolean CheckHttpDnsPlusEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CHECKHTTPDNSPLUSENABLE_OFFSET))(this);
		}

		::System::Void HttpRequestByHttpDnsPlus(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Action_1<::System::String*>* a5, ::System::Action* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Int32 a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPREQUESTBYHTTPDNSPLUS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void HttpDnsHttpRequestWithCustomHandler(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Action_1<::System::String*>* a5, ::System::Action* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Int32 a10, ::System::Int32 a11, ::System::String* a12, ::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler* a13, ::System::Boolean a14)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::System::String*, ::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::String* Dictionary2Json(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_DICTIONARY2JSON_OFFSET))(this, a1);
		}
	};
}
