#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK::PS { class PopImageManager_PopImageDateModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x183CAF50)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CLEARLIST_OFFSET UNITYSDK_OFFSET(0x183AAC80)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x183CB1E0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_DOWNLOAD_OFFSET UNITYSDK_OFFSET(0x183CC780)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x183CB930)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x183CC000)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x183CCD20)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x183B4280)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET UNITYSDK_OFFSET(0x183CB060)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET UNITYSDK_OFFSET(0x183CC980)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_GETQUERYMAP_OFFSET UNITYSDK_OFFSET(0x183CB9C0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_INSTANCESHOW_OFFSET UNITYSDK_OFFSET(0x183B5BB0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET UNITYSDK_OFFSET(0x183CC600)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET UNITYSDK_OFFSET(0x183CCD50)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET UNITYSDK_OFFSET(0x183CCDC0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x183CCCC0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x183CCE30)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET UNITYSDK_OFFSET(0x183CB7B0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x183CB890)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x183CCCA0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET UNITYSDK_OFFSET(0x183CC210)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET UNITYSDK_OFFSET(0x183CC8D0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET UNITYSDK_OFFSET(0x183CB3D0)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x183CB640)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x183CAD50)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183CCF40)
#define MIHOYO_SDK_PS_POPIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183CCE50)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PopImageManager_TypeDefinitionIndex = 8579;

	class PopImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PopImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PopImageManager**)Il2CppClass::FromTypeDefinitionIndex(PopImageManager_TypeDefinitionIndex)->GetStaticField(0x18630);
		}
		// static const ::System::String* PopImageShowDateCacheKey; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::PopImageManager_PopImageDateModel*>* cacheShowImageList; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PopImageModel*>* popImageList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* PSCacheMap; // 0x20
		::System::Boolean isAnimation; // 0x28
		::System::Boolean isShowing; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean InstanceShow(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_INSTANCESHOW_OFFSET))(this, a1);
		}

		::System::Boolean Show(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SHOW_OFFSET))(this, a1);
		}

		::System::Void OnClickImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLICKIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnClose(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Boolean CheckPopImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CHECKPOPIMAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::PopImageModel* GetPopImageModel()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGEMODEL_OFFSET))(this);
		}

		::System::Void ClearList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CLEARLIST_OFFSET))(this);
		}

		::System::Void GetPopImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGELIST_OFFSET))(this);
		}

		::System::Void OnGetPopImageList(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONGETPOPIMAGELIST_OFFSET))(this, a1);
		}

		::System::Boolean IsImageNeedShow(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ISIMAGENEEDSHOW_OFFSET))(this, a1);
		}

		::System::Void SaveCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::Void GetCacheShowImageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETCACHESHOWIMAGELIST_OFFSET))(this);
		}

		::System::String* GetPopImageShowDateCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETPOPIMAGESHOWDATECACHEKEY_OFFSET))(this);
		}

		::System::Void ConsumePopImage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_CONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void OnConsumePopImage(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::System::Void SaveConsumePopImage(::MiHoYo::SDK::PopImageModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_SAVECONSUMEPOPIMAGE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetQueryMap()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETQUERYMAP_OFFSET))(this);
		}

		::System::Void DownLoad(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_DOWNLOAD_OFFSET))(this, a1, a2);
		}

		::System::String* GetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_GETFILENAME_OFFSET))(this, a1);
		}

		::System::Boolean FileExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_FILEEXISTS_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LoadTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadLocalTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADLOCALTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* LoadNetworkTexture(::System::String* a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_LOADNETWORKTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_ONCALLBACK_OFFSET))(this, a1, a2);
		}
	};
}
