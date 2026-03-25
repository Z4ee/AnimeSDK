#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharmUseSkill; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_54BDA68BD798E5B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE45A270)
#define CLASS_2_54BDA68BD798E5B8_METHOD_2_7A97244C58DD9DAA_OFFSET UNITYSDK_OFFSET(0xE45A830)
#define CLASS_2_54BDA68BD798E5B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE45A2B0)
#define CLASS_2_54BDA68BD798E5B8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE45A780)
#define CLASS_2_54BDA68BD798E5B8_TICK_OFFSET UNITYSDK_OFFSET(0xE45A7D0)
#define CLASS_2_54BDA68BD798E5B8__CTOR_OFFSET UNITYSDK_OFFSET(0xE45A260)

inline static constexpr unsigned int Class_2_54BDA68BD798E5B8_TypeDefinitionIndex = 43978;

class Class_2_54BDA68BD798E5B8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharmUseSkill* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharmUseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharmUseSkill*))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A97244C58DD9DAA(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_METHOD_2_7A97244C58DD9DAA_OFFSET))(this, a1, a2);
	}
};
