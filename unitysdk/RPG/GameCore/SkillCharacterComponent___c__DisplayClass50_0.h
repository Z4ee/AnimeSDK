#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CommonSkill; }
namespace RPG::GameCore { class ICharacterSkillRowData; }

#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT___C__DISPLAYCLASS50_0__ADDSKILLFROMCOMMONSKILLPOOL_B__1_OFFSET UNITYSDK_OFFSET(0xCEE6330)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE6320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent___c__DisplayClass50_0_TypeDefinitionIndex = 53877;

	class SkillCharacterComponent___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CommonSkill* commonSkill; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddSkillFromCommonSkillPool_b__1(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT___C__DISPLAYCLASS50_0__ADDSKILLFROMCOMMONSKILLPOOL_B__1_OFFSET))(this, a1);
		}
	};
}
