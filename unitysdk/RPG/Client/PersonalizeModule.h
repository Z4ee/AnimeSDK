#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ChatBubbleData; }
namespace RPG::Client { class PersonalizeCardDataManager; }
namespace RPG::Client { class PhoneCaseDataManager; }
namespace RPG::Client { class PhoneThemeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_PERSONALIZEMODULE_FETCHPERSONALIZEDATA_OFFSET UNITYSDK_OFFSET(0xDA602A0)
#define RPG_CLIENT_PERSONALIZEMODULE_FETCHUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xDA60200)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_CARDDATAMGR_OFFSET UNITYSDK_OFFSET(0xDA62700)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_CHATBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0xDA626A0)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_PHONECASEDATAMGR_OFFSET UNITYSDK_OFFSET(0xDA626E0)
#define RPG_CLIENT_PERSONALIZEMODULE_GET_PHONETHEMEDATA_OFFSET UNITYSDK_OFFSET(0xDA626C0)
#define RPG_CLIENT_PERSONALIZEMODULE_ISPHONETHEMEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDA60A90)
#define RPG_CLIENT_PERSONALIZEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xDA601B0)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLES_OFFSET UNITYSDK_OFFSET(0xDA606A0)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLE_OFFSET UNITYSDK_OFFSET(0xDA60820)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEMES_OFFSET UNITYSDK_OFFSET(0xDA60880)
#define RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEME_OFFSET UNITYSDK_OFFSET(0xDA60980)
#define RPG_CLIENT_PERSONALIZEMODULE_SETCHATBUBBLE_OFFSET UNITYSDK_OFFSET(0xDA60360)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPERSONALCARD_OFFSET UNITYSDK_OFFSET(0xDA605D0)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPHONECASE_OFFSET UNITYSDK_OFFSET(0xDA60500)
#define RPG_CLIENT_PERSONALIZEMODULE_SETPHONETHEME_OFFSET UNITYSDK_OFFSET(0xDA60430)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_CARDDATAMGR_OFFSET UNITYSDK_OFFSET(0xDA62710)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_CHATBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0xDA626B0)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_PHONECASEDATAMGR_OFFSET UNITYSDK_OFFSET(0xDA626F0)
#define RPG_CLIENT_PERSONALIZEMODULE_SET_PHONETHEMEDATA_OFFSET UNITYSDK_OFFSET(0xDA626D0)
#define RPG_CLIENT_PERSONALIZEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA60B20)
#define RPG_CLIENT_PERSONALIZEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDA62720)
#define RPG_CLIENT_PERSONALIZEMODULE__ONGETPHONEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xDA60FA0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTCHATBUBBLESCRSP_OFFSET UNITYSDK_OFFSET(0xDA62610)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONECASESCRSP_OFFSET UNITYSDK_OFFSET(0xDA622D0)
#define RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONETHEMESCRSP_OFFSET UNITYSDK_OFFSET(0xDA62240)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKCHATBUBBLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xDA61F60)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONECASESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xDA62000)
#define RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONETHEMESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xDA62360)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeModule_TypeDefinitionIndex = 66480;

	class PersonalizeModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _PHONE_THEME_UNLOCK_ID = 0x125C; // 0x0
		::RPG::Client::ChatBubbleData* _ChatBubbleData_k__BackingField; // 0x10
		::RPG::Client::PhoneThemeData* _PhoneThemeData_k__BackingField; // 0x18
		::RPG::Client::PersonalizeCardDataManager* _CardDataMgr_k__BackingField; // 0x20
		::RPG::Client::PhoneCaseDataManager* _PhoneCaseDataMgr_k__BackingField; // 0x28

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

		::System::Void SetChatBubble(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETCHATBUBBLE_OFFSET))(this, a1);
		}

		::System::Void SetPhoneTheme(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPHONETHEME_OFFSET))(this, a1);
		}

		::System::Void SetPhoneCase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPHONECASE_OFFSET))(this, a1);
		}

		::System::Void SetPersonalCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SETPERSONALCARD_OFFSET))(this, a1);
		}

		::System::Void RecordSeenBubbles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLES_OFFSET))(this);
		}

		::System::Void RecordSeenBubble(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENBUBBLE_OFFSET))(this, a1);
		}

		::System::Void RecordSeenThemes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEMES_OFFSET))(this);
		}

		::System::Void RecordSeenTheme(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_RECORDSEENTHEME_OFFSET))(this, a1);
		}

		::System::Boolean IsPhoneThemeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_ISPHONETHEMEUNLOCKED_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetPhoneDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONGETPHONEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockChatBubbleScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKCHATBUBBLESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockPhoneCaseScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONECASESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectPhoneThemeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONETHEMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectPhoneCaseScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTPHONECASESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockPhoneThemeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONUNLOCKPHONETHEMESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectChatBubbleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE__ONSELECTCHATBUBBLESCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChatBubbleData* get_ChatBubbleData()
		{
			return ((::RPG::Client::ChatBubbleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_CHATBUBBLEDATA_OFFSET))(this);
		}

		::System::Void set_ChatBubbleData(::RPG::Client::ChatBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatBubbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_CHATBUBBLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PhoneThemeData* get_PhoneThemeData()
		{
			return ((::RPG::Client::PhoneThemeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_PHONETHEMEDATA_OFFSET))(this);
		}

		::System::Void set_PhoneThemeData(::RPG::Client::PhoneThemeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhoneThemeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_PHONETHEMEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PhoneCaseDataManager* get_PhoneCaseDataMgr()
		{
			return ((::RPG::Client::PhoneCaseDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_PHONECASEDATAMGR_OFFSET))(this);
		}

		::System::Void set_PhoneCaseDataMgr(::RPG::Client::PhoneCaseDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhoneCaseDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_PHONECASEDATAMGR_OFFSET))(this, a1);
		}

		::RPG::Client::PersonalizeCardDataManager* get_CardDataMgr()
		{
			return ((::RPG::Client::PersonalizeCardDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_GET_CARDDATAMGR_OFFSET))(this);
		}

		::System::Void set_CardDataMgr(::RPG::Client::PersonalizeCardDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PersonalizeCardDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEMODULE_SET_CARDDATAMGR_OFFSET))(this, a1);
		}
	};
}
