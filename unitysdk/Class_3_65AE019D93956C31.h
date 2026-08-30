#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PillarPuzzleInteract; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65AE019D93956C31_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F80170)
#define CLASS_3_65AE019D93956C31__CTOR_OFFSET UNITYSDK_OFFSET(0x18F80140)

inline static constexpr unsigned int Class_3_65AE019D93956C31_TypeDefinitionIndex = 58403;

class Class_3_65AE019D93956C31 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PillarPuzzleInteract*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PillarPuzzleInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PillarPuzzleInteract*))((::PBYTE)hIl2Cpp + CLASS_3_65AE019D93956C31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65AE019D93956C31_ONTASKBEGIN_OFFSET))(this);
	}
};
