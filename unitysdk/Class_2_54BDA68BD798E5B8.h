#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharmUseSkill; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_54BDA68BD798E5B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1631A990)
#define CLASS_2_54BDA68BD798E5B8_METHOD_2_BC5726BD20E41CEB_OFFSET UNITYSDK_OFFSET(0x1631AF50)
#define CLASS_2_54BDA68BD798E5B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1631A9D0)
#define CLASS_2_54BDA68BD798E5B8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1631AEA0)
#define CLASS_2_54BDA68BD798E5B8_TICK_OFFSET UNITYSDK_OFFSET(0x1631AEF0)
#define CLASS_2_54BDA68BD798E5B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1631A980)

inline static constexpr unsigned int Class_2_54BDA68BD798E5B8_TypeDefinitionIndex = 55155;

class Class_2_54BDA68BD798E5B8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CharmUseSkill* OFKGLJOAMLD; // 0x20

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
