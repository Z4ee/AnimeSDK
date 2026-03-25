#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_538;
namespace RPG::Client { class MaterialSubmitterGroup; }

#define CLASS_1_F55863723888D8D4_METHOD_1_8DDC1BC1254A03E6_OFFSET UNITYSDK_OFFSET(0x8CAA0E0)

inline static constexpr unsigned int Class_1_F55863723888D8D4_TypeDefinitionIndex = 50154;

class Class_1_F55863723888D8D4 : public ::System::Object
{
public:
	static ::RPG::Client::MaterialSubmitterGroup* Method_1_8DDC1BC1254A03E6(::System::UInt32 a1, ::Class_0_16E4307DCC419505_538* a2)
	{
		return ((::RPG::Client::MaterialSubmitterGroup*(*)(::System::UInt32, ::Class_0_16E4307DCC419505_538*))((::PBYTE)hIl2Cpp + CLASS_1_F55863723888D8D4_METHOD_1_8DDC1BC1254A03E6_OFFSET))(a1, a2);
	}
};
