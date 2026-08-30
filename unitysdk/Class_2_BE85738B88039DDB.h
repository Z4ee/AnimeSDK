#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_B4F136441499BAFA_1;
namespace RPG::Client { class ChessRogueBoardCellBossSelectData; }
namespace RPG::Client { class ChessRogueBoardCellDecayData; }

#define CLASS_2_BE85738B88039DDB_GET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x177F8B60)
#define CLASS_2_BE85738B88039DDB_GET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x177F8B80)
#define CLASS_2_BE85738B88039DDB_METHOD_2_7D932F1022BCD845_OFFSET UNITYSDK_OFFSET(0x177F8A90)
#define CLASS_2_BE85738B88039DDB_SET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x177F8B70)
#define CLASS_2_BE85738B88039DDB_SET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x177F8B90)
#define CLASS_2_BE85738B88039DDB__CTOR_OFFSET UNITYSDK_OFFSET(0x177F8A80)

inline static constexpr unsigned int Class_2_BE85738B88039DDB_TypeDefinitionIndex = 66920;

class Class_2_BE85738B88039DDB : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::RPG::Client::ChessRogueBoardCellBossSelectData* _BossSelectData_k__BackingField; // 0x10
	::RPG::Client::ChessRogueBoardCellDecayData* _DecayData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_B4F136441499BAFA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_1*))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D932F1022BCD845(::Class_1_B4F136441499BAFA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_1*))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB_METHOD_2_7D932F1022BCD845_OFFSET))(this, a1);
	}

	::RPG::Client::ChessRogueBoardCellBossSelectData* get_BossSelectData()
	{
		return ((::RPG::Client::ChessRogueBoardCellBossSelectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB_GET_BOSSSELECTDATA_OFFSET))(this);
	}

	::System::Void set_BossSelectData(::RPG::Client::ChessRogueBoardCellBossSelectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellBossSelectData*))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB_SET_BOSSSELECTDATA_OFFSET))(this, a1);
	}

	::RPG::Client::ChessRogueBoardCellDecayData* get_DecayData()
	{
		return ((::RPG::Client::ChessRogueBoardCellDecayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB_GET_DECAYDATA_OFFSET))(this);
	}

	::System::Void set_DecayData(::RPG::Client::ChessRogueBoardCellDecayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDecayData*))((::PBYTE)hIl2Cpp + CLASS_2_BE85738B88039DDB_SET_DECAYDATA_OFFSET))(this, a1);
	}
};
