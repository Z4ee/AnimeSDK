#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_11.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_65;
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::GameCore { class TrainPartyMtCategoryConfigRow; }
namespace RPG::GameCore { class TrainPartyMtCategoryScoreRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_BASERATIO_OFFSET UNITYSDK_OFFSET(0xB355200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_BASESCORE_OFFSET UNITYSDK_OFFSET(0xB355190)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_CATEGORYROW_OFFSET UNITYSDK_OFFSET(0xB355130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xB3550D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB355220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB3550F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_RATIO_OFFSET UNITYSDK_OFFSET(0xB3551A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_SCOREROW_OFFSET UNITYSDK_OFFSET(0xB355110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xB3550E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB355100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_SCOREROW_OFFSET UNITYSDK_OFFSET(0xB355120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB355070)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingCategoryInfo_TypeDefinitionIndex = 68597;

	class TrainPartyMeetingCategoryInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyMtCategoryScoreRow* _ScoreRow_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::Enum_3_A35B38E5F9115A76_11 _CategoryType_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_1CBA230307F9C289_65* info, ::RPG::Client::TrainParty::TrainPartyMeetingData* owner)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_65*, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO__CTOR_OFFSET))(this, info, owner);
		}

		::Enum_3_A35B38E5F9115A76_11 get_CategoryType()
		{
			return ((::Enum_3_A35B38E5F9115A76_11(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_CATEGORYTYPE_OFFSET))(this);
		}

		::System::Void set_CategoryType(::Enum_3_A35B38E5F9115A76_11 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_CATEGORYTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyMtCategoryScoreRow* get_ScoreRow()
		{
			return ((::RPG::GameCore::TrainPartyMtCategoryScoreRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_SCOREROW_OFFSET))(this);
		}

		::System::Void set_ScoreRow(::RPG::GameCore::TrainPartyMtCategoryScoreRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_SET_SCOREROW_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyMtCategoryConfigRow* get_CategoryRow()
		{
			return ((::RPG::GameCore::TrainPartyMtCategoryConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_CATEGORYROW_OFFSET))(this);
		}

		::System::UInt32 get_BaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_BASESCORE_OFFSET))(this);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_RATIO_OFFSET))(this);
		}

		::System::UInt32 get_BaseRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_BASERATIO_OFFSET))(this);
		}

		::RPG::Client::TextID get_DisplayName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGCATEGORYINFO_GET_DISPLAYNAME_OFFSET))(this);
		}
	};
}
