#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_0F3818CEA40AF395_OFFSET UNITYSDK_OFFSET(0x1CBB2520)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_98CE7EBEDED78A80_OFFSET UNITYSDK_OFFSET(0x1CBB26A0)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_9D60EB4E4E47C3A1_OFFSET UNITYSDK_OFFSET(0x1CBB26D0)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_E05AFA8BA73DAA96_OFFSET UNITYSDK_OFFSET(0x1CBB2560)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB2550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNpcMazeSkillCooldown_TypeDefinitionIndex = 19774;

	class AdventureByNpcMazeSkillCooldown : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F3818CEA40AF395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_0F3818CEA40AF395_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E05AFA8BA73DAA96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_E05AFA8BA73DAA96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98CE7EBEDED78A80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_98CE7EBEDED78A80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D60EB4E4E47C3A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_METHOD_4_9D60EB4E4E47C3A1_OFFSET))(a1, a2);
		}
	};
}
