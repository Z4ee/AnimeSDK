#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class EndDialogueEntityInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D33CE14080D64EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC56A40)
#define CLASS_2_D33CE14080D64EA6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBC57180)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0xBC56B10)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xBC56FC0)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xBC56ED0)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_C01E2898C24565BC_OFFSET UNITYSDK_OFFSET(0xBC57080)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0xBC572B0)
#define CLASS_2_D33CE14080D64EA6_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xBC56CA0)
#define CLASS_2_D33CE14080D64EA6_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBC57190)
#define CLASS_2_D33CE14080D64EA6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC56DC0)
#define CLASS_2_D33CE14080D64EA6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC57260)
#define CLASS_2_D33CE14080D64EA6_TICK_OFFSET UNITYSDK_OFFSET(0xBC56BD0)
#define CLASS_2_D33CE14080D64EA6__CTOR_OFFSET UNITYSDK_OFFSET(0xBC56A30)

inline static constexpr unsigned int Class_2_D33CE14080D64EA6_TypeDefinitionIndex = 58266;

class Class_2_D33CE14080D64EA6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
	::RPG::GameCore::EndDialogueEntityInteract* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x30
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x38

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

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_F7300E87EC49A206_OFFSET))(this);
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

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_D33CE14080D64EA6_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}
};
