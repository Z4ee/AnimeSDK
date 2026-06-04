#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK::Win { class PopImageManager_PopImageDateModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182AE7C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x182AF370)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182AEB40)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x182B06D0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x182AF2A0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182AFF50)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x182B0C70)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182AF500)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x182AE9C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x182B08D0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x182AF680)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x182AE5A0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x182B0550)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x182B0CA0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x182B0D10)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x182B0C10)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x182B0D80)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x182AF120)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182AF200)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182B0BF0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182B0160)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182B0820)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182AED40)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x182AEFB0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x182AE5C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x182B0E30)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x182B0DA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 9124;

	class PopImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PopImageManager**)Il2CppClass::FromTypeDefinitionIndex(PopImageManager_TypeDefinitionIndex)->GetStaticField(0x176C0);
		}
		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PopImageManager_PopImageDateModel*>* cacheShowImageList; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x18
		::System::String* CachePath; // 0x20
		::System::Boolean isShowing; // 0x28
		::System::Boolean isAnimation; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean InstanceShow(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, a1);
		}

		::System::Boolean Show(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SHOW_OFFSET))(this, a1);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean CheckPopImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::PopImageModel* GetPopImageModel()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET))(this);
		}

		::System::Void ClearList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_CLEARLIST_OFFSET))(this);
		}

		::System::Void GetPopImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET))(this);
		}

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, a1);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, a1);
		}

		::System::Void SaveCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::Void GetCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::String* GetPopImageShowDateCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET))(this);
		}

		::System::Void ConsumePopImage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, a1, a2);
		}

		::System::String* GetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, a1);
		}

		::System::Boolean FileExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, a1, a2);
		}
	};
}
