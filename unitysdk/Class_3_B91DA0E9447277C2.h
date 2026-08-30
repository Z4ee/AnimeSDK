#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMonsterPhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B91DA0E9447277C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B4507A0)
#define CLASS_3_B91DA0E9447277C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B450770)

inline static constexpr unsigned int Class_3_B91DA0E9447277C2_TypeDefinitionIndex = 55742;

class Class_3_B91DA0E9447277C2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterPhase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + CLASS_3_B91DA0E9447277C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B91DA0E9447277C2_ONTASKBEGIN_OFFSET))(this);
	}
};
