#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterChangePhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4BED51C5AFCE1FC2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1354D060)
#define CLASS_2_4BED51C5AFCE1FC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1354D0A0)
#define CLASS_2_4BED51C5AFCE1FC2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1354D440)
#define CLASS_2_4BED51C5AFCE1FC2_TICK_OFFSET UNITYSDK_OFFSET(0x1354D490)
#define CLASS_2_4BED51C5AFCE1FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1354D050)

inline static constexpr unsigned int Class_2_4BED51C5AFCE1FC2_TypeDefinitionIndex = 51339;

class Class_2_4BED51C5AFCE1FC2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CharacterChangePhase* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterChangePhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterChangePhase*))((::PBYTE)hIl2Cpp + CLASS_2_4BED51C5AFCE1FC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BED51C5AFCE1FC2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BED51C5AFCE1FC2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BED51C5AFCE1FC2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4BED51C5AFCE1FC2_TICK_OFFSET))(this, a1);
	}
};
