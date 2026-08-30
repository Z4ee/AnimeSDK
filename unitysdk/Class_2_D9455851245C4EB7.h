#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_2B6684D3E43696AE.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateBattleCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D9455851245C4EB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD9E040)
#define CLASS_2_D9455851245C4EB7_METHOD_2_AA0EFBB13088BA5E_OFFSET UNITYSDK_OFFSET(0xBD9EE80)
#define CLASS_2_D9455851245C4EB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD9E090)
#define CLASS_2_D9455851245C4EB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD9F170)
#define CLASS_2_D9455851245C4EB7_TICK_OFFSET UNITYSDK_OFFSET(0xBD9F1C0)
#define CLASS_2_D9455851245C4EB7__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9DFA0)

inline static constexpr unsigned int Class_2_D9455851245C4EB7_TypeDefinitionIndex = 55184;

class Class_2_D9455851245C4EB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CreateBattleCharacter* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
	::Class_3_07C3C4D2990C49EE* KLCAHFOFIHC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_ONTASKBEGIN_OFFSET))(this);
	}

	::Struct_2_2B6684D3E43696AE Method_2_AA0EFBB13088BA5E()
	{
		return ((::Struct_2_2B6684D3E43696AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_METHOD_2_AA0EFBB13088BA5E_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_TICK_OFFSET))(this, a1);
	}
};
