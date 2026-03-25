#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET UNITYSDK_OFFSET(0x84F9160)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET UNITYSDK_OFFSET(0x84F93B0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET UNITYSDK_OFFSET(0x84F97D0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET UNITYSDK_OFFSET(0x84F8D60)
#define MIHOYO_SDK_KIBANAREPORTSENDER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x84F8DB0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET UNITYSDK_OFFSET(0x84F9610)
#define MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET UNITYSDK_OFFSET(0x84F9F00)
#define MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x84F9CE0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET UNITYSDK_OFFSET(0x84F8E30)
#define MIHOYO_SDK_KIBANAREPORTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x84F8B20)
#define MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET UNITYSDK_OFFSET(0x84F9FA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender_TypeDefinitionIndex = 37261;

	class KibanaReportSender : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KibanaReportSender** StaticGet__instance()
		{
			return (::MiHoYo::SDK::KibanaReportSender**)Il2CppClass::FromTypeDefinitionIndex(KibanaReportSender_TypeDefinitionIndex)->GetStaticField(0x10270);
		}
		// static const ::System::Int32 DEFAULT_MAX_COUNT = 0xA; // 0x0
		// static const ::System::String* TELEMETRY_VERSION; // 0x0
		// static const ::System::String* SDK_VERSION; // 0x0
		// static const ::System::String* AREA; // 0x0
		// static const ::System::String* LIFECYCLE_ID; // 0x0
		// static const ::System::Int32 TIME_INTERVAL = 0x6; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _reportCache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _reportCacheTemp; // 0x18
		::System::Boolean _isSending; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::KibanaReportSender* Instance()
		{
			return ((::MiHoYo::SDK::KibanaReportSender*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_INSTANCE_OFFSET))();
		}

		::System::Void SendToKibana(::System::String* url, ::System::String* custom_content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET))(this, url, custom_content);
		}

		::System::Collections::IEnumerator* HTTPRequestTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET))(this);
		}

		::System::Void Loop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET))(this);
		}

		::System::Void AddToCache(::System::String* url, ::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET))(this, url, content);
		}

		::System::Void AddToTempCache(::System::String* url, ::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET))(this, url, content);
		}

		::System::Void EncodeReportAndSend(::System::String* kibanaUrl, ::System::Collections::Generic::List_1<::System::String*>* reports)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET))(this, kibanaUrl, reports);
		}

		::System::Void PostRequest(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET))(this, requestUrl, bodyString, callback);
		}

		::System::Collections::IEnumerator* PerformPostTask(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, extHeaders, timeoutSecond);
		}

		::System::Void _EncodeReportAndSend_b__17_0(::MiHoYo::SDK::NetworkResponseModel* m)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET))(this, m);
		}
	};
}
