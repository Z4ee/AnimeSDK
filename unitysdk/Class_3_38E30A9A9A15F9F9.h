#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetAdventureCharacterCollider; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_38E30A9A9A15F9F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC3ED10)
#define CLASS_3_38E30A9A9A15F9F9__CTOR_OFFSET UNITYSDK_OFFSET(0xAC3ECE0)

inline static constexpr unsigned int Class_3_38E30A9A9A15F9F9_TypeDefinitionIndex = 52205;

class Class_3_38E30A9A9A15F9F9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetAdventureCharacterCollider*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + CLASS_3_38E30A9A9A15F9F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38E30A9A9A15F9F9_ONTASKBEGIN_OFFSET))(this);
	}
};
