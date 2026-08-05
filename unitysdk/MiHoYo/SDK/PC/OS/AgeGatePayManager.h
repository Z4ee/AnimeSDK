#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalDenyDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET UNITYSDK_OFFSET(0x1CF38930)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x1CF38FE0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x1CF396D0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CF38800)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1CF38880)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CF3A6A0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CF3AA20)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET UNITYSDK_OFFSET(0x1CF3A560)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1CF38A60)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1CF3A480)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET UNITYSDK_OFFSET(0x1CF39C50)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET UNITYSDK_OFFSET(0x1CF397F0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET UNITYSDK_OFFSET(0x1CF39240)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET UNITYSDK_OFFSET(0x1CF38E70)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET UNITYSDK_OFFSET(0x1CF3A030)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x1CF38DD0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1CF38AA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1CF3ABA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF38870)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1CF3B670)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET UNITYSDK_OFFSET(0x1CF3B390)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET UNITYSDK_OFFSET(0x1CF3B4A0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET UNITYSDK_OFFSET(0x1CF3B460)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET UNITYSDK_OFFSET(0x1CF3ADB0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET UNITYSDK_OFFSET(0x1CF3B180)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET UNITYSDK_OFFSET(0x1CF3B2F0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET UNITYSDK_OFFSET(0x1CF3B0C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET UNITYSDK_OFFSET(0x1CF3B710)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET UNITYSDK_OFFSET(0x1CF3B7B0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET UNITYSDK_OFFSET(0x1CF3B770)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CF3B980)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager_TypeDefinitionIndex = 20592;

	class AgeGatePayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::AgeGatePayManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayManager_TypeDefinitionIndex)->GetStaticField(0xA940);
		}
		::System::String* payload; // 0x10
		::System::Action* onFail; // 0x18
		::System::Action_1<::System::String*>* onCancel; // 0x20
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* parentalConsentPendingDialog; // 0x28
		::System::String* ticket; // 0x30
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog* parentalConsentRequiredDialog; // 0x38
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* parentConsenDetailsDialog; // 0x40
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog* parentDenyDialog; // 0x48
		::System::String* hintMessage; // 0x50
		::System::Int32 defaultCoolDown; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::AgeGatePayManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Boolean CheckIsAgeGatePayError(::System::Int32 retCode, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET))(this, retCode, headers);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET))(this);
		}

		::System::Void TryParsePayload(::System::Int32 retCode, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers, ::System::String* message, ::System::Action_1<::System::String*>* cancelCallback, ::System::Action* failedCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET))(this, retCode, headers, message, cancelCallback, failedCallback);
		}

		::System::Void CloseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET))(this);
		}

		::System::Void ShowParentConsentRequired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET))(this);
		}

		::System::Void ShowParentConsentPending(::System::String* email, ::System::Int32 cooldown)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET))(this, email, cooldown);
		}

		::System::Void ShowParentConsentDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET))(this);
		}

		::System::Void ShowParentDeny(::System::String* email, ::System::Int32 cooldown)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET))(this, email, cooldown);
		}

		::System::Void ShowParentDeny_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET))(this);
		}

		::System::Void SendParentEmail(::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET))(this, successCallback);
		}

		::System::Void RequestParentConsent(::System::Int32 cooldown, ::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET))(this, cooldown, successCallback);
		}

		::System::Void ParentConsentCallback(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET))(this, response);
		}

		::System::Void ParentConsentDenyCallback(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET))(this, response);
		}

		::System::Void TryLoadTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET))(this, callback);
		}

		::System::Void TryUpdateTicket(::System::String* email, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET))(this, email, callback);
		}

		::MiHoYo::SDK::JSONObject* GetReportBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_0(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET))(this, email);
		}

		::System::Void _ShowParentConsentRequired_b__19_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_0(::System::String* currentEmail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET))(this, currentEmail);
		}

		::System::Void _ShowParentConsentPending_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentDetails_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__23_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET))(this, result);
		}
	};
}
