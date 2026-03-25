#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearPropagateBeingAttackInTeam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E947A0E84E64D581_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B65710)
#define CLASS_3_E947A0E84E64D581__CTOR_OFFSET UNITYSDK_OFFSET(0x10B656E0)

inline static constexpr unsigned int Class_3_E947A0E84E64D581_TypeDefinitionIndex = 44243;

class Class_3_E947A0E84E64D581 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearPropagateBeingAttackInTeam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearPropagateBeingAttackInTeam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + CLASS_3_E947A0E84E64D581__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E947A0E84E64D581_ONTASKBEGIN_OFFSET))(this);
	}
};
