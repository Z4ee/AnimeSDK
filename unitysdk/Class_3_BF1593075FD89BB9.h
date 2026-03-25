#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyBattleCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BF1593075FD89BB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CADEC0)
#define CLASS_3_BF1593075FD89BB9__CTOR_OFFSET UNITYSDK_OFFSET(0x8CADE90)

inline static constexpr unsigned int Class_3_BF1593075FD89BB9_TypeDefinitionIndex = 44030;

class Class_3_BF1593075FD89BB9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroyBattleCharacter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyBattleCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyBattleCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_BF1593075FD89BB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF1593075FD89BB9_ONTASKBEGIN_OFFSET))(this);
	}
};
