#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkHistoryType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKHISTORYDATA_CREATEASIDE_OFFSET UNITYSDK_OFFSET(0xC9C70E0)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xC9C7240)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEOPTION_OFFSET UNITYSDK_OFFSET(0xC9C6FF0)
#define RPG_CLIENT_TALKHISTORYDATA_CREATEREAD_OFFSET UNITYSDK_OFFSET(0xC9C7460)
#define RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_1_OFFSET UNITYSDK_OFFSET(0xC9C6F70)
#define RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_OFFSET UNITYSDK_OFFSET(0xC9C6D70)
#define RPG_CLIENT_TALKHISTORYDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC9C7650)
#define RPG_CLIENT_TALKHISTORYDATA_GET_EXTRAID_OFFSET UNITYSDK_OFFSET(0xC9C7670)
#define RPG_CLIENT_TALKHISTORYDATA_GET_HASEXTRA_OFFSET UNITYSDK_OFFSET(0xC9C7730)
#define RPG_CLIENT_TALKHISTORYDATA_GET_HASVOICE_OFFSET UNITYSDK_OFFSET(0xC9C7720)
#define RPG_CLIENT_TALKHISTORYDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xC9C76B0)
#define RPG_CLIENT_TALKHISTORYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC9C7630)
#define RPG_CLIENT_TALKHISTORYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC9C7610)
#define RPG_CLIENT_TALKHISTORYDATA_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0xC9C7690)
#define RPG_CLIENT_TALKHISTORYDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC9C7660)
#define RPG_CLIENT_TALKHISTORYDATA_SET_EXTRAID_OFFSET UNITYSDK_OFFSET(0xC9C7680)
#define RPG_CLIENT_TALKHISTORYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC9C7640)
#define RPG_CLIENT_TALKHISTORYDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC9C7620)
#define RPG_CLIENT_TALKHISTORYDATA_SET_VOICEID_OFFSET UNITYSDK_OFFSET(0xC9C76A0)
#define RPG_CLIENT_TALKHISTORYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9C7740)
#define RPG_CLIENT_TALKHISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C6F30)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkHistoryData_TypeDefinitionIndex = 63651;

	class TalkHistoryData : public ::System::Object
	{
	public:
		static ::RPG::Client::TalkHistoryData** StaticGet_Empty()
		{
			return (::RPG::Client::TalkHistoryData**)Il2CppClass::FromTypeDefinitionIndex(TalkHistoryData_TypeDefinitionIndex)->GetStaticField(0x3D1A0);
		}
		static ::RPG::Client::TextID* StaticGet__PlayerName()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TalkHistoryData_TypeDefinitionIndex)->GetStaticField(0xB6F0);
		}
		::RPG::Client::TextID _Content_k__BackingField; // 0x10
		::System::UInt32 _ExtraID_k__BackingField; // 0x20
		::System::UInt32 _VoiceID_k__BackingField; // 0x24
		::RPG::Client::TalkHistoryType _Type_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TalkHistoryData* CreateSimple(::System::UInt32 a1)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_OFFSET))(a1);
		}

		static ::RPG::Client::TalkHistoryData* CreateSimple_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATESIMPLE_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TalkHistoryData* CreateOption(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEOPTION_OFFSET))(a1);
		}

		static ::RPG::Client::TalkHistoryData* CreateAside(::System::UInt32 a1)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEASIDE_OFFSET))(a1);
		}

		static ::RPG::Client::TalkHistoryData* CreateItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEITEM_OFFSET))(a1);
		}

		static ::RPG::Client::TalkHistoryData* CreateRead(::System::UInt32 a1)
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_CREATEREAD_OFFSET))(a1);
		}

		::RPG::Client::TalkHistoryType get_Type()
		{
			return ((::RPG::Client::TalkHistoryType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::TalkHistoryType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkHistoryType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_EXTRAID_OFFSET))(this);
		}

		::System::Void set_ExtraID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_EXTRAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_VoiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_VOICEID_OFFSET))(this);
		}

		::System::Void set_VoiceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_SET_VOICEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_HasVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_HASVOICE_OFFSET))(this);
		}

		::System::Boolean get_HasExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKHISTORYDATA_GET_HASEXTRA_OFFSET))(this);
		}
	};
}
