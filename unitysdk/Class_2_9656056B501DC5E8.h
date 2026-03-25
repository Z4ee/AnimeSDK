#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2D539C29BA420F0.h"

class Class_0_16E4307DCC419505_333;
class Class_1_7D0B754E2D8CECAF;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define CLASS_2_9656056B501DC5E8_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x10C593D0)
#define CLASS_2_9656056B501DC5E8_METHOD_2_BC1A57474C8A653B_OFFSET UNITYSDK_OFFSET(0x10C59450)
#define CLASS_2_9656056B501DC5E8_METHOD_2_DF3E6C4E87C9A21C_OFFSET UNITYSDK_OFFSET(0x10C593F0)
#define CLASS_2_9656056B501DC5E8_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0x10C593E0)
#define CLASS_2_9656056B501DC5E8__CTOR_OFFSET UNITYSDK_OFFSET(0x10C59440)
#define CLASS_2_9656056B501DC5E8___ONEXECUTE_B__6_0_OFFSET UNITYSDK_OFFSET(0x10C59820)

inline static constexpr unsigned int Class_2_9656056B501DC5E8_TypeDefinitionIndex = 63558;

class Class_2_9656056B501DC5E8 : public ::Class_1_E2D539C29BA420F0
{
public:
	::Class_0_16E4307DCC419505_333* _Command_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_333* get_Command()
	{
		return ((::Class_0_16E4307DCC419505_333*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_GET_COMMAND_OFFSET))(this);
	}

	::System::Void set_Command(::Class_0_16E4307DCC419505_333* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_333*))((::PBYTE)hIl2Cpp + CLASS_2_9656056B501DC5E8_SET_COMMAND_OFFSET))(this, value);
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
