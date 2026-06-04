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

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182EBBA0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x182EC600)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182EBE20)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x182ED7E0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x182EC570)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182ED060)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x182EE1F0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182EC790)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x182EBCA0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x182ED9E0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x182EC900)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x182EB880)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x182EB8A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x182ED660)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x182EE220)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x182EE290)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x182EE190)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x182EE300)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x182EC3F0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182EC4D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182EE0D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182ED270)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x182ED930)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x182EC010)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x182EC280)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x182EB890)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x182EB9A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x182EE420)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x182EE320)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 8647;

	class PopImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::PopImageManager**)Il2CppClass::FromTypeDefinitionIndex(PopImageManager_TypeDefinitionIndex)->GetStaticField(0xF2B0);
		}
		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* PSCacheMap; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::PopImageManager_PopImageDateModel*>* cacheShowImageList; // 0x20
		::System::String* _country_k__BackingField; // 0x28
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

		::System::Void set_country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::Boolean InstanceShow(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, a1);
		}

		::System::Boolean Show(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SHOW_OFFSET))(this, a1);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, a1);
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

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, a1);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, a1);
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

		::System::Void ConsumePopImage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, a1, a2);
		}

		::System::String* GetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, a1);
		}

		::System::Boolean FileExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, a1, a2);
		}
	};
}
