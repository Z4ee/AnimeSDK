#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfigUrlModel.h"

namespace System { class String; }

#define MIHOYO_SDK_URLCONFIG_URL_GET_ABTESTPLAT_OFFSET UNITYSDK_OFFSET(0x1A1895B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTPRIVACYURL_OFFSET UNITYSDK_OFFSET(0x1A189590)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x1A189580)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACKNEWERDEVICES_OFFSET UNITYSDK_OFFSET(0x1A1894C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_AGELIMITURL_OFFSET UNITYSDK_OFFSET(0x1A1893A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_APPLELOGINURL_OFFSET UNITYSDK_OFFSET(0x1A1890B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x1A1891E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDDEVICE_OFFSET UNITYSDK_OFFSET(0x1A1897D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A1893B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1A188F30)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1A188C10)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1A1891A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BIND_OFFSET UNITYSDK_OFFSET(0x1A188CD0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKDEVICELIMIT_OFFSET UNITYSDK_OFFSET(0x1A1897C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x1A188EF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKPAY_OFFSET UNITYSDK_OFFSET(0x1A189290)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKV2_OFFSET UNITYSDK_OFFSET(0x1A189680)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECK_OFFSET UNITYSDK_OFFSET(0x1A189440)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIGCENTER_OFFSET UNITYSDK_OFFSET(0x1A189320)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x1A188E50)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCREATEORDER_OFFSET UNITYSDK_OFFSET(0x1A1892D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x1A17F230)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMPAREPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1A189250)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONFIRMQRCODE_OFFSET UNITYSDK_OFFSET(0x1A188E00)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEBINDTHIRDPARTYOS_OFFSET UNITYSDK_OFFSET(0x1A189750)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLECREATEACTIONTICKETOS_OFFSET UNITYSDK_OFFSET(0x1A189700)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEGETBINDTICKETINFOOS_OFFSET UNITYSDK_OFFSET(0x1A189710)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLELOGINBYACTIONTICKETOS_OFFSET UNITYSDK_OFFSET(0x1A189730)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEREACTIVATEACCOUNTOS_OFFSET UNITYSDK_OFFSET(0x1A189740)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEVERIFYEMAILCAPTCHAOS_OFFSET UNITYSDK_OFFSET(0x1A189720)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSUMEALERTPIC_OFFSET UNITYSDK_OFFSET(0x1A1894A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1A188EB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_DATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A189180)
#define MIHOYO_SDK_URLCONFIG_URL_GET_DEVICEVERIFYDESCURL_OFFSET UNITYSDK_OFFSET(0x1A189480)
#define MIHOYO_SDK_URLCONFIG_URL_GET_EMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1A1893F0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FACEBOOKLOGINURL_OFFSET UNITYSDK_OFFSET(0x1A1890A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FETCHQRCODE_OFFSET UNITYSDK_OFFSET(0x1A188D40)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORDOVERSEA_OFFSET UNITYSDK_OFFSET(0x1A189090)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A188D30)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETALERTPIC_OFFSET UNITYSDK_OFFSET(0x1A189490)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1A189640)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETEXTLIST_OFFSET UNITYSDK_OFFSET(0x1A1895C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETVOICETOKEN_OFFSET UNITYSDK_OFFSET(0x1A1897B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GOOGLELOGINURL_OFFSET UNITYSDK_OFFSET(0x1A1890C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GRANT_OFFSET UNITYSDK_OFFSET(0x1A188F70)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x1A188C90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_KRAUTHENTICATIONURL_OFFSET UNITYSDK_OFFSET(0x1A189220)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTNEWERDEVICES_OFFSET UNITYSDK_OFFSET(0x1A1894B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x1A188FF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1A189600)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1A188FB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1A188B50)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LOGINMOBILE_OFFSET UNITYSDK_OFFSET(0x1A188B90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MAILREGISTEROVERSEA_OFFSET UNITYSDK_OFFSET(0x1A189080)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MOBILEREGISTER_OFFSET UNITYSDK_OFFSET(0x1A188D20)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1A188EA0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEVERSIONCHECK_OFFSET UNITYSDK_OFFSET(0x1A188E90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PASSPORTGETCONFIGURL_OFFSET UNITYSDK_OFFSET(0x1A1897A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYADYENURL_OFFSET UNITYSDK_OFFSET(0x1A189240)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYDIALOGABTEST_OFFSET UNITYSDK_OFFSET(0x1A1895A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYPALURL_OFFSET UNITYSDK_OFFSET(0x1A189230)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PCCHANNELBINDINGWEBPAGEURLOS_OFFSET UNITYSDK_OFFSET(0x1A189760)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PING2_OFFSET UNITYSDK_OFFSET(0x1A189040)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PING_OFFSET UNITYSDK_OFFSET(0x1A189000)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PRELOADURL_OFFSET UNITYSDK_OFFSET(0x1A189310)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PS4BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A1896D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PSCREATEACTIONTICKETCN_OFFSET UNITYSDK_OFFSET(0x1A1896F0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PSDETECTCHECK_OFFSET UNITYSDK_OFFSET(0x1A189170)
#define MIHOYO_SDK_URLCONFIG_URL_GET_QUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x1A188D80)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A189400)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLEHELP_OFFSET UNITYSDK_OFFSET(0x1A189560)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLERULE_OFFSET UNITYSDK_OFFSET(0x1A189570)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A188D10)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REPORTDATA_OFFSET UNITYSDK_OFFSET(0x1A188E40)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SCANQRCODE_OFFSET UNITYSDK_OFFSET(0x1A188DC0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SDKDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A189190)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SONYBINDPHONEURL_OFFSET UNITYSDK_OFFSET(0x1A1894D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SWCONFIG_OFFSET UNITYSDK_OFFSET(0x1A189360)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TEENAGERUSERPROTOCALURL_OFFSET UNITYSDK_OFFSET(0x1A189140)
#define MIHOYO_SDK_URLCONFIG_URL_GET_THIRDLOGINFOREIGN_OFFSET UNITYSDK_OFFSET(0x1A1890D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1A188BD0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TOKENVERIFY_OFFSET UNITYSDK_OFFSET(0x1A188C50)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TWITTERLOGINURL_OFFSET UNITYSDK_OFFSET(0x1A189110)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURLV2_OFFSET UNITYSDK_OFFSET(0x1A189160)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURL_OFFSET UNITYSDK_OFFSET(0x1A189150)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURLV2_OFFSET UNITYSDK_OFFSET(0x1A189130)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURL_OFFSET UNITYSDK_OFFSET(0x1A189120)
#define MIHOYO_SDK_URLCONFIG_URL_GET_VERIFYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A1896E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_WATERMARKINFOURL_OFFSET UNITYSDK_OFFSET(0x1A1896C0)
#define MIHOYO_SDK_URLCONFIG_URL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A188A30)
#define MIHOYO_SDK_URLCONFIG_URL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A188A20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int URLConfig_URL_TypeDefinitionIndex = 18943;

	class URLConfig_URL : public ::MiHoYo::SDK::ConfigUrlModel
	{
	public:
		::System::String* bindSafeMobile; // 0x678
		::System::String* reportKey; // 0x680

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::ConfigUrlModel* baseUrl)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfigUrlModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL__CTOR_1_OFFSET))(this, baseUrl);
		}

		::System::String* get_loadConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LOADCONFIG_OFFSET))(this);
		}

		::System::String* get_loginMobile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LOGINMOBILE_OFFSET))(this);
		}

		::System::String* get_ticketByToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TICKETBYTOKEN_OFFSET))(this);
		}

		::System::String* get_bindRealName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDREALNAME_OFFSET))(this);
		}

		::System::String* get_tokenVerify()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TOKENVERIFY_OFFSET))(this);
		}

		::System::String* get_guestLogin()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GUESTLOGIN_OFFSET))(this);
		}

		::System::String* get_bind()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BIND_OFFSET))(this);
		}

		::System::String* get_register()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REGISTER_OFFSET))(this);
		}

		::System::String* get_mobileRegister()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MOBILEREGISTER_OFFSET))(this);
		}

		::System::String* get_forgetPassword()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORD_OFFSET))(this);
		}

		::System::String* get_fetchQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FETCHQRCODE_OFFSET))(this);
		}

		::System::String* get_queryQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_QUERYQRCODE_OFFSET))(this);
		}

		::System::String* get_scanQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SCANQRCODE_OFFSET))(this);
		}

		::System::String* get_confirmQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONFIRMQRCODE_OFFSET))(this);
		}

		::System::String* get_reportData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REPORTDATA_OFFSET))(this);
		}

		::System::String* get_comboLogin()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOLOGIN_OFFSET))(this);
		}

		::System::String* get_comboConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIG_OFFSET))(this);
		}

		::System::String* get_multiLanguageVersionCheck()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEVERSIONCHECK_OFFSET))(this);
		}

		::System::String* get_multiLanguageDownload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEDOWNLOAD_OFFSET))(this);
		}

		::System::String* get_createOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CREATEORDER_OFFSET))(this);
		}

		::System::String* get_checkOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKORDER_OFFSET))(this);
		}

		::System::String* get_bindMobile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDMOBILE_OFFSET))(this);
		}

		::System::String* get_grant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GRANT_OFFSET))(this);
		}

		::System::String* get_listPriceTier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIER_OFFSET))(this);
		}

		::System::String* get_listPayPlat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPAYPLAT_OFFSET))(this);
		}

		::System::String* get_ping()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PING_OFFSET))(this);
		}

		::System::String* get_ping2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PING2_OFFSET))(this);
		}

		::System::String* get_mailRegisterOversea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MAILREGISTEROVERSEA_OFFSET))(this);
		}

		::System::String* get_forgetPasswordOversea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORDOVERSEA_OFFSET))(this);
		}

		::System::String* get_facebookLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FACEBOOKLOGINURL_OFFSET))(this);
		}

		::System::String* get_appleLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_APPLELOGINURL_OFFSET))(this);
		}

		::System::String* get_googleLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GOOGLELOGINURL_OFFSET))(this);
		}

		::System::String* get_thirdLoginForeign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_THIRDLOGINFOREIGN_OFFSET))(this);
		}

		::System::String* get_twitterLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TWITTERLOGINURL_OFFSET))(this);
		}

		::System::String* get_userProtocalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURL_OFFSET))(this);
		}

		::System::String* get_userProtocalURLV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURLV2_OFFSET))(this);
		}

		::System::String* get_teenagerUserProtocalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TEENAGERUSERPROTOCALURL_OFFSET))(this);
		}

		::System::String* get_userPrivacyURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURL_OFFSET))(this);
		}

		::System::String* get_userPrivacyURLV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURLV2_OFFSET))(this);
		}

		::System::String* get_psDetectCheck()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PSDETECTCHECK_OFFSET))(this);
		}

		::System::String* get_dataUpload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_DATAUPLOAD_OFFSET))(this);
		}

		::System::String* get_sdkDataUpload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SDKDATAUPLOAD_OFFSET))(this);
		}

		::System::String* get_bindThirdparty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDTHIRDPARTY_OFFSET))(this);
		}

		::System::String* get_beforeVerify()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BEFOREVERIFY_OFFSET))(this);
		}

		::System::String* get_krAuthenticationURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_KRAUTHENTICATIONURL_OFFSET))(this);
		}

		::System::String* get_paypalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYPALURL_OFFSET))(this);
		}

		::System::String* get_payAdyenURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYADYENURL_OFFSET))(this);
		}

		::System::String* get_compareProtocolVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMPAREPROTOCOLVERSION_OFFSET))(this);
		}

		::System::String* get_checkPay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKPAY_OFFSET))(this);
		}

		::System::String* get_comboCreateOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCREATEORDER_OFFSET))(this);
		}

		::System::String* get_preloadURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PRELOADURL_OFFSET))(this);
		}

		::System::String* get_comboConfigCenter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIGCENTER_OFFSET))(this);
		}

		::System::String* get_swConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SWCONFIG_OFFSET))(this);
		}

		::System::String* get_ageLimitURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_AGELIMITURL_OFFSET))(this);
		}

		::System::String* get_bindEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDEMAIL_OFFSET))(this);
		}

		::System::String* get_emailCaptcha()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_EMAILCAPTCHA_OFFSET))(this);
		}

		::System::String* get_reactivateAccount()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::String* get_check()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECK_OFFSET))(this);
		}

		::System::String* get_deviceVerifyDescURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_DEVICEVERIFYDESCURL_OFFSET))(this);
		}

		::System::String* get_getAlertPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETALERTPIC_OFFSET))(this);
		}

		::System::String* get_consumeAlertPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSUMEALERTPIC_OFFSET))(this);
		}

		::System::String* get_listNewerDevices()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTNEWERDEVICES_OFFSET))(this);
		}

		::System::String* get_ackNewerDevices()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACKNEWERDEVICES_OFFSET))(this);
		}

		::System::String* get_sonyBindPhoneURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SONYBINDPHONEURL_OFFSET))(this);
		}

		::System::String* get_realPeopleHelp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLEHELP_OFFSET))(this);
		}

		::System::String* get_realPeopleRule()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLERULE_OFFSET))(this);
		}

		::System::String* get_accountUserAgreementUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* get_accountPrivacyUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTPRIVACYURL_OFFSET))(this);
		}

		::System::String* get_payDialogABTest()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYDIALOGABTEST_OFFSET))(this);
		}

		::System::String* get_abtestPlat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ABTESTPLAT_OFFSET))(this);
		}

		::System::String* get_getExtList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETEXTLIST_OFFSET))(this);
		}

		::System::String* get_listPriceTierV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIERV2_OFFSET))(this);
		}

		::System::String* get_getCrossTokenUrlBySToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETCROSSTOKENURLBYSTOKEN_OFFSET))(this);
		}

		::System::String* get_checkV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKV2_OFFSET))(this);
		}

		::System::String* get_watermarkInfoURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_WATERMARKINFOURL_OFFSET))(this);
		}

		::System::String* get_ps4BindEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PS4BINDEMAIL_OFFSET))(this);
		}

		::System::String* get_verifyActionTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_VERIFYACTIONTICKET_OFFSET))(this);
		}

		::System::String* get_psCreateActionTicketCN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PSCREATEACTIONTICKETCN_OFFSET))(this);
		}

		::System::String* get_consoleCreateActionTicketOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLECREATEACTIONTICKETOS_OFFSET))(this);
		}

		::System::String* get_consoleGetBindTicketInfoOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEGETBINDTICKETINFOOS_OFFSET))(this);
		}

		::System::String* get_consoleVerifyEmailCaptchaOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEVERIFYEMAILCAPTCHAOS_OFFSET))(this);
		}

		::System::String* get_consoleLoginByActionTicketOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLELOGINBYACTIONTICKETOS_OFFSET))(this);
		}

		::System::String* get_consoleReactivateAccountOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEREACTIVATEACCOUNTOS_OFFSET))(this);
		}

		::System::String* get_consoleBindThirdPartyOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEBINDTHIRDPARTYOS_OFFSET))(this);
		}

		::System::String* get_pcChannelBindingWebPageUrlOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PCCHANNELBINDINGWEBPAGEURLOS_OFFSET))(this);
		}

		::System::String* get_passportGetConfigUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PASSPORTGETCONFIGURL_OFFSET))(this);
		}

		::System::String* get_getVoiceToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETVOICETOKEN_OFFSET))(this);
		}

		::System::String* get_checkDeviceLimit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKDEVICELIMIT_OFFSET))(this);
		}

		::System::String* get_bindDevice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDDEVICE_OFFSET))(this);
		}
	};
}
