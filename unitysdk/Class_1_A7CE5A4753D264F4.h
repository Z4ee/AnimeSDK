#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesEventDataBase; }

#define CLASS_1_A7CE5A4753D264F4_METHOD_1_00243183F41CFBAB_OFFSET UNITYSDK_OFFSET(0xA499240)

inline static constexpr unsigned int Class_1_A7CE5A4753D264F4_TypeDefinitionIndex = 62236;

class Class_1_A7CE5A4753D264F4 : public ::System::Object
{
public:
	static ::RPG::Client::PlanetFesEventDataBase* Method_1_00243183F41CFBAB(::RPG::GameCore::PlanetFesEventType a1)
	{
		return ((::RPG::Client::PlanetFesEventDataBase*(*)(::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + CLASS_1_A7CE5A4753D264F4_METHOD_1_00243183F41CFBAB_OFFSET))(a1);
	}
};
