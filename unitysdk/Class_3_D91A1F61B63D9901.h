#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LevelChallengeTurnAcc; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D91A1F61B63D9901_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19350790)
#define CLASS_3_D91A1F61B63D9901__CTOR_OFFSET UNITYSDK_OFFSET(0x19350760)

inline static constexpr unsigned int Class_3_D91A1F61B63D9901_TypeDefinitionIndex = 52641;

class Class_3_D91A1F61B63D9901 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LevelChallengeTurnAcc*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelChallengeTurnAcc* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + CLASS_3_D91A1F61B63D9901__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D91A1F61B63D9901_ONTASKBEGIN_OFFSET))(this);
	}
};
