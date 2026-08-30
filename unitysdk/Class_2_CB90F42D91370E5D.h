#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_636;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialBlockAndWait; }

#define CLASS_2_CB90F42D91370E5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB828EE0)
#define CLASS_2_CB90F42D91370E5D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB828F20)
#define CLASS_2_CB90F42D91370E5D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB829010)
#define CLASS_2_CB90F42D91370E5D_TICK_OFFSET UNITYSDK_OFFSET(0xB829060)
#define CLASS_2_CB90F42D91370E5D__CTOR_OFFSET UNITYSDK_OFFSET(0xB828ED0)

inline static constexpr unsigned int Class_2_CB90F42D91370E5D_TypeDefinitionIndex = 58962;

class Class_2_CB90F42D91370E5D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TutorialBlockAndWait* OFKGLJOAMLD; // 0x18
	::Class_0_16E4307DCC419505_636* GEGNDMIMMNL; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Boolean PPNAOINLDDP; // 0x30
	::System::Single MBEHHALAIHO; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialBlockAndWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialBlockAndWait*))((::PBYTE)hIl2Cpp + CLASS_2_CB90F42D91370E5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB90F42D91370E5D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB90F42D91370E5D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB90F42D91370E5D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB90F42D91370E5D_TICK_OFFSET))(this, a1);
	}
};
