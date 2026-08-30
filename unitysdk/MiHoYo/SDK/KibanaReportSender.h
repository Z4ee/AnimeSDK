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

#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET UNITYSDK_OFFSET(0x1C7021E0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET UNITYSDK_OFFSET(0x1C7025D0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET UNITYSDK_OFFSET(0x1C702B90)
#define MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET UNITYSDK_OFFSET(0x1C701C70)
#define MIHOYO_SDK_KIBANAREPORTSENDER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C701CC0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET UNITYSDK_OFFSET(0x1C7029D0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET UNITYSDK_OFFSET(0x1C703300)
#define MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x1C7030C0)
#define MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET UNITYSDK_OFFSET(0x1C701D40)
#define MIHOYO_SDK_KIBANAREPORTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C701A30)
#define MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C7033A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender_TypeDefinitionIndex = 47028;

	class KibanaReportSender : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KibanaReportSender** StaticGet__instance()
		{
			return (::MiHoYo::SDK::KibanaReportSender**)Il2CppClass::FromTypeDefinitionIndex(KibanaReportSender_TypeDefinitionIndex)->GetStaticField(0x53360);
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

		::System::Void SendToKibana(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_SENDTOKIBANA_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* HTTPRequestTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_HTTPREQUESTTIMER_OFFSET))(this);
		}

		::System::Void Loop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_LOOP_OFFSET))(this);
		}

		::System::Void AddToCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void AddToTempCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ADDTOTEMPCACHE_OFFSET))(this, a1, a2);
		}

		::System::Void EncodeReportAndSend(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_ENCODEREPORTANDSEND_OFFSET))(this, a1, a2);
		}

		::System::Void PostRequest(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_POSTREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* PerformPostTask(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER_PERFORMPOSTTASK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _EncodeReportAndSend_b__17_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__ENCODEREPORTANDSEND_B__17_0_OFFSET))(this, a1);
		}
	};
}
