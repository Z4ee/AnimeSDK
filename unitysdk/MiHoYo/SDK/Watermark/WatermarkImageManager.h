#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ASYNCREQUESTDISPLAYWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x1CAED8B0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_BUILDSCREENSHOTWATERMARKCACHEKEY_OFFSET UNITYSDK_OFFSET(0x1CAEC9A0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_CHECKNEWERDISPLAYWATERMARKREQUEST_OFFSET UNITYSDK_OFFSET(0x1CAED890)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_DELAYREQUESTDISPLAYWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x1CAED830)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_EXECUTESCREENSHOTWATERMARKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CAEC890)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_GETSCREENSHOTWATERMARKTIMER_OFFSET UNITYSDK_OFFSET(0x1CAECB20)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFORESPONSE_OFFSET UNITYSDK_OFFSET(0x1CAEDC90)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFOTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1CAEDFD0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1CAEE4D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARK_OFFSET UNITYSDK_OFFSET(0x1CAEE030)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADSCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x1CAECF90)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOERROR_OFFSET UNITYSDK_OFFSET(0x1CAED390)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFORESPONSE_OFFSET UNITYSDK_OFFSET(0x1CAECB80)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1CAED3E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REMOVESCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x1CAED420)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REQUESTSCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x1CAEC100)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_SCHEDULEDISPLAYWATERMARKUPDATE_OFFSET UNITYSDK_OFFSET(0x1CAED4E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAEE550)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEE530)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager_TypeDefinitionIndex = 20959;

	class WatermarkImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkImageManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkImageManager_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		// static const ::System::Single ScreenshotRequestTimeoutSeconds; // 0x0
		// static const ::System::Single DisplayWatermarkRequestDelayTimeSeconds; // 0x0
		::UnityEngine::Coroutine* screenshotWatermarkTimeoutCoroutine; // 0x10
		::UnityEngine::Coroutine* displayWatermarkRequestCoroutine; // 0x18
		::UnityEngine::Texture2D* screenshotWatermarkImage; // 0x20
		::System::String* screenshotWatermarkCacheKey; // 0x28
		::System::Boolean hasNewerDisplayWatermarkRequest; // 0x30
		::System::Boolean isDisplayWatermarkRequestInProgress; // 0x31
		::System::Boolean isWatermarkEnabled; // 0x32
		::System::Int32 screenshotWatermarkImageHeight; // 0x34
		::System::Int32 screenshotWatermarkImageWidth; // 0x38
		::System::Single displayWatermarkAlpha; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RequestScreenshotWatermark(::System::Int32 width, ::System::Int32 height, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback, ::System::Single timeoutSecond, ::System::Boolean ignoreSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REQUESTSCREENSHOTWATERMARK_OFFSET))(this, width, height, callback, timeoutSecond, ignoreSwitch);
		}

		::System::Void OnScreenshotWatermarkInfoResponse(::System::String* responseString, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback, ::System::String* requestCacheKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFORESPONSE_OFFSET))(this, responseString, callback, requestCacheKey);
		}

		::System::Void OnDownloadScreenshotWatermark(::Il2CppArray<::System::Byte>* imageData, ::System::Int32 retcode, ::System::String* message, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback, ::System::String* requestCacheKey)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADSCREENSHOTWATERMARK_OFFSET))(this, imageData, retcode, message, callback, requestCacheKey);
		}

		::System::Void OnScreenshotWatermarkInfoTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOTIMEOUT_OFFSET))(this);
		}

		::System::Void OnScreenshotWatermarkInfoError(::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOERROR_OFFSET))(this, callback);
		}

		::System::Collections::IEnumerator* GetScreenshotWatermarkTimer(::System::Single waitSeconds, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_GETSCREENSHOTWATERMARKTIMER_OFFSET))(this, waitSeconds, callback);
		}

		::System::Void ExecuteScreenshotWatermarkCallback(::System::Int32 retCode, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_EXECUTESCREENSHOTWATERMARKCALLBACK_OFFSET))(this, retCode, callback);
		}

		static ::System::String* BuildScreenshotWatermarkCacheKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_BUILDSCREENSHOTWATERMARKCACHEKEY_OFFSET))();
		}

		::System::Void RemoveScreenshotWatermark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REMOVESCREENSHOTWATERMARK_OFFSET))(this);
		}

		::System::Void ScheduleDisplayWatermarkUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_SCHEDULEDISPLAYWATERMARKUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayRequestDisplayWatermarkInfo(::System::Single delaySeconds)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_DELAYREQUESTDISPLAYWATERMARKINFO_OFFSET))(this, delaySeconds);
		}

		::System::Boolean CheckNewerDisplayWatermarkRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_CHECKNEWERDISPLAYWATERMARKREQUEST_OFFSET))(this);
		}

		::System::Void AsyncRequestDisplayWatermarkInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ASYNCREQUESTDISPLAYWATERMARKINFO_OFFSET))(this);
		}

		::System::Void OnDisplayWatermarkInfoResponse(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFORESPONSE_OFFSET))(this, responseString);
		}

		::System::Void OnDisplayWatermarkInfoTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFOTIMEOUT_OFFSET))(this);
		}

		::System::Void OnDownloadDisplayWatermark(::Il2CppArray<::System::Byte>* imageData, ::System::Int32 retcode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARK_OFFSET))(this, imageData, retcode, message);
		}

		::System::Void OnDownloadDisplayWatermarkTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARKTIMEOUT_OFFSET))(this);
		}
	};
}
