#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class InitShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_2D9A1A7180E45AD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A7820)
#define CLASS_2_2D9A1A7180E45AD3_METHOD_2_0155A6B299E59B4F_OFFSET UNITYSDK_OFFSET(0xD1A8310)
#define CLASS_2_2D9A1A7180E45AD3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1A7860)
#define CLASS_2_2D9A1A7180E45AD3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1A8720)
#define CLASS_2_2D9A1A7180E45AD3_TICK_OFFSET UNITYSDK_OFFSET(0xD1A8770)
#define CLASS_2_2D9A1A7180E45AD3__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A7810)

inline static constexpr unsigned int Class_2_2D9A1A7180E45AD3_TypeDefinitionIndex = 44120;

class Class_2_2D9A1A7180E45AD3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::InitShield* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_0155A6B299E59B4F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_2D9A1A7180E45AD3_METHOD_2_0155A6B299E59B4F_OFFSET))(this, a1, a2);
	}
};
