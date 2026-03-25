#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChangeLockTarget; }

#define CLASS_2_A2902A69550A6641_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10646110)
#define CLASS_2_A2902A69550A6641_METHOD_2_04AD0E70E8BAC391_OFFSET UNITYSDK_OFFSET(0x10646B40)
#define CLASS_2_A2902A69550A6641_METHOD_2_54D9F076DD3781B1_1_OFFSET UNITYSDK_OFFSET(0x10646550)
#define CLASS_2_A2902A69550A6641_METHOD_2_54D9F076DD3781B1_OFFSET UNITYSDK_OFFSET(0x106461D0)
#define CLASS_2_A2902A69550A6641_METHOD_2_C67126F93DF285FB_OFFSET UNITYSDK_OFFSET(0x10646980)
#define CLASS_2_A2902A69550A6641_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10646150)
#define CLASS_2_A2902A69550A6641_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x106468D0)
#define CLASS_2_A2902A69550A6641_TICK_OFFSET UNITYSDK_OFFSET(0x10646920)
#define CLASS_2_A2902A69550A6641__CTOR_OFFSET UNITYSDK_OFFSET(0x10646100)

inline static constexpr unsigned int Class_2_A2902A69550A6641_TypeDefinitionIndex = 47487;

class Class_2_A2902A69550A6641 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TutorialChangeLockTarget* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChangeLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChangeLockTarget*))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_54D9F076DD3781B1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_METHOD_2_54D9F076DD3781B1_OFFSET))(this);
	}

	::System::Boolean Method_2_54D9F076DD3781B1_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_METHOD_2_54D9F076DD3781B1_1_OFFSET))(this);
	}

	::System::Boolean Method_2_C67126F93DF285FB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_METHOD_2_C67126F93DF285FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_04AD0E70E8BAC391(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A2902A69550A6641_METHOD_2_04AD0E70E8BAC391_OFFSET))(this, a1);
	}
};
