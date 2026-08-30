#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EscapeFromBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35A1CA06BA34D67C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8CF510)
#define CLASS_3_35A1CA06BA34D67C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CF4E0)

inline static constexpr unsigned int Class_3_35A1CA06BA34D67C_TypeDefinitionIndex = 55234;

class Class_3_35A1CA06BA34D67C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EscapeFromBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EscapeFromBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + CLASS_3_35A1CA06BA34D67C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35A1CA06BA34D67C_ONTASKBEGIN_OFFSET))(this);
	}
};
