#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcInfo; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x8DD5E90)
#define MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DD5E60)
#define MIHOYO_SDK_UGCINTERFACE_ADAPTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8DD5DE0)
#define MIHOYO_SDK_UGCINTERFACE_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0x8DD8600)
#define MIHOYO_SDK_UGCINTERFACE_AUTORENEWALTOKEN_OFFSET UNITYSDK_OFFSET(0x8DD69C0)
#define MIHOYO_SDK_UGCINTERFACE_BINARYMODEL2MODEL_OFFSET UNITYSDK_OFFSET(0x8DD72A0)
#define MIHOYO_SDK_UGCINTERFACE_CHECKAUTHKEYVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0x8DD5BA0)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENEXPIRED_OFFSET UNITYSDK_OFFSET(0x8DD7320)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVALID_OFFSET UNITYSDK_OFFSET(0x8DD72F0)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_1_OFFSET UNITYSDK_OFFSET(0x8DD6120)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_2_OFFSET UNITYSDK_OFFSET(0x8DD5F60)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0x8DD5F50)
#define MIHOYO_SDK_UGCINTERFACE_CLONEHEADERS_OFFSET UNITYSDK_OFFSET(0x8DD83A0)
#define MIHOYO_SDK_UGCINTERFACE_ENABLELOGGER_OFFSET UNITYSDK_OFFSET(0x8DD3BD0)
#define MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x8DD76D0)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYRESPONSE_OFFSET UNITYSDK_OFFSET(0x8DD7000)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYTIMEOUTRESPONSE_OFFSET UNITYSDK_OFFSET(0x8DD5F10)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBUSINESSHEADERS_OFFSET UNITYSDK_OFFSET(0x8DD86A0)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEHEADERS_OFFSET UNITYSDK_OFFSET(0x8DD5AC0)
#define MIHOYO_SDK_UGCINTERFACE_GENERATERESPONSE_OFFSET UNITYSDK_OFFSET(0x8DD6400)
#define MIHOYO_SDK_UGCINTERFACE_GENERATETIMEOUTRESPONSE_OFFSET UNITYSDK_OFFSET(0x8DD78F0)
#define MIHOYO_SDK_UGCINTERFACE_GETBINARY_OFFSET UNITYSDK_OFFSET(0x8DD5530)
#define MIHOYO_SDK_UGCINTERFACE_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x8DD84F0)
#define MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPMILLISEC_OFFSET UNITYSDK_OFFSET(0x8DD88B0)
#define MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPSEC_OFFSET UNITYSDK_OFFSET(0x8DD7DB0)
#define MIHOYO_SDK_UGCINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8DD3A90)
#define MIHOYO_SDK_UGCINTERFACE_GET_OFFSET UNITYSDK_OFFSET(0x8DD58E0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0x8DD42F0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0x8DD4190)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_1_OFFSET UNITYSDK_OFFSET(0x8DD4550)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0x8DD4430)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0x8DD4080)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0x8DD3EB0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGET_OFFSET UNITYSDK_OFFSET(0x8DD57C0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0x8DD4AF0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0x8DD4970)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARY_OFFSET UNITYSDK_OFFSET(0x8DD55C0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0x8DD4850)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0x8DD4670)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOST_OFFSET UNITYSDK_OFFSET(0x8DD5360)
#define MIHOYO_SDK_UGCINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0x8DD8A30)
#define MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_1_OFFSET UNITYSDK_OFFSET(0x8DD3DF0)
#define MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_OFFSET UNITYSDK_OFFSET(0x8DD3BE0)
#define MIHOYO_SDK_UGCINTERFACE_LOGGER_OFFSET UNITYSDK_OFFSET(0x8DD3D30)
#define MIHOYO_SDK_UGCINTERFACE_ONEXCHANGETOKENSUCCESS_OFFSET UNITYSDK_OFFSET(0x8DD7920)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTBINARYFAILED_OFFSET UNITYSDK_OFFSET(0x8DD7170)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTFAILED_OFFSET UNITYSDK_OFFSET(0x8DD68E0)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTBINARYRESPONDED_OFFSET UNITYSDK_OFFSET(0x8DD6D50)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTRESPONDED_OFFSET UNITYSDK_OFFSET(0x8DD6130)
#define MIHOYO_SDK_UGCINTERFACE_ONTOKENEXPIRED_OFFSET UNITYSDK_OFFSET(0x8DD74D0)
#define MIHOYO_SDK_UGCINTERFACE_POSTBINARY_OFFSET UNITYSDK_OFFSET(0x8DD5710)
#define MIHOYO_SDK_UGCINTERFACE_POSTHTTPREQUESTTASK_OFFSET UNITYSDK_OFFSET(0x8DD4C60)
#define MIHOYO_SDK_UGCINTERFACE_POST_OFFSET UNITYSDK_OFFSET(0x8DD5490)
#define MIHOYO_SDK_UGCINTERFACE_RESETTOKENINFO_OFFSET UNITYSDK_OFFSET(0x8DD5D50)
#define MIHOYO_SDK_UGCINTERFACE_RETRYEXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x8DD5970)
#define MIHOYO_SDK_UGCINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8DD3B90)
#define MIHOYO_SDK_UGCINTERFACE_UPDATETOKENINFO_OFFSET UNITYSDK_OFFSET(0x8DD7F50)
#define MIHOYO_SDK_UGCINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD3B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_TypeDefinitionIndex = 43037;

	class UGCInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UGCInterface** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::UGCInterface**)Il2CppClass::FromTypeDefinitionIndex(UGCInterface_TypeDefinitionIndex)->GetStaticField(0x54860);
		}
		// static const ::System::String* TOKEN_HEADER; // 0x0
		// static const ::System::Int32 DEFAULT_FAILED_CODE = 0xFFFFFFFF; // 0x0
		// static const ::System::String* TOKEN_EXPIRED_HEADER; // 0x0
		// static const ::System::String* DEVICE_ID_HEADER; // 0x0
		// static const ::System::String* DEVICE_ID_METHOD; // 0x0
		// static const ::System::String* UID_HEADER; // 0x0
		// static const ::System::String* REGION_HEADER; // 0x0
		// static const ::System::String* ERROR_CODE_HEADER; // 0x0
		// static const ::System::String* UGC_SET_TOKEN_TASK; // 0x0
		::System::String* m_strToken; // 0x10
		::System::String* m_strTokenHeader; // 0x18
		::MiHoYo::SDK::UGCInterface_UgcInfo* m_ugcInfo; // 0x20
		::System::String* m_strDeviceId; // 0x28
		::System::String* m_strAuthKey; // 0x30
		::System::Int64 m_n64TokenRefreshedTimestampSecs; // 0x38
		::System::Boolean m_bOpenLogger; // 0x40
		::System::Int64 m_n64TokenExpireSecs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UGCInterface* get_Instance()
		{
			return ((::MiHoYo::SDK::UGCInterface*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::UGCInterface* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UGCInterface*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void EnableLogger(::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ENABLELOGGER_OFFSET))(this, bEnable);
		}

		::System::Void InitUgcInfo(::MiHoYo::SDK::UGCInterface_UgcInfo* ugcInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_OFFSET))(this, ugcInfo);
		}

		::System::Void InitUgcInfo_1(::System::String* strGame, ::System::String* strTokenUrl, ::System::Int64 nSignType, ::System::String* strAuthAppId, ::System::String* strAuthKeyVer, ::System::String* strLangCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_1_OFFSET))(this, strGame, strTokenUrl, nSignType, strAuthAppId, strAuthKeyVer, strLangCode);
		}

		::System::Void HttpGetCarryToken(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKEN_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGetBinaryCarryToken(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKEN_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGetBinary(::System::String* strTaskId, ::System::String* strUrl, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_OFFSET))(this, strTaskId, strUrl, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPostCarryToken(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::String* strBody, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKEN_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, strBody, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPostBinaryCarryToken(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::Il2CppArray<::System::Byte>* buffer, ::System::String* strContentType, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKEN_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, buffer, strContentType, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGetCarryTokenImpl(::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKENIMPL_OFFSET))(this, strUrl, strAuthKey, strUId, strRegion, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPostCarryTokenImpl(::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::String* strBody, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKENIMPL_OFFSET))(this, strUrl, strAuthKey, strUId, strRegion, strBody, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGetBinaryCarryTokenImpl(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKENIMPL_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPostBinaryCarryTokenImpl(::System::String* strTaskId, ::System::String* strUrl, ::System::String* strAuthKey, ::System::String* strUId, ::System::String* strRegion, ::Il2CppArray<::System::Byte>* body, ::System::String* strContentType, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKENIMPL_OFFSET))(this, strTaskId, strUrl, strAuthKey, strUId, strRegion, body, strContentType, tokenFailedCallback, callback, headers, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPost(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* strBody, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOST_OFFSET))(this, strUrl, headers, strBody, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGetBinary_1(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_1_OFFSET))(this, strUrl, headers, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpPostBinary(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::Il2CppArray<::System::Byte>* body, ::System::String* strContentType, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARY_OFFSET))(this, strUrl, headers, body, strContentType, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Void HttpGet(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGET_OFFSET))(this, strUrl, headers, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Void RetryExchangeToken(::System::String* strUrl, ::System::String* strAuthKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Int32 nRetryCount, ::MiHoYo::SDK::NetworkResponseModel* originResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Int32, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_RETRYEXCHANGETOKEN_OFFSET))(this, strUrl, strAuthKey, callback, nRetryCount, originResponse);
		}

		::System::Boolean CheckAuthKeyVerifyFailed(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKAUTHKEYVERIFYFAILED_OFFSET))(this, response);
		}

		::System::Void AdaptCallback(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* callback, ::System::String* strTaskId, ::MiHoYo::SDK::NetworkResponseModel* netResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::String*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTCALLBACK_OFFSET))(this, callback, strTaskId, netResponse);
		}

		::System::Void AdaptBinaryCallback(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::String* strTaskId, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::String*, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_OFFSET))(this, callback, strTaskId, response);
		}

		::System::Void AdaptBinaryCallback_1(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::System::String* strTaskId, ::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::String*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_1_OFFSET))(this, callback, strTaskId, response);
		}

		::System::Boolean CheckTokenVerifyFailed(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_OFFSET))(this, response);
		}

		::System::Boolean CheckTokenVerifyFailed_1(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_1_OFFSET))(this, response);
		}

		::System::Boolean CheckTokenVerifyFailed_2(::System::Int32 nRetCode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_2_OFFSET))(this, nRetCode);
		}

		::System::Void OnHttpRquestResponded(::System::String* strLoggerPrefix, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeader, ::System::String* strResponse, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTRESPONDED_OFFSET))(this, strLoggerPrefix, dicResponseHeader, strResponse, tokenFailedCallback, callback);
		}

		::System::Void OnHttpRquestBinaryResponded(::System::String* strLoggerPrefix, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeader, ::Il2CppArray<::System::Byte>* binaryResponse, ::System::String* strResponse, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTBINARYRESPONDED_OFFSET))(this, strLoggerPrefix, dicResponseHeader, binaryResponse, strResponse, tokenFailedCallback, callback);
		}

		::MiHoYo::SDK::NetworkResponseModel* BinaryModel2Model(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* response)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_BINARYMODEL2MODEL_OFFSET))(this, response);
		}

		::System::Void OnHttpRequestBinaryFailed(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTBINARYFAILED_OFFSET))(this, tokenFailedCallback, callback, response);
		}

		::System::Void OnHttpRequestFailed(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTFAILED_OFFSET))(this, tokenFailedCallback, callback, response);
		}

		::System::Void PostHttpRequestTask(::System::String* strAuthKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Action* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POSTHTTPREQUESTTASK_OFFSET))(this, strAuthKey, tokenFailedCallback, callback, task);
		}

		::System::Void OnExchangeTokenSuccess(::System::String* strAuthKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONEXCHANGETOKENSUCCESS_OFFSET))(this, strAuthKey, callback, response);
		}

		::System::Void OnTokenExpired(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONTOKENEXPIRED_OFFSET))(this, tokenFailedCallback);
		}

		::System::Void ExchangeToken(::System::String* strUrl, ::System::String* strAuthKey, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKEN_OFFSET))(this, strUrl, strAuthKey, callback, timeoutCallback);
		}

		::System::Void ResetTokenInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_RESETTOKENINFO_OFFSET))(this);
		}

		::System::Void UpdateTokenInfo(::System::String* strAuthKey, ::System::Int64 n64Timestamp, ::System::String* strToken, ::System::Int64 n64Expire)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UPDATETOKENINFO_OFFSET))(this, strAuthKey, n64Timestamp, strToken, n64Expire);
		}

		::System::Void AutoRenewalToken(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_AUTORENEWALTOKEN_OFFSET))(this, dicResponseHeaders);
		}

		::System::Void Logger(::System::String* strLogger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_LOGGER_OFFSET))(this, strLogger);
		}

		::System::Boolean CheckTokenValid(::System::String* strAuthKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVALID_OFFSET))(this, strAuthKey);
		}

		::System::Boolean CheckTokenExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENEXPIRED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Post(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* strBody, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POST_OFFSET))(this, strUrl, headers, strBody, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Collections::IEnumerator* GetBinary(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETBINARY_OFFSET))(this, strUrl, headers, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Collections::IEnumerator* PostBinary(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::Il2CppArray<::System::Byte>* body, ::System::String* strContentType, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POSTBINARY_OFFSET))(this, strUrl, headers, body, strContentType, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::System::Collections::IEnumerator* Get(::System::String* strUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Single nTimeoutSeconds, ::System::Int32 nRetryCount)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GET_OFFSET))(this, strUrl, headers, completeCallback, timeoutCallback, nTimeoutSeconds, nRetryCount);
		}

		::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* GenerateBinaryResponse(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeader, ::Il2CppArray<::System::Byte>* binaryResponse, ::System::String* strResponse)
		{
			return ((::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYRESPONSE_OFFSET))(this, dicResponseHeader, binaryResponse, strResponse);
		}

		::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* GenerateBinaryTimeoutResponse()
		{
			return ((::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYTIMEOUTRESPONSE_OFFSET))(this);
		}

		::MiHoYo::SDK::NetworkResponseModel* GenerateResponse(::System::String* strResponse)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATERESPONSE_OFFSET))(this, strResponse);
		}

		::MiHoYo::SDK::NetworkResponseModel* GenerateTimeoutResponse(::System::String* strErrMsg)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATETIMEOUTRESPONSE_OFFSET))(this, strErrMsg);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CloneHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* customHeaders)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CLONEHEADERS_OFFSET))(this, customHeaders);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GenerateHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* customHeaders)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEHEADERS_OFFSET))(this, customHeaders);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GenerateBusinessHeaders(::System::String* strUId, ::System::String* strRegion, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* customHeaders)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBUSINESSHEADERS_OFFSET))(this, strUId, strRegion, customHeaders);
		}

		::System::Void AppendHeader(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* strKey, ::System::String* strValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_APPENDHEADER_OFFSET))(this, headers, strKey, strValue);
		}

		::System::String* GetDeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETDEVICEID_OFFSET))(this);
		}

		::System::Int64 GetNowTimestampSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPSEC_OFFSET))(this);
		}

		::System::Int64 GetNowTimestampMilliSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPMILLISEC_OFFSET))(this);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITENV_OFFSET))(this);
		}
	};
}
