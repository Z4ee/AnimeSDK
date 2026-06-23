#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKCONFIGURLMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62ECB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKConfigUrlModel_TypeDefinitionIndex = 36739;

	class MiHoYoSDKConfigUrlModel : public ::System::Object
	{
	public:
		::System::String* abtestUrl; // 0x10
		::System::String* adyenPayUrl; // 0x18
		::System::String* antiAddiction; // 0x20
		::System::String* avaliablePayWays; // 0x28
		::System::String* avaliablePayWaysPC; // 0x30
		::System::String* beforeVerify; // 0x38
		::System::String* bind; // 0x40
		::System::String* bindEmail; // 0x48
		::System::String* bindEmailURL; // 0x50
		::System::String* bindMobile; // 0x58
		::System::String* bindPhonePS; // 0x60
		::System::String* bindMobileURL; // 0x68
		::System::String* bindRealName; // 0x70
		::System::String* bindRealPerson; // 0x78
		::System::String* bindThirdParty; // 0x80
		::System::String* checkAccount; // 0x88
		::System::String* checkMmt; // 0x90
		::System::String* checkPayPS; // 0x98
		::System::String* checkPopImages; // 0xA0
		::System::String* checkPopNotice; // 0xA8
		::System::String* comboConfig; // 0xB0
		::System::String* comboConfigCenter; // 0xB8
		::System::String* comboCreateOrder; // 0xC0
		::System::String* comboLogin; // 0xC8
		::System::String* comboPing; // 0xD0
		::System::String* comboProtocol; // 0xD8
		::System::String* fetchQRCode; // 0xE0
		::System::String* queryQRCode; // 0xE8
		::System::String* confirmQRCode; // 0xF0
		::System::String* confirmRealPerson; // 0xF8
		::System::String* consumePopImage; // 0x100
		::System::String* createMmt; // 0x108
		::System::String* createOrder; // 0x110
		::System::String* detectCheckPS; // 0x118
		::System::String* detectPay; // 0x120
		::System::String* deviceVerifyDesc; // 0x128
		::System::String* emailCaptchaByActionTicket; // 0x130
		::System::String* facebookLoginPC; // 0x138
		::System::String* googleLoginPC; // 0x140
		::System::String* firstPayment; // 0x148
		::System::String* forgetPasswordPC; // 0x150
		::System::String* forgetPasswordForeign; // 0x158
		::System::String* getAgreementInfos; // 0x160
		::System::String* getRedPoint; // 0x168
		::System::String* grant; // 0x170
		::System::String* guestLogin; // 0x178
		::System::String* guestLoginV2; // 0x180
		::System::String* help; // 0x188
		::System::String* jpPayAgeLimitPC; // 0x190
		::System::String* kibanaDataReport; // 0x198
		::System::String* koreaRealName; // 0x1A0
		::System::String* languageVersionPC; // 0x1A8
		::System::String* languageDownloadPC; // 0x1B0
		::System::String* ipRegionLangVersion; // 0x1B8
		::System::String* ipRegionLangDownload; // 0x1C0
		::System::String* listPriceTier; // 0x1C8
		::System::String* loadConfig; // 0x1D0
		::System::String* loginByThirdparty; // 0x1D8
		::System::String* loginCaptcha; // 0x1E0
		::System::String* loginMobile; // 0x1E8
		::System::String* loginUrl; // 0x1F0
		::System::String* mailCaptcha; // 0x1F8
		::System::String* mailRegisterPC; // 0x200
		::System::String* mailRegisterForeign; // 0x208
		::System::String* mdkPrivacy; // 0x210
		::System::String* mdkUserAgreement; // 0x218
		::System::String* minorsPolicy; // 0x220
		::System::String* mmtURL; // 0x228
		::System::String* mobileCaptcha; // 0x230
		::System::String* mobileRegisterPC; // 0x238
		::System::String* modifyRealname; // 0x240
		::System::String* operateAgreement; // 0x248
		::System::String* oldLogUpload; // 0x250
		::System::String* otherDeviceAck; // 0x258
		::System::String* otherDevicesList; // 0x260
		::System::String* otherVerifyURLPC; // 0x268
		::System::String* payCheckOrder; // 0x270
		::System::String* paypalPayPagePC; // 0x278
		::System::String* preGrantByGame; // 0x280
		::System::String* preGrantByTicket; // 0x288
		::System::String* privacyPolicy; // 0x290
		::System::String* pushDelAlias; // 0x298
		::System::String* pushSetAlias; // 0x2A0
		::System::String* reactivateAccount; // 0x2A8
		::System::String* realNameHelp; // 0x2B0
		::System::String* realNameURL; // 0x2B8
		::System::String* realPersonHelp; // 0x2C0
		::System::String* realPersonPrivacy; // 0x2C8
		::System::String* realPersonRule; // 0x2D0
		::System::String* realPersonServiceAgreement; // 0x2D8
		::System::String* realPersonUserAgreement; // 0x2E0
		::System::String* registByEmail; // 0x2E8
		::System::String* scanQRCode; // 0x2F0
		::System::String* serviceWorkerAndroid; // 0x2F8
		::System::String* swConfigPC; // 0x300
		::System::String* swDefaultUrl; // 0x308
		::System::String* ticketByToken; // 0x310
		::System::String* tokenVerify; // 0x318
		::System::String* trackingUrl; // 0x320
		::System::String* twitterLogin; // 0x328
		::System::String* twitterLoginPC; // 0x330
		::System::String* unBindThirdParty; // 0x338
		::System::String* userAgreement; // 0x340
		::System::String* userCenter; // 0x348
		::System::String* verifyEmailCaptcha; // 0x350
		::System::String* verifyEmailURL; // 0x358
		::System::String* verifyMobileCaptcha; // 0x360
		::System::String* verifyRealPerson; // 0x368
		::System::String* verifyReceipt; // 0x370
		::System::String* listPriceTierSteam; // 0x378
		::System::String* deductSteam; // 0x380
		::System::String* adyenDirectPayUrl; // 0x388
		::System::String* thirdPrivacy; // 0x390
		::System::String* googleOAuthResult; // 0x398
		::System::String* googleOAuthInfo; // 0x3A0
		::System::String* googleOAuthCallback; // 0x3A8
		::System::String* googleQueryGoods; // 0x3B0
		::System::String* googleOAuthHelp; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCONFIGURLMODEL__CTOR_OFFSET))(this);
		}
	};
}
