#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class InitShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_CB20A2B98AE06754_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFA7C00)
#define CLASS_2_CB20A2B98AE06754_METHOD_2_1A3BC95932660095_OFFSET UNITYSDK_OFFSET(0xCFA8540)
#define CLASS_2_CB20A2B98AE06754_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCFA7C40)
#define CLASS_2_CB20A2B98AE06754_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCFA8800)
#define CLASS_2_CB20A2B98AE06754_TICK_OFFSET UNITYSDK_OFFSET(0xCFA8850)
#define CLASS_2_CB20A2B98AE06754__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA7BF0)

inline static constexpr unsigned int Class_2_CB20A2B98AE06754_TypeDefinitionIndex = 55335;

class Class_2_CB20A2B98AE06754 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::InitShield* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_1A3BC95932660095(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_CB20A2B98AE06754_METHOD_2_1A3BC95932660095_OFFSET))(this, a1, a2);
	}
};
