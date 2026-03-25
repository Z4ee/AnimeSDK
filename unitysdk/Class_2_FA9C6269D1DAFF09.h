#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
namespace RPG::GameCore { class AdvEntityKeepFacingTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FA9C6269D1DAFF09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C3B5F0)
#define CLASS_2_FA9C6269D1DAFF09_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x10C3BA50)
#define CLASS_2_FA9C6269D1DAFF09_ONSKIP_OFFSET UNITYSDK_OFFSET(0x10C3BA60)
#define CLASS_2_FA9C6269D1DAFF09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C3B730)
#define CLASS_2_FA9C6269D1DAFF09_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C3B690)
#define CLASS_2_FA9C6269D1DAFF09_TICK_OFFSET UNITYSDK_OFFSET(0x10C3B9C0)
#define CLASS_2_FA9C6269D1DAFF09__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3B5E0)
#define CLASS_2_FA9C6269D1DAFF09__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x10C3BAB0)

inline static constexpr unsigned int Class_2_FA9C6269D1DAFF09_TypeDefinitionIndex = 42380;

class Class_2_FA9C6269D1DAFF09 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_2; // 0x18
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::RPG::GameCore::AdvEntityKeepFacingTo* Field_2_1; // 0x30

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
