#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_257288C8C01C3283_OFFSET UNITYSDK_OFFSET(0x1BBED3E0)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_37ADD0F81AC6D74C_OFFSET UNITYSDK_OFFSET(0x1BBED410)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_698BC807EEFA6A89_OFFSET UNITYSDK_OFFSET(0x1BBED260)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_ED0CA8D325D622CC_OFFSET UNITYSDK_OFFSET(0x1BBED220)
#define RPG_GAMECORE_BYISALLLIGHTTEAMDIED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBED250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllLightTeamDied_TypeDefinitionIndex = 22769;

	class ByIsAllLightTeamDied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TurnState TurnState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED0CA8D325D622CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_ED0CA8D325D622CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_698BC807EEFA6A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_698BC807EEFA6A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_257288C8C01C3283(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_257288C8C01C3283_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37ADD0F81AC6D74C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLLIGHTTEAMDIED_METHOD_4_37ADD0F81AC6D74C_OFFSET))(a1, a2);
		}
	};
}
