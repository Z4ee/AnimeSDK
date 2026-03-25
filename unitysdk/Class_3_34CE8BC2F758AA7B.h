#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_34CE8BC2F758AA7B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8C77D40)
#define CLASS_3_34CE8BC2F758AA7B_METHOD_3_0FA0973E87FBD363_1_OFFSET UNITYSDK_OFFSET(0x8C78300)
#define CLASS_3_34CE8BC2F758AA7B_METHOD_3_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x8C781C0)
#define CLASS_3_34CE8BC2F758AA7B_METHOD_3_8A5E53CCE3E67781_OFFSET UNITYSDK_OFFSET(0x8C77FC0)
#define CLASS_3_34CE8BC2F758AA7B__CTOR_OFFSET UNITYSDK_OFFSET(0x8C77BF0)

inline static constexpr unsigned int Class_3_34CE8BC2F758AA7B_TypeDefinitionIndex = 46747;

class Class_3_34CE8BC2F758AA7B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckMonsterHurt*>
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + CLASS_3_34CE8BC2F758AA7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34CE8BC2F758AA7B_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_8A5E53CCE3E67781(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_34CE8BC2F758AA7B_METHOD_3_8A5E53CCE3E67781_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FA0973E87FBD363(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_34CE8BC2F758AA7B_METHOD_3_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FA0973E87FBD363_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_34CE8BC2F758AA7B_METHOD_3_0FA0973E87FBD363_1_OFFSET))(this, a1);
	}
};
