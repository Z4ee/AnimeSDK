#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityColliderCameraConfig; }

#define CLASS_2_573BC4FA547671E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B08F30)
#define CLASS_2_573BC4FA547671E4_METHOD_2_7892395233F7417A_OFFSET UNITYSDK_OFFSET(0x10B097A0)
#define CLASS_2_573BC4FA547671E4_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x10B08FE0)
#define CLASS_2_573BC4FA547671E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B09070)
#define CLASS_2_573BC4FA547671E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B09850)
#define CLASS_2_573BC4FA547671E4_TICK_OFFSET UNITYSDK_OFFSET(0x10B09900)
#define CLASS_2_573BC4FA547671E4__CTOR_OFFSET UNITYSDK_OFFSET(0x10B08F20)

inline static constexpr unsigned int Class_2_573BC4FA547671E4_TypeDefinitionIndex = 51387;

class Class_2_573BC4FA547671E4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerEntityColliderCameraConfig* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::TargetAlias* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::GameCore::CharacterConfig* Method_2_7892395233F7417A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_573BC4FA547671E4_METHOD_2_7892395233F7417A_OFFSET))(this, a1);
	}
};
