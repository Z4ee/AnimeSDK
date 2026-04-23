#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/RPG/Client/ChimeraDuelSettleBattleResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7647E0B2FA921121;
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0xA022350)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xA022310)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA022290)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA022330)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA0222B0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022270)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xA0222D0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xA0222F0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_TALKCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xA022370)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xA022250)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022230)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0xA022360)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xA022320)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA0222A0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA022340)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA0222C0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022280)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xA0222E0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xA022300)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_TALKCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xA022380)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xA022260)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022240)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA022390)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA01E850)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleBattleData_TypeDefinitionIndex = 58334;

	class ChimeraDuelSettleBattleData : public ::System::Object
	{
	public:
		::System::String* _EmojiPath_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelSettleBattleResult _Result_k__BackingField; // 0x18
		::System::Int32 _WinCount_k__BackingField; // 0x1C
		::System::Int32 _WinCountGoal_k__BackingField; // 0x20
		::System::Int32 _LifeCount_k__BackingField; // 0x24
		::System::Int32 _MaxLifeCount_k__BackingField; // 0x28
		::System::UInt32 _MasterID_k__BackingField; // 0x2C
		::System::Int32 _RoundIndex_k__BackingField; // 0x30
		::RPG::Client::TextID _TalkContentTextID_k__BackingField; // 0x38
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x48
		::System::Int32 _MaxWinCount_k__BackingField; // 0x4C

		::System::Void _ctor(::Class_1_7647E0B2FA921121* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7647E0B2FA921121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_OFFSET))(this, rsp);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_WinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_WinCountGoal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNTGOAL_OFFSET))(this);
		}

		::System::Void set_WinCountGoal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNTGOAL_OFFSET))(this, value);
		}

		::System::Int32 get_MaxWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxWinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXWINCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_LifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_LIFECOUNT_OFFSET))(this);
		}

		::System::Void set_LifeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_LIFECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_MaxLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxLifeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXLIFECOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelSettleBattleResult get_Result()
		{
			return ((::RPG::Client::ChimeraDuelSettleBattleResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::RPG::Client::ChimeraDuelSettleBattleResult value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelSettleBattleResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_RESULT_OFFSET))(this, value);
		}

		::System::Int32 get_RoundIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_ROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_RoundIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_ROUNDINDEX_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_GAMEMODETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MASTERID_OFFSET))(this, value);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::Void set_EmojiPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_EMOJIPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TalkContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_TALKCONTENTTEXTID_OFFSET))(this);
		}

		::System::Void set_TalkContentTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_TALKCONTENTTEXTID_OFFSET))(this, value);
		}
	};
}
