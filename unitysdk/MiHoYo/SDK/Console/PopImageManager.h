#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK::Console { class PopImageManager_PopImageDateModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1B31E650)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x1B31F230)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1B31E8D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1B320940)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x1B31F1A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1B320170)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x1B321330)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1B31F410)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x1B31E750)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x1B320E80)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x1B31F600)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1B31E360)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x1B31E380)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1B3207D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B321360)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B3213C0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B3212D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B321420)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B31EFC0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1B31F100)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1B3212C0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1B3203A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x1B320DD0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x1B31EB70)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1B31EDF0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1B31E370)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1B31E480)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3215D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B321470)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 20732;

	class PopImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::PopImageManager**)Il2CppClass::FromTypeDefinitionIndex(PopImageManager_TypeDefinitionIndex)->GetStaticField(0x9840);
		}
		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::String* _country_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::PopImageManager_PopImageDateModel*>* cacheShowImageList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* PSCacheMap; // 0x28
		::System::Boolean isAnimation; // 0x30
		::System::Boolean isShowing; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_country(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SET_COUNTRY_OFFSET))(this, value);
		}

		::System::Boolean InstanceShow(::System::Boolean animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, animation);
		}

		::System::Boolean Show(::System::Boolean animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SHOW_OFFSET))(this, animation);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, model);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, model);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean CheckPopImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::PopImageModel* GetPopImageModel()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET))(this);
		}

		::System::Void ClearList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CLEARLIST_OFFSET))(this);
		}

		::System::Void GetPopImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET))(this);
		}

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, response);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, model);
		}

		::System::Void SaveCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::Void GetCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::String* GetPopImageShowDateCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET))(this);
		}

		::System::Void ConsumePopImage(::System::Int32 picId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, picId);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, response);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, model);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, url, callback);
		}

		::System::String* GetFileName(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, url);
		}

		::System::Boolean FileExists(::System::String* url)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, url);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* url, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback, ::UnityEngine::Texture2D* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, callback, data);
		}
	};
}
