#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_D9413DC99216F54F;
class Class_3_92460753D1985873;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E930F3540F0C93A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D6E270)
#define CLASS_2_2E930F3540F0C93A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D6E310)
#define CLASS_2_2E930F3540F0C93A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D6E2C0)
#define CLASS_2_2E930F3540F0C93A_TICK_OFFSET UNITYSDK_OFFSET(0x17D6E430)
#define CLASS_2_2E930F3540F0C93A__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6E260)

inline static constexpr unsigned int Class_2_2E930F3540F0C93A_TypeDefinitionIndex = 54158;

class Class_2_2E930F3540F0C93A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_92460753D1985873* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_D9413DC99216F54F* EEGKNKIBLHB; // 0x28
	::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x30
	::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_92460753D1985873* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_92460753D1985873*))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_TICK_OFFSET))(this, a1);
	}
};
