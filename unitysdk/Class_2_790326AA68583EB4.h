#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleSetDead; }

#define CLASS_2_790326AA68583EB4_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1CA43710)
#define CLASS_2_790326AA68583EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA43700)

inline static constexpr unsigned int Class_2_790326AA68583EB4_TypeDefinitionIndex = 43115;

class Class_2_790326AA68583EB4 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSetDead* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetDead* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetDead*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_790326AA68583EB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_790326AA68583EB4_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
