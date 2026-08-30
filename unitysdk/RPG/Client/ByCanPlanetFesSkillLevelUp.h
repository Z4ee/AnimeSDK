#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_8FB9966913FBE426_OFFSET UNITYSDK_OFFSET(0x1CD49730)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_9EA2B899F24FDFD1_OFFSET UNITYSDK_OFFSET(0x1CD498A0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_D33DBF8257F32225_OFFSET UNITYSDK_OFFSET(0x1CD496F0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_DD7FC4675DECA9B0_OFFSET UNITYSDK_OFFSET(0x1CD49870)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD49720)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesSkillLevelUp_TypeDefinitionIndex = 10259;

	class ByCanPlanetFesSkillLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D33DBF8257F32225(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_D33DBF8257F32225_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FB9966913FBE426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_8FB9966913FBE426_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD7FC4675DECA9B0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_DD7FC4675DECA9B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EA2B899F24FDFD1(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_METHOD_4_9EA2B899F24FDFD1_OFFSET))(a1, a2);
		}
	};
}
