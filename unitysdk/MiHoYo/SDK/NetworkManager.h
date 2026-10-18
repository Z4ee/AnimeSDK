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

#define MIHOYO_SDK_NETWORKMANAGER_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1BE84110)
#define MIHOYO_SDK_NETWORKMANAGER_GETQUERYURL_OFFSET UNITYSDK_OFFSET(0x1BE870D0)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_1_OFFSET UNITYSDK_OFFSET(0x1BE86E50)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_2_OFFSET UNITYSDK_OFFSET(0x1BE875B0)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_OFFSET UNITYSDK_OFFSET(0x1BE86BF0)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1BE86710)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1BE86980)
#define MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_OFFSET UNITYSDK_OFFSET(0x1BE864B0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_1_OFFSET UNITYSDK_OFFSET(0x1BE853A0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_2_OFFSET UNITYSDK_OFFSET(0x1BE85460)
#define MIHOYO_SDK_NETWORKMANAGER_GET_3_OFFSET UNITYSDK_OFFSET(0x1BE85520)
#define MIHOYO_SDK_NETWORKMANAGER_GET_4_OFFSET UNITYSDK_OFFSET(0x1BE855B0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_5_OFFSET UNITYSDK_OFFSET(0x1BE85640)
#define MIHOYO_SDK_NETWORKMANAGER_GET_6_OFFSET UNITYSDK_OFFSET(0x1BE85710)
#define MIHOYO_SDK_NETWORKMANAGER_GET_7_OFFSET UNITYSDK_OFFSET(0x1BE857D0)
#define MIHOYO_SDK_NETWORKMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x1BE85320)
#define MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1BE88880)
#define MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BE88860)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1BE87F60)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BE87830)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUTEX_OFFSET UNITYSDK_OFFSET(0x1BE88750)
#define MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BE886D0)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_1_OFFSET UNITYSDK_OFFSET(0x1BE85FD0)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_2_OFFSET UNITYSDK_OFFSET(0x1BE86240)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_OFFSET UNITYSDK_OFFSET(0x1BE85D70)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_1_OFFSET UNITYSDK_OFFSET(0x1BE85890)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_2_OFFSET UNITYSDK_OFFSET(0x1BE85B00)
#define MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_OFFSET UNITYSDK_OFFSET(0x1BE7AB50)
#define MIHOYO_SDK_NETWORKMANAGER_POST_10_OFFSET UNITYSDK_OFFSET(0x1BE851F0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_11_OFFSET UNITYSDK_OFFSET(0x1BE852A0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_1_OFFSET UNITYSDK_OFFSET(0x1BE84C30)
#define MIHOYO_SDK_NETWORKMANAGER_POST_2_OFFSET UNITYSDK_OFFSET(0x1BE84CB0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_3_OFFSET UNITYSDK_OFFSET(0x1BE84D80)
#define MIHOYO_SDK_NETWORKMANAGER_POST_4_OFFSET UNITYSDK_OFFSET(0x1BE84E40)
#define MIHOYO_SDK_NETWORKMANAGER_POST_5_OFFSET UNITYSDK_OFFSET(0x1BE84ED0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_6_OFFSET UNITYSDK_OFFSET(0x1BE84F50)
#define MIHOYO_SDK_NETWORKMANAGER_POST_7_OFFSET UNITYSDK_OFFSET(0x1BE84FE0)
#define MIHOYO_SDK_NETWORKMANAGER_POST_8_OFFSET UNITYSDK_OFFSET(0x1BE85060)
#define MIHOYO_SDK_NETWORKMANAGER_POST_9_OFFSET UNITYSDK_OFFSET(0x1BE85130)
#define MIHOYO_SDK_NETWORKMANAGER_POST_OFFSET UNITYSDK_OFFSET(0x1BE84BA0)
#define MIHOYO_SDK_NETWORKMANAGER_REFRESHCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE84120)
#define MIHOYO_SDK_NETWORKMANAGER_REMOVELOGLEVELFLAG_OFFSET UNITYSDK_OFFSET(0x1BE84500)
#define MIHOYO_SDK_NETWORKMANAGER_SETAGEGATEENABLE_OFFSET UNITYSDK_OFFSET(0x1BE84830)
#define MIHOYO_SDK_NETWORKMANAGER_SETBRAGEGATEENABLE_OFFSET UNITYSDK_OFFSET(0x1BE848E0)
#define MIHOYO_SDK_NETWORKMANAGER_SETDEVICEFP_OFFSET UNITYSDK_OFFSET(0x1BE83FB0)
#define MIHOYO_SDK_NETWORKMANAGER_SETDEVICEOS_OFFSET UNITYSDK_OFFSET(0x1BE84250)
#define MIHOYO_SDK_NETWORKMANAGER_SETEUAGEGATEENABLE_OFFSET UNITYSDK_OFFSET(0x1BE84990)
#define MIHOYO_SDK_NETWORKMANAGER_SETGAMEKEY_OFFSET UNITYSDK_OFFSET(0x1BE84340)
#define MIHOYO_SDK_NETWORKMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1BE661F0)
#define MIHOYO_SDK_NETWORKMANAGER_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x1BE84760)
#define MIHOYO_SDK_NETWORKMANAGER_SETLOGLEVELFLAG_OFFSET UNITYSDK_OFFSET(0x1BE843E0)
#define MIHOYO_SDK_NETWORKMANAGER_SETPASSPORTAPPID_OFFSET UNITYSDK_OFFSET(0x1BE84A40)
#define MIHOYO_SDK_NETWORKMANAGER_SETUIAUTOTEST_OFFSET UNITYSDK_OFFSET(0x1BE84640)
#define MIHOYO_SDK_NETWORKMANAGER_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1BE7B570)
#define MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALHEADERS_OFFSET UNITYSDK_OFFSET(0x1BE831A0)
#define MIHOYO_SDK_NETWORKMANAGER_UPDATEGLOBALQUERIES_OFFSET UNITYSDK_OFFSET(0x1BE83F30)
#define MIHOYO_SDK_NETWORKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE888A0)
#define MIHOYO_SDK_NETWORKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE83120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager_TypeDefinitionIndex = 8143;

	class NetworkManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::NetworkManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::NetworkManager**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager_TypeDefinitionIndex)->GetStaticField(0x1BF0);
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

		static ::System::Void ShowNetworkError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SHOWNETWORKERROR_OFFSET))(a1, a2);
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

		::System::Void RefreshClientType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_REFRESHCLIENTTYPE_OFFSET))(this);
		}

		::System::Void SetDeviceOS()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETDEVICEOS_OFFSET))(this);
		}

		::System::Void SetGameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETGAMEKEY_OFFSET))(this, a1);
		}

		::System::Void SetLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLANGUAGE_OFFSET))(this);
		}

		::System::Void SetDeviceFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETDEVICEFP_OFFSET))(this);
		}

		::System::Void SetLogLevelFlag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLOGLEVELFLAG_OFFSET))(this, a1);
		}

		::System::Void RemoveLogLevelFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_REMOVELOGLEVELFLAG_OFFSET))(this);
		}

		::System::Void SetUIAutoTest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETUIAUTOTEST_OFFSET))(this, a1);
		}

		::System::Void SetLifecycleId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETLIFECYCLEID_OFFSET))(this, a1);
		}

		::System::Void SetAgeGateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETAGEGATEENABLE_OFFSET))(this, a1);
		}

		::System::Void SetBrAgeGateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETBRAGEGATEENABLE_OFFSET))(this, a1);
		}

		::System::Void SetEuAgeGateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETEUAGEGATEENABLE_OFFSET))(this, a1);
		}

		::System::Void SetPassportAppId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_SETPASSPORTAPPID_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Post(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action* a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Post_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* Post_2(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::String* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Post_3(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Post_4(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::IEnumerator* Post_5(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* Post_6(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a4, ::System::Action* a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Post_7(::System::String* a1, ::System::String* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* Post_8(::System::String* a1, ::System::String* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::String* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Post_9(::System::String* a1, ::System::String* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Post_10(::System::String* a1, ::System::String* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_10_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::IEnumerator* Post_11(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POST_11_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* Get(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Get_1(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Get_2(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Get_3(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::IEnumerator* Get_4(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Get_5(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::String* a3, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Get_6(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* Get_7(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GET_7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostRequest(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PostRequest_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostRequest_2(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUEST_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostRequestEx(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PostRequestEx_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostRequestEx_2(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_POSTREQUESTEX_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetRequest(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetRequest_1(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetRequest_2(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUEST_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetRequestEx(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetRequestEx_1(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetRequestEx_2(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETREQUESTEX_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* GetQueryUrl(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_GETQUERYURL_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetCallback(::System::String* a1)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::NetworkResponseModelEx* OnGetCallback_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETCALLBACK_1_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::NetworkResponseModel* OnGetTimeOut()
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUT_OFFSET))(this);
		}

		::MiHoYo::SDK::NetworkResponseModelEx* OnGetTimeOutEx()
		{
			return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONGETTIMEOUTEX_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::MiHoYo::SDK::NetworkResponseModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnCallback_1(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a1, ::MiHoYo::SDK::NetworkResponseModelEx* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER_ONCALLBACK_1_OFFSET))(this, a1, a2);
		}
	};
}
