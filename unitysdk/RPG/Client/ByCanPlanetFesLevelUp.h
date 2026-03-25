#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_523E13CC58659F31_OFFSET UNITYSDK_OFFSET(0x16E839E0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_METHOD_4_FAF58B019465EA2B_OFFSET UNITYSDK_OFFSET(0x16E83AB0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16E83A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesLevelUp_TypeDefinitionIndex = 9968;

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
	};
}
