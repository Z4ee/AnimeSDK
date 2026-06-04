#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAccountListDialog; }
namespace MiHoYo::SDK::UI::OS { class IAccountListLogoutConfirmDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }
namespace MiHoYo::SDK::UI::OS { class IConfirmDialog; }
namespace MiHoYo::SDK::UI::OS { class IGooglePCOAuthDialog; }
namespace MiHoYo::SDK::UI::OS { class ILoginByAccountDialog; }
namespace MiHoYo::SDK::UI::OS { class IThirdPartyOAuthDialog; }
namespace MiHoYo::SDK::UI::OS { class ITipsBar; }
namespace MiHoYo::SDK::UI::OS { class IToast; }
namespace MiHoYo::SDK::UI::OS { class IWinAccountBindingDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalDenyDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingSuccessDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingWelcomeDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_OS_UIFACTORY_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x18456650)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTBINDINGDIALOG_OFFSET UNITYSDK_OFFSET(0x18456590)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTDIALOG_OFFSET UNITYSDK_OFFSET(0x184561A0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTEXITCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x18456110)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18456850)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDETAILSDIALOG_OFFSET UNITYSDK_OFFSET(0x18456490)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18456800)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x18456820)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x18456840)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18456810)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18456510)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTDENYDIALOG_OFFSET UNITYSDK_OFFSET(0x18456550)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x18456830)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEALERTDIALOG_OFFSET UNITYSDK_OFFSET(0x18456080)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEBINDINGSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x184565D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEBINDINGWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x18456610)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x184417D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEGOOGLEPCOAUTHDIALOG_OFFSET UNITYSDK_OFFSET(0x184562A0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATELOGINBYACCOUNTDIALOG_OFFSET UNITYSDK_OFFSET(0x18455FF0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATEPAYPARENTCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x184564D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETHIRDPARTYOAUTHDIALOG_OFFSET UNITYSDK_OFFSET(0x18456400)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETIPSBAR_OFFSET UNITYSDK_OFFSET(0x18456370)
#define MIHOYO_SDK_UI_OS_UIFACTORY_CREATETOAST_OFFSET UNITYSDK_OFFSET(0x184562E0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_ONHIDENATIVEUI_OFFSET UNITYSDK_OFFSET(0x184567D0)
#define MIHOYO_SDK_UI_OS_UIFACTORY_ONSHOWNATIVEUI_OFFSET UNITYSDK_OFFSET(0x184567A0)
#define MIHOYO_SDK_UI_OS_UIFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18456860)

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int UIFactory_TypeDefinitionIndex = 8397;

	class UIFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UI::OS::ILoginByAccountDialog* CreateLoginByAccountDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::ILoginByAccountDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATELOGINBYACCOUNTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAlertDialog* CreateAlertDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAlertDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEALERTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IConfirmDialog* CreateConfirmDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IConfirmDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATECONFIRMDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog* CreateAccountListExitConfirmDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAccountListLogoutConfirmDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTEXITCONFIRMDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAccountListDialog* CreateAccountListDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAccountListDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTLISTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IGooglePCOAuthDialog* CreateGooglePCOAuthDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IGooglePCOAuthDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEGOOGLEPCOAUTHDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IToast* CreateToast()
		{
			return ((::MiHoYo::SDK::UI::OS::IToast*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETOAST_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::ITipsBar* CreateTipsBar()
		{
			return ((::MiHoYo::SDK::UI::OS::ITipsBar*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETIPSBAR_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog* CreateThirdPartyOAuthDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IThirdPartyOAuthDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATETHIRDPARTYOAUTHDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* CreateAgeGateParentalConsentDetailsDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDETAILSDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* CreatePayParentConsentSentDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEPAYPARENTCONSENTSENTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog* CreateAgeGatePayParentConsentDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTCONSENTDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog* CreateAgeGatePayParentDenyDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPAYPARENTDENYDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinAccountBindingDialog* CreateAccountBindingDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAccountBindingDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEACCOUNTBINDINGDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinBindingSuccessDialog* CreateBindingSuccessDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinBindingSuccessDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEBINDINGSUCCESSDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IWinBindingWelcomeDialog* CreateBindingWelcomeDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IWinBindingWelcomeDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEBINDINGWELCOMEDIALOG_OFFSET))();
		}

		static ::System::Void CloseAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CLOSEALL_OFFSET))();
		}

		::System::Void OnShowNativeUI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_ONSHOWNATIVEUI_OFFSET))(this, a1, a2);
		}

		::System::Void OnHideNativeUI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_ONHIDENATIVEUI_OFFSET))(this, a1, a2);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* CreateAgeGateParentalConsentDialog(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* CreateAgeGateParentalConsentSentDialog(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::AgeGateFlowType a3)
		{
			return ((::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog*(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* CreateAgeGateParentalConsentProcessDialog(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* CreateAgeGateVerificationDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* CreateAgeGateParentalConsentRequiredDialog(::System::String* a1, ::MiHoYo::SDK::AgeGateFlowType a2)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* CreateAgeGateErrorDialog(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET))(a1, a2, a3);
		}
	};
}
