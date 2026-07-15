#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class AdvEntityKeepFacingTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FA9C6269D1DAFF09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18239490)
#define CLASS_2_FA9C6269D1DAFF09_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x18239900)
#define CLASS_2_FA9C6269D1DAFF09_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18239910)
#define CLASS_2_FA9C6269D1DAFF09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182395D0)
#define CLASS_2_FA9C6269D1DAFF09_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18239530)
#define CLASS_2_FA9C6269D1DAFF09_TICK_OFFSET UNITYSDK_OFFSET(0x18239870)
#define CLASS_2_FA9C6269D1DAFF09__CTOR_OFFSET UNITYSDK_OFFSET(0x18239480)
#define CLASS_2_FA9C6269D1DAFF09__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x18239960)

inline static constexpr unsigned int Class_2_FA9C6269D1DAFF09_TypeDefinitionIndex = 49979;

class Class_2_FA9C6269D1DAFF09 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::AdvEntityKeepFacingTo* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityKeepFacingTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityKeepFacingTo*))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09_ONSKIP_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA9C6269D1DAFF09__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};
