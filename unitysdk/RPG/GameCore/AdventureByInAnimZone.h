#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_0366A9ED22B1FEC5_OFFSET UNITYSDK_OFFSET(0x194421B0)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_4793040AF776D0F9_OFFSET UNITYSDK_OFFSET(0x19442280)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_5DB5507D9E145455_OFFSET UNITYSDK_OFFSET(0x19442450)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_BECCE516347BCE22_OFFSET UNITYSDK_OFFSET(0x194424D0)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19442230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInAnimZone_TypeDefinitionIndex = 18882;

	class AdventureByInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType TargetAnimZone; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0366A9ED22B1FEC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_0366A9ED22B1FEC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4793040AF776D0F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_4793040AF776D0F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DB5507D9E145455(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_5DB5507D9E145455_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BECCE516347BCE22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_BECCE516347BCE22_OFFSET))(a1, a2);
		}
	};
}
