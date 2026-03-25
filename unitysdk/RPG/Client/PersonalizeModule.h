#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ChatBubbleData; }
namespace RPG::Client { class PersonalizeCardDataManager; }
namespace RPG::Client { class PhoneCaseDataManager; }
namespace RPG::Client { class PhoneThemeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_PERSONALIZEMODULE_FETCHPERSONALIZEDATA_OFFSET UNITYSDK_OFFSET(0x9F33380)
#define RPG_CLIENT_PERSONALIZEMODULE_FETCHUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x9F332E0)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_CARDDATAMGR_OFFSET UNITYSDK_OFFSET(0x9F34DB0)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_CHATBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x9F34D50)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_PHONECASEDATAMGR_OFFSET UNITYSDK_OFFSET(0x9F34D90)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_PHONETHEMEDATA_OFFSET UNITYSDK_OFFSET(0x9F34D70)
#define RPG_CLIENT_PERSONALIZEMODULE_ISPHONETHEMEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F33A70)
#define RPG_CLIENT_PERSONALIZEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F33290)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLES_OFFSET UNITYSDK_OFFSET(0x9F33680)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLE_OFFSET UNITYSDK_OFFSET(0x9F33830)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEMES_OFFSET UNITYSDK_OFFSET(0x9F33890)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEME_OFFSET UNITYSDK_OFFSET(0x9F339D0)
#define RPG_CLIENT_PERSONALIZEMODULE_SETCHATBUBBLE_OFFSET UNITYSDK_OFFSET(0x9F33440)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPERSONALCARD_OFFSET UNITYSDK_OFFSET(0x9F335F0)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPHONECASE_OFFSET UNITYSDK_OFFSET(0x9F33560)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPHONETHEME_OFFSET UNITYSDK_OFFSET(0x9F334D0)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_CARDDATAMGR_OFFSET UNITYSDK_OFFSET(0x9F34DC0)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_CHATBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0x9F34D60)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_PHONECASEDATAMGR_OFFSET UNITYSDK_OFFSET(0x9F34DA0)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_PHONETHEMEDATA_OFFSET UNITYSDK_OFFSET(0x9F34D80)
#define RPG_CLIENT_PERSONALIZEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F33B00)
#define RPG_CLIENT_PERSONALIZEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F34DD0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONGETPHONEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9F33CC0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTCHATBUBBLESCRSP_OFFSET UNITYSDK_OFFSET(0x9F34CC0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONECASESCRSP_OFFSET UNITYSDK_OFFSET(0x9F34A40)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONETHEMESCRSP_OFFSET UNITYSDK_OFFSET(0x9F349B0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKCHATBUBBLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F34790)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONECASESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F34830)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONETHEMESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F34AD0)
#define RPG_CLIENT_PERSONALIZEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F35140)
#define RPG_CLIENT_PERSONALIZEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F351A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeModule_TypeDefinitionIndex = 54042;

	class PersonalizeModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _PHONE_THEME_UNLOCK_ID = 0x125C; // 0x0
		::RPG::Client::PhoneThemeData* _PhoneThemeData_k__BackingField; // 0x10
		::RPG::Client::PhoneCaseDataManager* _PhoneCaseDataMgr_k__BackingField; // 0x18
		::RPG::Client::ChatBubbleData* _ChatBubbleData_k__BackingField; // 0x20
		::RPG::Client::PersonalizeCardDataManager* _CardDataMgr_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FetchUnlockData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_FETCHUNLOCKDATA_OFFSET))(this);
		}

		::System::Void FetchPersonalizeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_FETCHPERSONALIZEDATA_OFFSET))(this);
		}

		::System::Void SetChatBubble(::System::UInt32 bubbleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETCHATBUBBLE_OFFSET))(this, bubbleID);
		}

		::System::Void SetPhoneTheme(::System::UInt32 themeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPHONETHEME_OFFSET))(this, themeID);
		}

		::System::Void SetPhoneCase(::System::UInt32 caseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPHONECASE_OFFSET))(this, caseID);
		}

		::System::Void SetPersonalCard(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPERSONALCARD_OFFSET))(this, cardID);
		}

		::System::Void RecordSeenBubbles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLES_OFFSET))(this);
		}

		::System::Void RecordSeenBubble(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLE_OFFSET))(this, id);
		}

		::System::Void RecordSeenThemes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEMES_OFFSET))(this);
		}

		::System::Void RecordSeenTheme(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEME_OFFSET))(this, id);
		}

		::System::Boolean IsPhoneThemeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_ISPHONETHEMEUNLOCKED_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetPhoneDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONGETPHONEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUnlockChatBubbleScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKCHATBUBBLESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnUnlockPhoneCaseScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONECASESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSelectPhoneThemeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONETHEMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSelectPhoneCaseScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONECASESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUnlockPhoneThemeScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONETHEMESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSelectChatBubbleScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTCHATBUBBLESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::ChatBubbleData* get_ChatBubbleData()
		{
			return ((::RPG::Client::ChatBubbleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_CHATBUBBLEDATA_OFFSET))(this);
		}

		::System::Void set_ChatBubbleData(::RPG::Client::ChatBubbleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatBubbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_CHATBUBBLEDATA_OFFSET))(this, value);
		}

		::RPG::Client::PhoneThemeData* get_PhoneThemeData()
		{
			return ((::RPG::Client::PhoneThemeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_PHONETHEMEDATA_OFFSET))(this);
		}

		::System::Void set_PhoneThemeData(::RPG::Client::PhoneThemeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhoneThemeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_PHONETHEMEDATA_OFFSET))(this, value);
		}

		::RPG::Client::PhoneCaseDataManager* get_PhoneCaseDataMgr()
		{
			return ((::RPG::Client::PhoneCaseDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_PHONECASEDATAMGR_OFFSET))(this);
		}

		::System::Void set_PhoneCaseDataMgr(::RPG::Client::PhoneCaseDataManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhoneCaseDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_PHONECASEDATAMGR_OFFSET))(this, value);
		}

		::RPG::Client::PersonalizeCardDataManager* get_CardDataMgr()
		{
			return ((::RPG::Client::PersonalizeCardDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_CARDDATAMGR_OFFSET))(this);
		}

		::System::Void set_CardDataMgr(::RPG::Client::PersonalizeCardDataManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PersonalizeCardDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_CARDDATAMGR_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
