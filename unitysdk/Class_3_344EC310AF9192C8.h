#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_344EC310AF9192C8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8DCF50)
#define CLASS_3_344EC310AF9192C8_METHOD_3_57D21531A2DC98EE_1_OFFSET UNITYSDK_OFFSET(0xB8DD610)
#define CLASS_3_344EC310AF9192C8_METHOD_3_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0xB8DD4B0)
#define CLASS_3_344EC310AF9192C8_METHOD_3_60974352890ED658_OFFSET UNITYSDK_OFFSET(0xB8DD2B0)
#define CLASS_3_344EC310AF9192C8__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DCDD0)

inline static constexpr unsigned int Class_3_344EC310AF9192C8_TypeDefinitionIndex = 58123;

class Class_3_344EC310AF9192C8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckMonsterHurt*>
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* GMHDEIBBJBF; // 0x28
	::System::Boolean DBADIKCKIFL; // 0x30
	::System::Boolean ABBEBCAMPFF; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + CLASS_3_344EC310AF9192C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_344EC310AF9192C8_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_60974352890ED658(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_344EC310AF9192C8_METHOD_3_60974352890ED658_OFFSET))(this, a1);
	}

	::System::Void Method_3_57D21531A2DC98EE(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_344EC310AF9192C8_METHOD_3_57D21531A2DC98EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_57D21531A2DC98EE_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_344EC310AF9192C8_METHOD_3_57D21531A2DC98EE_1_OFFSET))(this, a1);
	}
};
