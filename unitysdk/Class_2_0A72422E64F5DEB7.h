#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ApplySwordTrainingOptionStrategy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0A72422E64F5DEB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB3F450)
#define CLASS_2_0A72422E64F5DEB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB3F3B0)
#define CLASS_2_0A72422E64F5DEB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB3F400)
#define CLASS_2_0A72422E64F5DEB7_TICK_OFFSET UNITYSDK_OFFSET(0xCB3F590)
#define CLASS_2_0A72422E64F5DEB7__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3F3A0)

inline static constexpr unsigned int Class_2_0A72422E64F5DEB7_TypeDefinitionIndex = 46718;

class Class_2_0A72422E64F5DEB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ApplySwordTrainingOptionStrategy* Field_2_0; // 0x20

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
