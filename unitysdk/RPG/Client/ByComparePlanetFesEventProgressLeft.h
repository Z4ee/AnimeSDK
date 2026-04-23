#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_7FAC92942103F342_OFFSET UNITYSDK_OFFSET(0x185E4760)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_87366D52D659E1B8_OFFSET UNITYSDK_OFFSET(0x185E4690)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x185E4710)

namespace RPG::Client
{
	inline static constexpr unsigned int ByComparePlanetFesEventProgressLeft_TypeDefinitionIndex = 10144;

	class ByComparePlanetFesEventProgressLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 LeftProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_87366D52D659E1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_87366D52D659E1B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FAC92942103F342(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_METHOD_4_7FAC92942103F342_OFFSET))(a1, a2);
		}
	};
}
