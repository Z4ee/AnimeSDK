#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCharacterScaleFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D706BC11154E8126_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC432540)
#define CLASS_2_D706BC11154E8126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC432580)
#define CLASS_2_D706BC11154E8126_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC432910)
#define CLASS_2_D706BC11154E8126_TICK_OFFSET UNITYSDK_OFFSET(0xC432960)
#define CLASS_2_D706BC11154E8126__CTOR_OFFSET UNITYSDK_OFFSET(0xC432530)

inline static constexpr unsigned int Class_2_D706BC11154E8126_TypeDefinitionIndex = 55569;

class Class_2_D706BC11154E8126 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetCharacterScaleFollow* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterScaleFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterScaleFollow*))((::PBYTE)hIl2Cpp + CLASS_2_D706BC11154E8126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D706BC11154E8126_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D706BC11154E8126_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D706BC11154E8126_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D706BC11154E8126_TICK_OFFSET))(this, a1);
	}
};
