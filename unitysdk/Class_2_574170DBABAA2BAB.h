#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_142.h"

class Class_1_1660DAA49693852E;
namespace RPG::Client { class ChessRogueBoardCellBossSelectData; }
namespace RPG::Client { class ChessRogueBoardCellDecayData; }

#define CLASS_2_574170DBABAA2BAB_GET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x10918FC0)
#define CLASS_2_574170DBABAA2BAB_GET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x10918FE0)
#define CLASS_2_574170DBABAA2BAB_METHOD_2_7D932F1022BCD845_OFFSET UNITYSDK_OFFSET(0x10918EF0)
#define CLASS_2_574170DBABAA2BAB_SET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x10918FD0)
#define CLASS_2_574170DBABAA2BAB_SET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x10918FF0)
#define CLASS_2_574170DBABAA2BAB__CTOR_OFFSET UNITYSDK_OFFSET(0x10918EE0)

inline static constexpr unsigned int Class_2_574170DBABAA2BAB_TypeDefinitionIndex = 54441;

class Class_2_574170DBABAA2BAB : public ::Class_1_43BD383C98B4C0C5_142
{
public:
	::RPG::Client::ChessRogueBoardCellBossSelectData* _BossSelectData_k__BackingField; // 0x10
	::RPG::Client::ChessRogueBoardCellDecayData* _DecayData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_1660DAA49693852E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E*))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D932F1022BCD845(::Class_1_1660DAA49693852E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1660DAA49693852E*))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB_METHOD_2_7D932F1022BCD845_OFFSET))(this, a1);
	}

	::RPG::Client::ChessRogueBoardCellBossSelectData* get_BossSelectData()
	{
		return ((::RPG::Client::ChessRogueBoardCellBossSelectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB_GET_BOSSSELECTDATA_OFFSET))(this);
	}

	::System::Void set_BossSelectData(::RPG::Client::ChessRogueBoardCellBossSelectData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellBossSelectData*))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB_SET_BOSSSELECTDATA_OFFSET))(this, value);
	}

	::RPG::Client::ChessRogueBoardCellDecayData* get_DecayData()
	{
		return ((::RPG::Client::ChessRogueBoardCellDecayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB_GET_DECAYDATA_OFFSET))(this);
	}

	::System::Void set_DecayData(::RPG::Client::ChessRogueBoardCellDecayData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDecayData*))((::PBYTE)hIl2Cpp + CLASS_2_574170DBABAA2BAB_SET_DECAYDATA_OFFSET))(this, value);
	}
};
