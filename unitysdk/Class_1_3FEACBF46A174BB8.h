#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_3FEACBF46A174BB8_METHOD_1_092B48FCD99BC3AD_OFFSET UNITYSDK_OFFSET(0x1892C6A0)
#define CLASS_1_3FEACBF46A174BB8_METHOD_1_19B97BF280792E1D_OFFSET UNITYSDK_OFFSET(0x1892C730)
#define CLASS_1_3FEACBF46A174BB8_METHOD_1_1EBE673CC8F565B9_OFFSET UNITYSDK_OFFSET(0x1892C880)
#define CLASS_1_3FEACBF46A174BB8_METHOD_1_9A3E1C173079057E_OFFSET UNITYSDK_OFFSET(0x1892C640)

inline static constexpr unsigned int Class_1_3FEACBF46A174BB8_TypeDefinitionIndex = 74402;

class Class_1_3FEACBF46A174BB8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9A3E1C173079057E(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_3FEACBF46A174BB8_METHOD_1_9A3E1C173079057E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_092B48FCD99BC3AD(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_3FEACBF46A174BB8_METHOD_1_092B48FCD99BC3AD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_19B97BF280792E1D(::RPG::Client::MapEntityDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_3FEACBF46A174BB8_METHOD_1_19B97BF280792E1D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1EBE673CC8F565B9(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_3FEACBF46A174BB8_METHOD_1_1EBE673CC8F565B9_OFFSET))(a1);
	}
};
