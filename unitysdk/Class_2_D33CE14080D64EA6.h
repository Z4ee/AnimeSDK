#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class EndDialogueEntityInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D33CE14080D64EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8D4880)
#define CLASS_2_D33CE14080D64EA6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA8D4ED0)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0xA8D5000)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0xA8D48E0)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xA8D4D10)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xA8D4C20)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xA8D4A70)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_C01E2898C24565BC_OFFSET UNITYSDK_OFFSET(0xA8D4DD0)
#define CLASS_2_D33CE14080D64EA6_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA8D4EE0)
#define CLASS_2_D33CE14080D64EA6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8D4B20)
#define CLASS_2_D33CE14080D64EA6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8D4FB0)
#define CLASS_2_D33CE14080D64EA6_TICK_OFFSET UNITYSDK_OFFSET(0xA8D49A0)
#define CLASS_2_D33CE14080D64EA6__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D4870)

inline static constexpr unsigned int Class_2_D33CE14080D64EA6_TypeDefinitionIndex = 54312;

class Class_2_D33CE14080D64EA6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameWorld* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::EndDialogueEntityInteract* Field_2_2; // 0x28
	::RPG::GameCore::LevelGraph* Field_2_3; // 0x30
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndDialogueEntityInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndDialogueEntityInteract*))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_ONSKIP_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraph* Method_2_C01E2898C24565BC()
	{
		return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_C01E2898C24565BC_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_1_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
