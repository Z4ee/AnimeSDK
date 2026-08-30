#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9B635DC3F867E2EE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC799810)
#define CLASS_1_9B635DC3F867E2EE__CTOR_OFFSET UNITYSDK_OFFSET(0xC799860)

inline static constexpr unsigned int Class_1_9B635DC3F867E2EE_TypeDefinitionIndex = 53951;

class Class_1_9B635DC3F867E2EE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::RPG::GameCore::RtStackSkillTargetRedirectPhase IFDLJDHLPJM; // 0x18
	::RPG::GameCore::TeamTypeMask OBMPNGFPNMG; // 0x1C
	::RPG::GameCore::EntityTypeMask PCBEIEAONIF; // 0x20
	::System::Int32 NALMBOOCCIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B635DC3F867E2EE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B635DC3F867E2EE_CLEAR_OFFSET))(this);
	}
};
