#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyAdventureCharacterCollider; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_04B44C4D2441EC4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB3FAB0)
#define CLASS_3_04B44C4D2441EC4B__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3FA80)

inline static constexpr unsigned int Class_3_04B44C4D2441EC4B_TypeDefinitionIndex = 44786;

class Class_3_04B44C4D2441EC4B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyAdventureCharacterCollider*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + CLASS_3_04B44C4D2441EC4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04B44C4D2441EC4B_ONTASKBEGIN_OFFSET))(this);
	}
};
