#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideCharacterFilteredEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A4C1E1EECA1AB6B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB61B090)
#define CLASS_3_A4C1E1EECA1AB6B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB61B060)

inline static constexpr unsigned int Class_3_A4C1E1EECA1AB6B3_TypeDefinitionIndex = 55297;

class Class_3_A4C1E1EECA1AB6B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideCharacterFilteredEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + CLASS_3_A4C1E1EECA1AB6B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C1E1EECA1AB6B3_ONTASKBEGIN_OFFSET))(this);
	}
};
