#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ApplySwordTrainingOptionStrategy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0A72422E64F5DEB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB78B600)
#define CLASS_2_0A72422E64F5DEB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB78B560)
#define CLASS_2_0A72422E64F5DEB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB78B5B0)
#define CLASS_2_0A72422E64F5DEB7_TICK_OFFSET UNITYSDK_OFFSET(0xB78B750)
#define CLASS_2_0A72422E64F5DEB7__CTOR_OFFSET UNITYSDK_OFFSET(0xB78B550)

inline static constexpr unsigned int Class_2_0A72422E64F5DEB7_TypeDefinitionIndex = 58087;

class Class_2_0A72422E64F5DEB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ApplySwordTrainingOptionStrategy* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + CLASS_2_0A72422E64F5DEB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A72422E64F5DEB7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A72422E64F5DEB7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A72422E64F5DEB7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A72422E64F5DEB7_TICK_OFFSET))(this, a1);
	}
};
