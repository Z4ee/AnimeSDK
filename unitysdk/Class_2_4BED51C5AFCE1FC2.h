#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterChangePhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4BED51C5AFCE1FC2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6B91F0)
#define CLASS_2_4BED51C5AFCE1FC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A6B9230)
#define CLASS_2_4BED51C5AFCE1FC2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A6B95D0)
#define CLASS_2_4BED51C5AFCE1FC2_TICK_OFFSET UNITYSDK_OFFSET(0x1A6B9620)
#define CLASS_2_4BED51C5AFCE1FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B91E0)

inline static constexpr unsigned int Class_2_4BED51C5AFCE1FC2_TypeDefinitionIndex = 55142;

class Class_2_4BED51C5AFCE1FC2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterChangePhase* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
