#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FateBattleShowArcherUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_51451305586622BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114BB4E0)
#define CLASS_3_51451305586622BA__CTOR_OFFSET UNITYSDK_OFFSET(0x114BB4B0)

inline static constexpr unsigned int Class_3_51451305586622BA_TypeDefinitionIndex = 44059;

class Class_3_51451305586622BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FateBattleShowArcherUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleShowArcherUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + CLASS_3_51451305586622BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51451305586622BA_ONTASKBEGIN_OFFSET))(this);
	}
};
