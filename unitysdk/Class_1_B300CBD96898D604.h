#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BB31ECC72CE354E;
namespace RPG::GameCore { class RtDamageConstConfig; }

#define CLASS_1_B300CBD96898D604_METHOD_1_1632EA794E5F6E96_OFFSET UNITYSDK_OFFSET(0xD33BDC0)
#define CLASS_1_B300CBD96898D604_METHOD_1_8485FE34D50D72BF_OFFSET UNITYSDK_OFFSET(0xD33C280)

inline static constexpr unsigned int Class_1_B300CBD96898D604_TypeDefinitionIndex = 49982;

class Class_1_B300CBD96898D604 : public ::System::Object
{
public:
	static ::Class_1_0BB31ECC72CE354E* Method_1_1632EA794E5F6E96(::Class_1_0BB31ECC72CE354E* a1, ::RPG::GameCore::RtDamageConstConfig* a2)
	{
		return ((::Class_1_0BB31ECC72CE354E*(*)(::Class_1_0BB31ECC72CE354E*, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B300CBD96898D604_METHOD_1_1632EA794E5F6E96_OFFSET))(a1, a2);
	}

	static ::Class_1_0BB31ECC72CE354E* Method_1_8485FE34D50D72BF()
	{
		return ((::Class_1_0BB31ECC72CE354E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B300CBD96898D604_METHOD_1_8485FE34D50D72BF_OFFSET))();
	}
};
