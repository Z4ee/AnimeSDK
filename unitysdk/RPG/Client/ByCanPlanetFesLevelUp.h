#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_55F879832F736708_OFFSET UNITYSDK_OFFSET(0x1D306550)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_730F80178A024FD1_OFFSET UNITYSDK_OFFSET(0x1D306520)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_7B1515D662FB7098_OFFSET UNITYSDK_OFFSET(0x1D3063A0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_FAF58B019465EA2B_OFFSET UNITYSDK_OFFSET(0x1D3063E0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3063D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesLevelUp_TypeDefinitionIndex = 10258;

	class ByCanPlanetFesLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B1515D662FB7098(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_7B1515D662FB7098_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAF58B019465EA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_FAF58B019465EA2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_730F80178A024FD1(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_730F80178A024FD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55F879832F736708(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_55F879832F736708_OFFSET))(a1, a2);
		}
	};
}
