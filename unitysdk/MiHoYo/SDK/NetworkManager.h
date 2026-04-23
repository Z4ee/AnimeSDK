#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x17589290)
#define MIHOYO_SDK_NETWORKMANAGER_GETQUERYURL_OFFSET UNITYSDK_OFFSET(0x1758BB50)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_1_OFFSET UNITYSDK_OFFSET(0x1758B960)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_2_OFFSET UNITYSDK_OFFSET(0x1758C130)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_OFFSET UNITYSDK_OFFSET(0x1758B790)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1758B3D0)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1758B5B0)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_OFFSET UNITYSDK_OFFSET(0x1758B230)
#define MIHOYO_SDK_NETWORKMANAGER_GET_1_OFFSET UNITYSDK_OFFSET(0x1758A400)
#define MIHOYO_SDK_NETWORKMANAGER_GET_2_OFFSET UNITYSDK_OFFSET(0x1758A4C0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_3_OFFSET UNITYSDK_OFFSET(0x1758A580)
#define MIHOYO_SDK_NETWORKMANAGER_GET_4_OFFSET UNITYSDK_OFFSET(0x1758A610)
#define MIHOYO_SDK_NETWORKMANAGER_GET_5_OFFSET UNITYSDK_OFFSET(0x1758A6A0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_6_OFFSET UNITYSDK_OFFSET(0x1758A760)
#define MIHOYO_SDK_NETWORKMANAGER_GET_7_OFFSET UNITYSDK_OFFSET(0x1758A820)
#define MIHOYO_SDK_NETWORKMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x1758A380)
#define MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1758D0E0)
#define MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1758D0C0)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1758C900)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1758C320)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUTEX_OFFSET UNITYSDK_OFFSET(0x1758CFB0)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1758CF30)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_1_OFFSET UNITYSDK_OFFSET(0x1758AE70)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_2_OFFSET UNITYSDK_OFFSET(0x1758B050)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_OFFSET UNITYSDK_OFFSET(0x1758ACA0)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1758A8E0)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1758AAC0)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x1757FD40)
#define MIHOYO_SDK_NETWORKMANAGER_POST_10_OFFSET UNITYSDK_OFFSET(0x1758A250)
#define MIHOYO_SDK_NETWORKMANAGER_POST_11_OFFSET UNITYSDK_OFFSET(0x1758A300)
#define MIHOYO_SDK_NETWORKMANAGER_POST_1_OFFSET UNITYSDK_OFFSET(0x17589CA0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_2_OFFSET UNITYSDK_OFFSET(0x17589D20)
#define MIHOYO_SDK_NETWORKMANAGER_POST_3_OFFSET UNITYSDK_OFFSET(0x17589DF0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_4_OFFSET UNITYSDK_OFFSET(0x17589EB0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_5_OFFSET UNITYSDK_OFFSET(0x17589F40)
#define MIHOYO_SDK_NETWORKMANAGER_POST_6_OFFSET UNITYSDK_OFFSET(0x17589FC0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_7_OFFSET UNITYSDK_OFFSET(0x1758A050)
#define MIHOYO_SDK_NETWORKMANAGER_POST_8_OFFSET UNITYSDK_OFFSET(0x1758A0D0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_9_OFFSET UNITYSDK_OFFSET(0x1758A190)
#define MIHOYO_SDK_NETWORKMANAGER_POST_OFFSET UNITYSDK_OFFSET(0x17589C10)
#define MIHOYO_SDK_NETWORKMANAGER_REMOVELOGLEVELFLAG_OFFSET UNITYSDK_OFFSET(0x17589650)
#define MIHOYO_SDK_NETWORKMANAGER_SETAGEGATEENABLE_OFFSET UNITYSDK_OFFSET(0x17589980)
#define MIHOYO_SDK_NETWORKMANAGER_SETBRAGEGATEENABLE_OFFSET UNITYSDK_OFFSET(0x17589A30)
#define MIHOYO_SDK_NETWORKMANAGER_SETDEVICEFP_OFFSET UNITYSDK_OFFSET(0x17589130)
#define MIHOYO_SDK_NETWORKMANAGER_SETDEVICEOS_OFFSET UNITYSDK_OFFSET(0x175892A0)
#define MIHOYO_SDK_NETWORKMANAGER_SETGAMEKEY_OFFSET UNITYSDK_OFFSET(0x17589390)
#define MIHOYO_SDK_NETWORKMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x17589430)
#define MIHOYO_SDK_NETWORKMANAGER_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x175898B0)
#define MIHOYO_SDK_NETWORKMANAGER_SETLOGLEVELFLAG_OFFSET UNITYSDK_OFFSET(0x17589530)
#define MIHOYO_SDK_NETWORKMANAGER_SETPASSPORTAPPID_OFFSET UNITYSDK_OFFSET(0x17589AE0)
#define MIHOYO_SDK_NETWORKMANAGER_SETUIAUTOTEST_OFFSET UNITYSDK_OFFSET(0x17589790)
#define MIHOYO_SDK_NETWORKMANAGER_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x17580680)
#define MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALHEADERS_OFFSET UNITYSDK_OFFSET(0x17588310)
#define MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALQUERIES_OFFSET UNITYSDK_OFFSET(0x175890B0)
#define MIHOYO_SDK_NETWORKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1758D100)
#define MIHOYO_SDK_NETWORKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17588290)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager_TypeDefinitionIndex = 7182;

	class NetworkManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::NetworkManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::NetworkManager**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager_TypeDefinitionIndex)->GetStaticField(0x820);
		}
		// static const ::System::Int32 TimeOutValue = 0x80000000; // 0x0
		// static const ::System::Int32 ExceptionValue = 0x80000001; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ShowNetworkError(::System::Int32 code, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SHOWNETWORKERROR_OFFSET))(code, message);
		}

		::System::Void UpdateGlobalHeaders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALHEADERS_OFFSET))(this);
		}

		::System::Void UpdateGlobalQueries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALQUERIES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETHEADERS_OFFSET))(this);
		}

		::System::Void SetDeviceOS()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETDEVICEOS_OFFSET))(this);
		}

		::System::Void SetGameKey(::System::String* gameKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETGAMEKEY_OFFSET))(this, gameKey);
		}

		::System::Void SetLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLANGUAGE_OFFSET))(this);
		}

		::System::Void SetDeviceFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETDEVICEFP_OFFSET))(this);
		}

		::System::Void SetLogLevelFlag(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLOGLEVELFLAG_OFFSET))(this, level);
		}

		::System::Void RemoveLogLevelFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_REMOVELOGLEVELFLAG_OFFSET))(this);
		}

		::System::Void SetUIAutoTest(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETUIAUTOTEST_OFFSET))(this, enable);
		}

		::System::Void SetLifecycleId(::System::String* lifecycleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLIFECYCLEID_OFFSET))(this, lifecycleId);
		}

		::System::Void SetAgeGateEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETAGEGATEENABLE_OFFSET))(this, enable);
		}

		::System::Void SetBrAgeGateEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETBRAGEGATEENABLE_OFFSET))(this, enable);
		}

		::System::Void SetPassportAppId(::System::String* passportAppId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETPASSPORTAPPID_OFFSET))(this, passportAppId);
		}

		::System::Collections::IEnumerator* Post(::System::String* requestUrl, ::System::String* bodyString, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_OFFSET))(this, requestUrl, bodyString, headers, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Post_1(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_1_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Post_2(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_2_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_3(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_3_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_4(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_4_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_5(::System::String* requestUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* bodyDic, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_5_OFFSET))(this, requestUrl, bodyDic, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Post_6(::System::String* requestUrl, ::System::String* bodyString, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_6_OFFSET))(this, requestUrl, bodyString, headers, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Post_7(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_7_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Post_8(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_8_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_9(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_9_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_10(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_10_OFFSET))(this, requestUrl, bodyString, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Post_11(::System::String* requestUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* bodyDic, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_11_OFFSET))(this, requestUrl, bodyDic, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* Get(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_OFFSET))(this, requestUrl, query, callback, timeoutCallback, checkMD5);
		}

		::System::Collections::IEnumerator* Get_1(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::String* extHeaders, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_1_OFFSET))(this, requestUrl, query, extHeaders, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get_2(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_2_OFFSET))(this, requestUrl, query, extHeaders, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get_3(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_3_OFFSET))(this, requestUrl, query, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get_4(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Boolean checkMD5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_4_OFFSET))(this, requestUrl, query, callback, timeoutCallback, checkMD5);
		}

		::System::Collections::IEnumerator* Get_5(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::String* extHeaders, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_5_OFFSET))(this, requestUrl, query, extHeaders, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get_6(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_6_OFFSET))(this, requestUrl, query, extHeaders, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Collections::IEnumerator* Get_7(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* callback, ::System::Action* timeoutCallback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_7_OFFSET))(this, requestUrl, query, callback, timeoutCallback, timeoutSecond, retryTime);
		}

		::System::Void PostRequest(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_OFFSET))(this, requestUrl, bodyString, callback, timeoutSecond, retryTime);
		}

		::System::Void PostRequest_1(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_1_OFFSET))(this, requestUrl, bodyString, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void PostRequest_2(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_2_OFFSET))(this, requestUrl, bodyString, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void PostRequestEx(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_OFFSET))(this, requestUrl, bodyString, callback, timeoutSecond, retryTime);
		}

		::System::Void PostRequestEx_1(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_1_OFFSET))(this, requestUrl, bodyString, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void PostRequestEx_2(::System::String* requestUrl, ::System::String* bodyString, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_2_OFFSET))(this, requestUrl, bodyString, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void GetRequest(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_OFFSET))(this, requestUrl, query, callback, timeoutSecond, retryTime);
		}

		::System::Void GetRequest_1(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_1_OFFSET))(this, requestUrl, query, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void GetRequest_2(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_2_OFFSET))(this, requestUrl, query, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void GetRequestEx(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_OFFSET))(this, requestUrl, query, callback, timeoutSecond, retryTime);
		}

		::System::Void GetRequestEx_1(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::String* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_1_OFFSET))(this, requestUrl, query, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::Void GetRequestEx_2(::System::String* requestUrl, ::MiHoYo::SDK::JSONObject* query, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders, ::System::Single timeoutSecond, ::System::Int32 retryTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_2_OFFSET))(this, requestUrl, query, callback, extHeaders, timeoutSecond, retryTime);
		}

		::System::String* GetQueryUrl(::System::String* url, ::MiHoYo::SDK::JSONObject* customQuerys)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETQUERYURL_OFFSET))(this, url, customQuerys);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetCallback(::System::String* responseString)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_OFFSET))(this, responseString);
		}

		::MiHoYo::SDK::NetworkResponseModelEx* OnGetCallback_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* responseHeaders, ::System::String* responseString)
		{
			return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_1_OFFSET))(this, responseHeaders, responseString);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetTimeOut()
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUT_OFFSET))(this);
		}

		::MiHoYo::SDK::NetworkResponseModelEx* OnGetTimeOutEx()
		{
			return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUTEX_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback, ::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_OFFSET))(this, callback, response);
		}

		::System::Void OnCallback_1(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_1_OFFSET))(this, callback, response);
		}
	};
}
