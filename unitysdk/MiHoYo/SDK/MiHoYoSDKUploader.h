#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Uploader { class UploadCallbackAction; }
namespace MiHoYo::SDK::Uploader { class Uploader; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER_COMBOSIGN_OFFSET UNITYSDK_OFFSET(0x194AF8A0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_GETSIGNAPPKEY_OFFSET UNITYSDK_OFFSET(0x194AECC0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_GETSTSBYCOMBOTOKENURL_OFFSET UNITYSDK_OFFSET(0x194AE830)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x194ADF80)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x194ADFC0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x194ADF20)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x194AEF20)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_ONGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x194B0620)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_ONGETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x194B0B90)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x194AEA10)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_POST_OFFSET UNITYSDK_OFFSET(0x194AEF50)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_SETUPUPLOADER_OFFSET UNITYSDK_OFFSET(0x194AE3A0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_SHAREDHEADERS_OFFSET UNITYSDK_OFFSET(0x194AEFF0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_UPLOADBUFFER_OFFSET UNITYSDK_OFFSET(0x194AE2A0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x194AE1A0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x194B0BD0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER__SETUPUPLOADER_B__13_0_OFFSET UNITYSDK_OFFSET(0x194B0BE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader_TypeDefinitionIndex = 46924;

	class MiHoYoSDKUploader : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKUploader** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKUploader**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader_TypeDefinitionIndex)->GetStaticField(0x56870);
		}
		// static const ::System::Int32 TimeOutValue = 0x80000000; // 0x0
		// static const ::System::Int32 ExceptionValue = 0x80000001; // 0x0
		::MiHoYo::SDK::Uploader::Uploader* uploader; // 0x18
		::System::Boolean useAliyun; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_ISAVAILABLE_OFFSET))();
		}

		::MiHoYo::SDK::EnvType get_env()
		{
			return ((::MiHoYo::SDK::EnvType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_ENV_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKUploader* get_Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKUploader*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 UploadFile(::System::String* a1, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_UPLOADFILE_OFFSET))(this, a1, a2);
		}

		::System::Int32 UploadBuffer(::Il2CppArray<::System::Byte>* a1, ::MiHoYo::SDK::Uploader::UploadCallbackAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::Uploader::UploadCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_UPLOADBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void SetupUploader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_SETUPUPLOADER_OFFSET))(this);
		}

		::System::String* GetSTSByComboTokenURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_GETSTSBYCOMBOTOKENURL_OFFSET))(this);
		}

		::System::String* GetSignAppKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_GETSIGNAPPKEY_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::MiHoYo::SDK::NetworkResponseModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_ONCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void PostRequest(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_POSTREQUEST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SharedHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_SHAREDHEADERS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Post(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_POST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* ComboSign(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_COMBOSIGN_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetCallback(::System::String* a1)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_ONGETCALLBACK_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetTimeOut()
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_ONGETTIMEOUT_OFFSET))(this);
		}

		::System::Void _SetupUploader_b__13_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER__SETUPUPLOADER_B__13_0_OFFSET))(this, a1);
		}
	};
}
