#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_092B48FCD99BC3AD_OFFSET UNITYSDK_OFFSET(0xE45BDD0)
#define CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_1EBE673CC8F565B9_OFFSET UNITYSDK_OFFSET(0xE45BF10)
#define CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_9A3E1C173079057E_OFFSET UNITYSDK_OFFSET(0xE45BD70)
#define CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_BAEFF9AC429C0A02_OFFSET UNITYSDK_OFFSET(0xE45BE60)

inline static constexpr unsigned int Class_1_E6C5EF77D2CCDF8E_TypeDefinitionIndex = 69580;

class Class_1_E6C5EF77D2CCDF8E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9A3E1C173079057E(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_9A3E1C173079057E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_092B48FCD99BC3AD(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_092B48FCD99BC3AD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BAEFF9AC429C0A02(::RPG::Client::MapEntityDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_BAEFF9AC429C0A02_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1EBE673CC8F565B9(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_E6C5EF77D2CCDF8E_METHOD_1_1EBE673CC8F565B9_OFFSET))(a1);
	}
};
