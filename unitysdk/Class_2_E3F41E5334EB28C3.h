#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ApplyOperation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E3F41E5334EB28C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A5F790)
#define CLASS_2_E3F41E5334EB28C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A5F830)
#define CLASS_2_E3F41E5334EB28C3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A5F8D0)
#define CLASS_2_E3F41E5334EB28C3_TICK_OFFSET UNITYSDK_OFFSET(0x16A5F7D0)
#define CLASS_2_E3F41E5334EB28C3__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F780)

inline static constexpr unsigned int Class_2_E3F41E5334EB28C3_TypeDefinitionIndex = 52356;

class Class_2_E3F41E5334EB28C3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ApplyOperation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplyOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + CLASS_2_E3F41E5334EB28C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3F41E5334EB28C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3F41E5334EB28C3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3F41E5334EB28C3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3F41E5334EB28C3_ONTASKRESET_OFFSET))(this);
	}
};
