#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F41834AAE9ED4443__CTOR_OFFSET UNITYSDK_OFFSET(0xB1881E0)

inline static constexpr unsigned int Class_1_F41834AAE9ED4443_TypeDefinitionIndex = 71878;

class Class_1_F41834AAE9ED4443 : public ::System::Object
{
public:
	::System::String* PODFJDMHFMK; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::String* BDACPPLKLGL; // 0x20
	::RPG::GameCore::SkillButtonAdditionalStatusType PGOHOFMMIAJ; // 0x28
	::System::Boolean CAGCHKJHMPD; // 0x2C
	::System::Single CCAOGMEFNLB; // 0x30
	::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41834AAE9ED4443__CTOR_OFFSET))(this);
	}
};
