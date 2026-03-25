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

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1612E010)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x160C6F40)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1612E380)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1612F9C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x1612EB10)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1612F380)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x16130020)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x160F0C70)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x1612E200)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x1612FBC0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x1612EBE0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x1612DFF0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1612F850)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x16130040)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x161300A0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1612FFC0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x16130100)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x1612E990)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1612EA70)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1612FFB0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1612F590)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1612FB10)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1612E5A0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1612E820)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x160F57E0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161301B0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16130120)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 8075;

	class PopImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PopImageManager**)Il2CppClass::FromTypeDefinitionIndex(PopImageManager_TypeDefinitionIndex)->GetStaticField(0x14F90);
		}
		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::String* CachePath; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::PopImageManager_PopImageDateModel*>* cacheShowImageList; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x20
		::System::Boolean isAnimation; // 0x28
		::System::Boolean isShowing; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean InstanceShow(::System::Boolean animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, animation);
		}

		::System::Boolean Show(::System::Boolean animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SHOW_OFFSET))(this, animation);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, model);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, model);
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

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, response);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, model);
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

		::System::Void ConsumePopImage(::System::Int32 picId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, picId);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, response);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, model);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, url, callback);
		}

		::System::String* GetFileName(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, url);
		}

		::System::Boolean FileExists(::System::String* url)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, url);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback, ::UnityEngine::Texture2D* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, callback, data);
		}
	};
}
