#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CheckUIMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8E5D70424DCBD156_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99B2260)
#define CLASS_2_8E5D70424DCBD156_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99B22D0)
#define CLASS_2_8E5D70424DCBD156_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99B25E0)
#define CLASS_2_8E5D70424DCBD156_TICK_OFFSET UNITYSDK_OFFSET(0x99B2660)
#define CLASS_2_8E5D70424DCBD156__CTOR_OFFSET UNITYSDK_OFFSET(0x99B2250)

inline static constexpr unsigned int Class_2_8E5D70424DCBD156_TypeDefinitionIndex = 50681;

class Class_2_8E5D70424DCBD156 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CheckUIMode* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckUIMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckUIMode*))((::PBYTE)hIl2Cpp + CLASS_2_8E5D70424DCBD156__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E5D70424DCBD156_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E5D70424DCBD156_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E5D70424DCBD156_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E5D70424DCBD156_TICK_OFFSET))(this, a1);
	}
};
