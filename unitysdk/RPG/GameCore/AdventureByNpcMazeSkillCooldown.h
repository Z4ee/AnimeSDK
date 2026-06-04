#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_00060AD90B27E629_OFFSET UNITYSDK_OFFSET(0x19448550)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_091BA4FC03C1CF0D_OFFSET UNITYSDK_OFFSET(0x194485D0)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_BFB352B4CA188CDC_OFFSET UNITYSDK_OFFSET(0x19448340)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_E05AFA8BA73DAA96_OFFSET UNITYSDK_OFFSET(0x19448410)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x194483C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNpcMazeSkillCooldown_TypeDefinitionIndex = 18883;

	class AdventureByNpcMazeSkillCooldown : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BFB352B4CA188CDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_BFB352B4CA188CDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E05AFA8BA73DAA96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_E05AFA8BA73DAA96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00060AD90B27E629(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_00060AD90B27E629_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_091BA4FC03C1CF0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_091BA4FC03C1CF0D_OFFSET))(a1, a2);
		}
	};
}
