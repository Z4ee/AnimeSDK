#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/RPG/Client/ChimeraDuelSettleBattleResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9934272986626D43;
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0xCBF2740)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xCBF2700)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2680)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xCBF2720)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xCBF26A0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2660)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xCBF26C0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xCBF26E0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_TALKCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xCBF2760)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xCBF2640)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2620)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0xCBF2750)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xCBF2710)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2690)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xCBF2730)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xCBF26B0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2670)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xCBF26D0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xCBF26F0)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_TALKCONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xCBF2770)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xCBF2650)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xCBF2630)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCBF2780)
#define RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCBEEB70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleBattleData_TypeDefinitionIndex = 63388;

	class ChimeraDuelSettleBattleData : public ::System::Object
	{
	public:
		::System::String* _EmojiPath_k__BackingField; // 0x10
		::System::Int32 _WinCountGoal_k__BackingField; // 0x18
		::System::Int32 _MaxWinCount_k__BackingField; // 0x1C
		::System::UInt32 _MasterID_k__BackingField; // 0x20
		::System::Int32 _LifeCount_k__BackingField; // 0x24
		::System::Int32 _WinCount_k__BackingField; // 0x28
		::System::Int32 _RoundIndex_k__BackingField; // 0x2C
		::RPG::Client::ChimeraDuelSettleBattleResult _Result_k__BackingField; // 0x30
		::RPG::Client::TextID _TalkContentTextID_k__BackingField; // 0x38
		::System::Int32 _MaxLifeCount_k__BackingField; // 0x48
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x4C

		::System::Void _ctor(::Class_1_9934272986626D43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9934272986626D43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_WinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_WinCountGoal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_WINCOUNTGOAL_OFFSET))(this);
		}

		::System::Void set_WinCountGoal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_WINCOUNTGOAL_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxWinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXWINCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_LifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_LIFECOUNT_OFFSET))(this);
		}

		::System::Void set_LifeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_LIFECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxLifeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MAXLIFECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelSettleBattleResult get_Result()
		{
			return ((::RPG::Client::ChimeraDuelSettleBattleResult(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::RPG::Client::ChimeraDuelSettleBattleResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelSettleBattleResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_RESULT_OFFSET))(this, a1);
		}

		::System::Int32 get_RoundIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_ROUNDINDEX_OFFSET))(this);
		}

		::System::Void set_RoundIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_ROUNDINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_GAMEMODETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_MASTERID_OFFSET))(this, a1);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::System::Void set_EmojiPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_EMOJIPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TalkContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_GET_TALKCONTENTTEXTID_OFFSET))(this);
		}

		::System::Void set_TalkContentTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEBATTLEDATA_SET_TALKCONTENTTEXTID_OFFSET))(this, a1);
		}
	};
}
