#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialLockPlayerAction; }

#define CLASS_3_2867EB4BD1F61B9E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177C3550)
#define CLASS_3_2867EB4BD1F61B9E__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3520)

inline static constexpr unsigned int Class_3_2867EB4BD1F61B9E_TypeDefinitionIndex = 58973;

class Class_3_2867EB4BD1F61B9E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialLockPlayerAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialLockPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialLockPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_3_2867EB4BD1F61B9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2867EB4BD1F61B9E_ONTASKBEGIN_OFFSET))(this);
	}
};
