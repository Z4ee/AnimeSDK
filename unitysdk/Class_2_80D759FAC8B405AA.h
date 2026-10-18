#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD211ABC1DF6278D.h"

class Class_0_16E4307DCC419505_499;
class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_80D759FAC8B405AA_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x162DD070)
#define CLASS_2_80D759FAC8B405AA_METHOD_2_BC4AD56CA35F2326_OFFSET UNITYSDK_OFFSET(0x162DD0F0)
#define CLASS_2_80D759FAC8B405AA_METHOD_2_DF3E6C4E87C9A21C_OFFSET UNITYSDK_OFFSET(0x162DD090)
#define CLASS_2_80D759FAC8B405AA_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0x162DD080)
#define CLASS_2_80D759FAC8B405AA__CTOR_OFFSET UNITYSDK_OFFSET(0x162DD0E0)
#define CLASS_2_80D759FAC8B405AA___ONEXECUTE_B__6_0_OFFSET UNITYSDK_OFFSET(0x162DD310)

inline static constexpr unsigned int Class_2_80D759FAC8B405AA_TypeDefinitionIndex = 78100;

class Class_2_80D759FAC8B405AA : public ::Class_1_FD211ABC1DF6278D
{
public:
	::Class_0_16E4307DCC419505_499* _Command_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_499* get_Command()
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA_GET_COMMAND_OFFSET))(this);
	}

	::System::Void set_Command(::Class_0_16E4307DCC419505_499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_499*))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA_SET_COMMAND_OFFSET))(this, a1);
	}

	static ::Class_2_80D759FAC8B405AA* Method_2_DF3E6C4E87C9A21C(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_80D759FAC8B405AA*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA_METHOD_2_DF3E6C4E87C9A21C_OFFSET))(a1);
	}

	::System::Void Method_2_BC4AD56CA35F2326(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA_METHOD_2_BC4AD56CA35F2326_OFFSET))(this, a1, a2);
	}

	::System::Void __OnExecute_b__6_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_80D759FAC8B405AA___ONEXECUTE_B__6_0_OFFSET))(this, a1);
	}
};
