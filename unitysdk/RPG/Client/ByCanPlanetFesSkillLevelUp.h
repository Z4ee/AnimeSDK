#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_38CAD2232F5B39FD_OFFSET UNITYSDK_OFFSET(0x193B1050)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_6CB4056184BEB819_OFFSET UNITYSDK_OFFSET(0x193B0FD0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_8FB9966913FBE426_OFFSET UNITYSDK_OFFSET(0x193B0E90)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_F1400520A6A53C6C_OFFSET UNITYSDK_OFFSET(0x193B0DC0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x193B0E40)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesSkillLevelUp_TypeDefinitionIndex = 9945;

	class ByCanPlanetFesSkillLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F1400520A6A53C6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_F1400520A6A53C6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FB9966913FBE426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_8FB9966913FBE426_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6CB4056184BEB819(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_6CB4056184BEB819_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38CAD2232F5B39FD(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_38CAD2232F5B39FD_OFFSET))(a1, a2);
		}
	};
}
