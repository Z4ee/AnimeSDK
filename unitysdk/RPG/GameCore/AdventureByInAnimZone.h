#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_0D282A738EB08C84_OFFSET UNITYSDK_OFFSET(0x1CBAAC00)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_4793040AF776D0F9_OFFSET UNITYSDK_OFFSET(0x1CBAAC40)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_6119F52CA8E03A99_OFFSET UNITYSDK_OFFSET(0x1CBAAE10)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_D77C1ECB56B3939F_OFFSET UNITYSDK_OFFSET(0x1CBAAE40)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAAC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInAnimZone_TypeDefinitionIndex = 19773;

	class AdventureByInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType TargetAnimZone; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0D282A738EB08C84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_0D282A738EB08C84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4793040AF776D0F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_4793040AF776D0F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6119F52CA8E03A99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_6119F52CA8E03A99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D77C1ECB56B3939F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_METHOD_4_D77C1ECB56B3939F_OFFSET))(a1, a2);
		}
	};
}
