#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_0809368306DFE494_OFFSET UNITYSDK_OFFSET(0x185E48D0)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_9CDA0203E4D9959E_OFFSET UNITYSDK_OFFSET(0x185E49A0)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x185E4950)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesBusinessDayFinished_TypeDefinitionIndex = 10145;

	class ByIsPlanetFesBusinessDayFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0809368306DFE494(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_0809368306DFE494_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CDA0203E4D9959E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_METHOD_4_9CDA0203E4D9959E_OFFSET))(a1, a2);
		}
	};
}
