#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2D539C29BA420F0.h"

class Class_0_16E4307DCC419505_341;
class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_9656056B501DC5E8_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0xA535BE0)
#define CLASS_2_9656056B501DC5E8_METHOD_2_BC1A57474C8A653B_OFFSET UNITYSDK_OFFSET(0xA535C60)
#define CLASS_2_9656056B501DC5E8_METHOD_2_DF3E6C4E87C9A21C_OFFSET UNITYSDK_OFFSET(0xA535C00)
#define CLASS_2_9656056B501DC5E8_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0xA535BF0)
#define CLASS_2_9656056B501DC5E8__CTOR_OFFSET UNITYSDK_OFFSET(0xA535C50)
#define CLASS_2_9656056B501DC5E8___ONEXECUTE_B__6_0_OFFSET UNITYSDK_OFFSET(0xA536030)

inline static constexpr unsigned int Class_2_9656056B501DC5E8_TypeDefinitionIndex = 71598;

class Class_2_9656056B501DC5E8 : public ::Class_1_E2D539C29BA420F0
{
public:
	::Class_0_16E4307DCC419505_341* _Command_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_341* get_Command()
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_GET_COMMAND_OFFSET))(this);
	}

	::System::Void set_Command(::Class_0_16E4307DCC419505_341* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_SET_COMMAND_OFFSET))(this, value);
	}

	static ::Class_2_9656056B501DC5E8* Method_2_DF3E6C4E87C9A21C(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::Class_2_9656056B501DC5E8*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_METHOD_2_DF3E6C4E87C9A21C_OFFSET))(a1);
	}

	::System::Void Method_2_BC1A57474C8A653B(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_METHOD_2_BC1A57474C8A653B_OFFSET))(this, a1, a2);
	}

	::System::Void __OnExecute_b__6_0(::System::Boolean succ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8___ONEXECUTE_B__6_0_OFFSET))(this, succ);
	}
};
