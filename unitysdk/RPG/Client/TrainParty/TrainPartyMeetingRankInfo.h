#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainPartyMtRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BDD0D40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BDFB1C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1BDFB170)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_RANKNUM_OFFSET UNITYSDK_OFFSET(0x1BDFB230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1BDFB280)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_UPGRADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BDFB2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1BDD0C40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1BDFB290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_SET_UPGRADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BDFB2B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD0C30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingRankInfo_TypeDefinitionIndex = 74237;

	class TrainPartyMeetingRankInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyMtRankConfigRow* _Row; // 0x10
		::RPG::GameCore::TrainPartyMtRankConfigRow* _NextRankRow; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20
		::System::Single _UpgradeProgress_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_INIT_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_RankNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_RANKNUM_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_SET_SCORE_OFFSET))(this, a1);
		}

		::System::Single get_UpgradeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_UPGRADEPROGRESS_OFFSET))(this);
		}

		::System::Void set_UpgradeProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_SET_UPGRADEPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRANKINFO_GET_ID_OFFSET))(this);
		}
	};
}
