#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharmUseSkill; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_54BDA68BD798E5B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15855460)
#define CLASS_2_54BDA68BD798E5B8_METHOD_2_BC5726BD20E41CEB_OFFSET UNITYSDK_OFFSET(0x15855A30)
#define CLASS_2_54BDA68BD798E5B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158554A0)
#define CLASS_2_54BDA68BD798E5B8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15855980)
#define CLASS_2_54BDA68BD798E5B8_TICK_OFFSET UNITYSDK_OFFSET(0x158559D0)
#define CLASS_2_54BDA68BD798E5B8__CTOR_OFFSET UNITYSDK_OFFSET(0x15855450)

inline static constexpr unsigned int Class_2_54BDA68BD798E5B8_TypeDefinitionIndex = 52458;

class Class_2_54BDA68BD798E5B8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CharmUseSkill* Field_2_1; // 0x20

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

	::System::Void Method_2_BC5726BD20E41CEB(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_54BDA68BD798E5B8_METHOD_2_BC5726BD20E41CEB_OFFSET))(this, a1, a2);
	}
};
