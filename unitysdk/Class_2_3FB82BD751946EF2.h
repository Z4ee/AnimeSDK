#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFightFestLineupInMission; }

#define CLASS_2_3FB82BD751946EF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167148B0)
#define CLASS_2_3FB82BD751946EF2_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x16714E50)
#define CLASS_2_3FB82BD751946EF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16714A10)
#define CLASS_2_3FB82BD751946EF2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16714C70)
#define CLASS_2_3FB82BD751946EF2_TICK_OFFSET UNITYSDK_OFFSET(0x16714D50)
#define CLASS_2_3FB82BD751946EF2__CTOR_OFFSET UNITYSDK_OFFSET(0x167147B0)

inline static constexpr unsigned int Class_2_3FB82BD751946EF2_TypeDefinitionIndex = 56157;

class Class_2_3FB82BD751946EF2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerFightFestLineupInMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB82BD751946EF2_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
