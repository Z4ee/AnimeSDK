#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_465;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialBlockAndWait; }

#define CLASS_2_CB90F42D91370E5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1F7910)
#define CLASS_2_CB90F42D91370E5D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1F7950)
#define CLASS_2_CB90F42D91370E5D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1F7A40)
#define CLASS_2_CB90F42D91370E5D_TICK_OFFSET UNITYSDK_OFFSET(0xA1F7A90)
#define CLASS_2_CB90F42D91370E5D__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F7900)

inline static constexpr unsigned int Class_2_CB90F42D91370E5D_TypeDefinitionIndex = 47486;

class Class_2_CB90F42D91370E5D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TutorialBlockAndWait* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_465* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Single Field_2_2; // 0x34

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
