#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_71327659F4088CD0;
namespace RPG::GameCore { class AdvChaseBailu; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7B3BB19EFAF2968B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114589A0)
#define CLASS_2_7B3BB19EFAF2968B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11458A50)
#define CLASS_2_7B3BB19EFAF2968B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11458A10)
#define CLASS_2_7B3BB19EFAF2968B_TICK_OFFSET UNITYSDK_OFFSET(0x11458E90)
#define CLASS_2_7B3BB19EFAF2968B__CTOR_OFFSET UNITYSDK_OFFSET(0x11458990)

inline static constexpr unsigned int Class_2_7B3BB19EFAF2968B_TypeDefinitionIndex = 42357;

class Class_2_7B3BB19EFAF2968B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvChaseBailu* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::Class_2_71327659F4088CD0* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvChaseBailu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvChaseBailu*))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_TICK_OFFSET))(this, a1);
	}
};
