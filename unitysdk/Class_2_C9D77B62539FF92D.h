#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SkillPerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C9D77B62539FF92D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA497A0)
#define CLASS_2_C9D77B62539FF92D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA497E0)
#define CLASS_2_C9D77B62539FF92D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA49960)
#define CLASS_2_C9D77B62539FF92D_TICK_OFFSET UNITYSDK_OFFSET(0xAA499B0)
#define CLASS_2_C9D77B62539FF92D__CTOR_OFFSET UNITYSDK_OFFSET(0xAA49790)

inline static constexpr unsigned int Class_2_C9D77B62539FF92D_TypeDefinitionIndex = 51953;

class Class_2_C9D77B62539FF92D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SkillPerformFinish* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkillPerformFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkillPerformFinish*))((::PBYTE)hIl2Cpp + CLASS_2_C9D77B62539FF92D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D77B62539FF92D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D77B62539FF92D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D77B62539FF92D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9D77B62539FF92D_TICK_OFFSET))(this, a1);
	}
};
