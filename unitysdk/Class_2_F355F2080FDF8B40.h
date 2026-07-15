#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_9CAA42EF32347EE5_2;
namespace RPG::GameCore { class SetTargetCrossHairVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F355F2080FDF8B40_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F759D0)
#define CLASS_2_F355F2080FDF8B40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F75A10)
#define CLASS_2_F355F2080FDF8B40_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F75BB0)
#define CLASS_2_F355F2080FDF8B40_TICK_OFFSET UNITYSDK_OFFSET(0x18F75C00)
#define CLASS_2_F355F2080FDF8B40__CTOR_OFFSET UNITYSDK_OFFSET(0x18F75980)

inline static constexpr unsigned int Class_2_F355F2080FDF8B40_TypeDefinitionIndex = 53893;

class Class_2_F355F2080FDF8B40 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTargetCrossHairVisible* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_9CAA42EF32347EE5_2* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F355F2080FDF8B40_TICK_OFFSET))(this, a1);
	}
};
