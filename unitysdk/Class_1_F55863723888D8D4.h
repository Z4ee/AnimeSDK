#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;
namespace RPG::Client { class MaterialSubmitterGroup; }

#define CLASS_1_F55863723888D8D4_METHOD_1_8DDC1BC1254A03E6_OFFSET UNITYSDK_OFFSET(0x97B2030)

inline static constexpr unsigned int Class_1_F55863723888D8D4_TypeDefinitionIndex = 56999;

class Class_1_F55863723888D8D4 : public ::System::Object
{
public:
	static ::RPG::Client::MaterialSubmitterGroup* Method_1_8DDC1BC1254A03E6(::System::UInt32 a1, ::Class_0_16E4307DCC419505_627* a2)
	{
		return ((::RPG::Client::MaterialSubmitterGroup*(*)(::System::UInt32, ::Class_0_16E4307DCC419505_627*))((::PBYTE)hIl2Cpp + CLASS_1_F55863723888D8D4_METHOD_1_8DDC1BC1254A03E6_OFFSET))(a1, a2);
	}
};
