#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_533A850CC3B4DA9A;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamAction; }

#define CLASS_2_D9360773B5A9CAB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8747E80)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x8748250)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_7AC0A0653A3768FF_OFFSET UNITYSDK_OFFSET(0x8748310)
#define CLASS_2_D9360773B5A9CAB3_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x8747FD0)
#define CLASS_2_D9360773B5A9CAB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8747F20)
#define CLASS_2_D9360773B5A9CAB3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87482C0)
#define CLASS_2_D9360773B5A9CAB3_TICK_OFFSET UNITYSDK_OFFSET(0x8747EC0)
#define CLASS_2_D9360773B5A9CAB3__CTOR_OFFSET UNITYSDK_OFFSET(0x8747E70)

inline static constexpr unsigned int Class_2_D9360773B5A9CAB3_TypeDefinitionIndex = 44619;

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

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::Class_2_533A850CC3B4DA9A* Method_2_7AC0A0653A3768FF()
	{
		return ((::Class_2_533A850CC3B4DA9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9360773B5A9CAB3_METHOD_2_7AC0A0653A3768FF_OFFSET))(this);
	}
};
