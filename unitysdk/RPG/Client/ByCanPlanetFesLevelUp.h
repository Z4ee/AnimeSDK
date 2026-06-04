#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_4C035A21FA0D37FC_OFFSET UNITYSDK_OFFSET(0x193B0BF0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_523E13CC58659F31_OFFSET UNITYSDK_OFFSET(0x193B09E0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_6BE88DA085DD6ED4_OFFSET UNITYSDK_OFFSET(0x193B0C70)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_FAF58B019465EA2B_OFFSET UNITYSDK_OFFSET(0x193B0AB0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x193B0A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesLevelUp_TypeDefinitionIndex = 9944;

	class ByCanPlanetFesLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_523E13CC58659F31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_523E13CC58659F31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAF58B019465EA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_FAF58B019465EA2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C035A21FA0D37FC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_4C035A21FA0D37FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BE88DA085DD6ED4(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_6BE88DA085DD6ED4_OFFSET))(a1, a2);
		}
	};
}
