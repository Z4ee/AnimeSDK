#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_370B64CFA1979F38_2;
namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x971BE60)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GETSHOWDATA_OFFSET UNITYSDK_OFFSET(0x971C000)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x971C050)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x971C070)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x971C060)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x971C080)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x971BE50)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0x971BF70)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRogueBattleRecordDisplayInfo_TypeDefinitionIndex = 52162;

	class FriendRogueBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionLevel; // 0x10
		::System::UInt32 _MaxAreaID_k__BackingField; // 0x14
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendRogueBattleRecordDisplayInfo* Create(::Class_1_370B64CFA1979F38_2* serverInfo)
		{
			return ((::RPG::Client::FriendRogueBattleRecordDisplayInfo*(*)(::Class_1_370B64CFA1979F38_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(serverInfo);
		}

		::RPG::Client::RogueTournDivisionData* GetShowData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GETSHOWDATA_OFFSET))(this);
		}

		::System::Void _Init(::Class_1_370B64CFA1979F38_2* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_370B64CFA1979F38_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, serverInfo);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_MAXAREAID_OFFSET))(this);
		}

		::System::Void set_MaxAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_MAXAREAID_OFFSET))(this, value);
		}
	};
}
