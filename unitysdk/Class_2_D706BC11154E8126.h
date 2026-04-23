#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCharacterScaleFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D706BC11154E8126_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12375710)
#define CLASS_2_D706BC11154E8126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12375750)
#define CLASS_2_D706BC11154E8126_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12375AC0)
#define CLASS_2_D706BC11154E8126_TICK_OFFSET UNITYSDK_OFFSET(0x12375B10)
#define CLASS_2_D706BC11154E8126__CTOR_OFFSET UNITYSDK_OFFSET(0x12375700)

inline static constexpr unsigned int Class_2_D706BC11154E8126_TypeDefinitionIndex = 51052;

class Class_2_D706BC11154E8126 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetCharacterScaleFollow* Field_2_0; // 0x20

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
