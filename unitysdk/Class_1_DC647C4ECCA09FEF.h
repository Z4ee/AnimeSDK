#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_593;
namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_DC647C4ECCA09FEF_METHOD_1_56E43D188B4FBE82_OFFSET UNITYSDK_OFFSET(0x8B7ED70)

inline static constexpr unsigned int Class_1_DC647C4ECCA09FEF_TypeDefinitionIndex = 51084;

class Class_1_DC647C4ECCA09FEF : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_593* Method_1_56E43D188B4FBE82(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_0_16E4307DCC419505_593*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_DC647C4ECCA09FEF_METHOD_1_56E43D188B4FBE82_OFFSET))(a1);
	}
};
