#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_BUILDURL_OFFSET UNITYSDK_OFFSET(0x1D1062B0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CHECKAGEGATEERROR_OFFSET UNITYSDK_OFFSET(0x1D106790)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CLEARPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1D106270)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DELETEACCOUNTDATA_OFFSET UNITYSDK_OFFSET(0x1D106990)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D1060B0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D106190)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D105EF0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D105FD0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GENERATECOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1D107550)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1D107420)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x1D106E50)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D105E60)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1D105E40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1D105E20)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_OPENAGEGATEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1D106570)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETACCOUNTSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D107D70)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D107600)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1075F0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D105EE0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1D105E50)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1D105E30)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D106B10)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1D1067A0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x1D106F30)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_STARTTHIRDPARTREGISTERFLOW_OFFSET UNITYSDK_OFFSET(0x1D1071D0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x1D107250)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1D107610)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1D107320)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D105ED0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEERRORDIALOG_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D107D80)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_0_OFFSET UNITYSDK_OFFSET(0x1D107E10)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_1_OFFSET UNITYSDK_OFFSET(0x1D107EA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__STARTTHIRDPARTREGISTERFLOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x1D109020)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_2_OFFSET UNITYSDK_OFFSET(0x1D108860)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_4_OFFSET UNITYSDK_OFFSET(0x1D1087F0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CALLBACK_37_0_OFFSET UNITYSDK_OFFSET(0x1D107F10)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CONFIRMCALLBACK_37_1_OFFSET UNITYSDK_OFFSET(0x1D108480)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYUPDATETICKET_G__CALLBACK_38_0_OFFSET UNITYSDK_OFFSET(0x1D1088F0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 8300;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x30E40);
		}
		// static const ::System::String* MODULE; // 0x0
		// static const ::System::String* AGE_GATE_PAYLOAD_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TIME_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TICKET; // 0x0
		::System::Action* successCallback; // 0x10
		::System::Action* failCallback; // 0x18
		::System::String* _payload; // 0x20
		::System::Action_1<::System::String*>* accountSuccessCallback; // 0x28
		::System::String* _ticket; // 0x30
		::System::Boolean timeExists; // 0x38
		::System::Boolean ageGateEnable; // 0x39
		::System::Boolean brAgeGateEnable; // 0x3A
		::System::Boolean _tokenLogin_k__BackingField; // 0x3B
		::System::Int32 ageGateType; // 0x3C
		::System::Boolean _ParseSucc_k__BackingField; // 0x40
		::System::Int64 _time; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_tokenLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_TOKENLOGIN_OFFSET))(this);
		}

		::System::Void set_tokenLogin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_TOKENLOGIN_OFFSET))(this, a1);
		}

		::System::Boolean get_ParseSucc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_PARSESUCC_OFFSET))(this);
		}

		::System::Void set_ParseSucc(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_PARSESUCC_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Windows::OS::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Windows::OS::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::Windows::OS::AgeGateManager* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Windows::OS::AgeGateManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void EnableAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEAGEGATE_OFFSET))(this);
		}

		::System::Void EnableBrAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEBRAGEGATE_OFFSET))(this);
		}

		::System::Void DisableAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEAGEGATE_OFFSET))(this);
		}

		::System::Void DisableBrAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEBRAGEGATE_OFFSET))(this);
		}

		::System::Void ClearPayload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CLEARPAYLOAD_OFFSET))(this);
		}

		::System::String* BuildUrl(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_BUILDURL_OFFSET))(this, a1);
		}

		::System::Void OpenAgeGateWebPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_OPENAGEGATEWEBPAGE_OFFSET))(this, a1);
		}

		::System::Boolean CheckAgeGateError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CHECKAGEGATEERROR_OFFSET))(this);
		}

		::System::Void ShowAgeGateErrorDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEERRORDIALOG_OFFSET))(this);
		}

		::System::Void ShowAgeGateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEDIALOG_OFFSET))(this);
		}

		::System::Void ShowAgeGateVerificationDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEVERIFICATIONDIALOG_OFFSET))(this);
		}

		::System::Void TryLoadTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYLOADTICKET_OFFSET))(this);
		}

		::System::Void TryUpdateTicket(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYUPDATETICKET_OFFSET))(this, a1);
		}

		::System::String* GetColoredText(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETCOLOREDTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GenerateColoredText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GENERATECOLOREDTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteAccountData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DELETEACCOUNTDATA_OFFSET))(this);
		}

		::System::Void SetSuccessCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETSUCCESSCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetFailCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETFAILCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean TryParsePayload(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYPARSEPAYLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void StartThirdPartRegisterFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_STARTTHIRDPARTREGISTERFLOW_OFFSET))(this);
		}

		::System::Void SetAccountSuccessCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETACCOUNTSUCCESSCALLBACK_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetReportBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETREPORTBODY_OFFSET))(this);
		}

		::System::Void _ShowAgeGateErrorDialog_b__34_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEERRORDIALOG_B__34_0_OFFSET))(this, a1);
		}

		::System::Void _ShowAgeGateVerificationDialog_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_0_OFFSET))(this);
		}

		::System::Void _ShowAgeGateVerificationDialog_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_1_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_g__callback_37_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CALLBACK_37_0_OFFSET))(this, a1);
		}

		::System::Void _TryLoadTicket_g__confirmCallback_37_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CONFIRMCALLBACK_37_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryLoadTicket_b__37_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_4_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_b__37_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_2_OFFSET))(this);
		}

		::System::Void _TryUpdateTicket_g__callback_38_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYUPDATETICKET_G__CALLBACK_38_0_OFFSET))(this, a1);
		}

		::System::Void _StartThirdPartRegisterFlow_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__STARTTHIRDPARTREGISTERFLOW_B__45_0_OFFSET))(this);
		}
	};
}
