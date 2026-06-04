#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_12851161AA5C6B7F_OFFSET UNITYSDK_OFFSET(0x19558AF0)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_38FF613ED4063BDF_OFFSET UNITYSDK_OFFSET(0x19558DC0)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_698BC807EEFA6A89_OFFSET UNITYSDK_OFFSET(0x19558BC0)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_FE24372A6265A3B6_OFFSET UNITYSDK_OFFSET(0x19558D40)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED__CTOR_OFFSET UNITYSDK_OFFSET(0x19558B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllLightTeamDied_TypeDefinitionIndex = 21774;

	class ByIsAllLightTeamDied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TurnState TurnState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12851161AA5C6B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_12851161AA5C6B7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_698BC807EEFA6A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_698BC807EEFA6A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE24372A6265A3B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_FE24372A6265A3B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38FF613ED4063BDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_38FF613ED4063BDF_OFFSET))(a1, a2);
		}
	};
}
