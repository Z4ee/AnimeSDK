#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_533A850CC3B4DA9A;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamAction; }

#define CLASS_2_D9360773B5A9CAB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AE1FB0)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x12AE23B0)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_7CE0DB94FAA9E316_OFFSET UNITYSDK_OFFSET(0x12AE2470)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x12AE2100)
#define CLASS_2_D9360773B5A9CAB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AE2050)
#define CLASS_2_D9360773B5A9CAB3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AE2420)
#define CLASS_2_D9360773B5A9CAB3_TICK_OFFSET UNITYSDK_OFFSET(0x12AE1FF0)
#define CLASS_2_D9360773B5A9CAB3__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE1FA0)

inline static constexpr unsigned int Class_2_D9360773B5A9CAB3_TypeDefinitionIndex = 51358;

class Class_2_D9360773B5A9CAB3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TeamAction* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_23C3681AC9E5D438_OFFSET))(this);
	}

	::Class_2_533A850CC3B4DA9A* Method_2_7CE0DB94FAA9E316()
	{
		return ((::Class_2_533A850CC3B4DA9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_7CE0DB94FAA9E316_OFFSET))(this);
	}
};
