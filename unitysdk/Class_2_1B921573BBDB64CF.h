#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FC1D173B0E9199B5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1B921573BBDB64CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164242B0)
#define CLASS_2_1B921573BBDB64CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164242F0)
#define CLASS_2_1B921573BBDB64CF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16424620)
#define CLASS_2_1B921573BBDB64CF_TICK_OFFSET UNITYSDK_OFFSET(0x16424670)
#define CLASS_2_1B921573BBDB64CF__CTOR_OFFSET UNITYSDK_OFFSET(0x164242A0)
#define CLASS_2_1B921573BBDB64CF__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x164246D0)

inline static constexpr unsigned int Class_2_1B921573BBDB64CF_TypeDefinitionIndex = 50547;

class Class_2_1B921573BBDB64CF : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x1; // 0x0
	// static const ::System::UInt32 Field_2_1 = 0x2; // 0x0
	::Class_3_FC1D173B0E9199B5* Field_2_2; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FC1D173B0E9199B5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FC1D173B0E9199B5*))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B921573BBDB64CF__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
