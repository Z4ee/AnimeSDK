#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F41834AAE9ED4443__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B49B0)

inline static constexpr unsigned int Class_1_F41834AAE9ED4443_TypeDefinitionIndex = 71814;

class Class_1_F41834AAE9ED4443 : public ::System::Object
{
public:
	::System::String* PODFJDMHFMK; // 0x10
	::System::String* BDACPPLKLGL; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	::RPG::GameCore::SkillButtonAdditionalStatusType PGOHOFMMIAJ; // 0x28
	::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x2C
	::System::Single CCAOGMEFNLB; // 0x30
	::System::Boolean CAGCHKJHMPD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41834AAE9ED4443__CTOR_OFFSET))(this);
	}
};
