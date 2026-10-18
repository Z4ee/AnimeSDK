#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCompareScore; }

#define CLASS_3_7C4FA3F07ABED042_METHOD_3_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x1CA50960)
#define CLASS_3_7C4FA3F07ABED042__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50940)

inline static constexpr unsigned int Class_3_7C4FA3F07ABED042_TypeDefinitionIndex = 43159;

class Class_3_7C4FA3F07ABED042 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareScore* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareScore* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareScore*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_7C4FA3F07ABED042__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C4FA3F07ABED042_METHOD_3_37011B6DDBE4CF26_OFFSET))(this);
	}
};
