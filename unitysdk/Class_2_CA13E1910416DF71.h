#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartDialogueEntityInteract; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA13E1910416DF71_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D0810)
#define CLASS_2_CA13E1910416DF71_METHOD_2_48AD37812B52E76B_OFFSET UNITYSDK_OFFSET(0x91D0450)
#define CLASS_2_CA13E1910416DF71_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x91D1000)
#define CLASS_2_CA13E1910416DF71_METHOD_2_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x91D0F10)
#define CLASS_2_CA13E1910416DF71_METHOD_2_76DF4EC836F74A2C_OFFSET UNITYSDK_OFFSET(0x91D0780)
#define CLASS_2_CA13E1910416DF71_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x91D0870)
#define CLASS_2_CA13E1910416DF71_METHOD_2_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x91D0A40)
#define CLASS_2_CA13E1910416DF71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x91D0AB0)
#define CLASS_2_CA13E1910416DF71_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x91D0FB0)
#define CLASS_2_CA13E1910416DF71_TICK_OFFSET UNITYSDK_OFFSET(0x91D0910)
#define CLASS_2_CA13E1910416DF71__CTOR_OFFSET UNITYSDK_OFFSET(0x91D0440)

inline static constexpr unsigned int Class_2_CA13E1910416DF71_TypeDefinitionIndex = 54138;

class Class_2_CA13E1910416DF71 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameWorld* Field_2_2; // 0x18
	::RPG::GameCore::LevelGraph* Field_2_4; // 0x20
	::RPG::GameCore::StartDialogueEntityInteract* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::RPG::GameCore::GameEntity* Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_48AD37812B52E76B(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_48AD37812B52E76B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_76DF4EC836F74A2C(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_76DF4EC836F74A2C_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_927FAEA36AA4115E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_927FAEA36AA4115E_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_CA13E1910416DF71_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
