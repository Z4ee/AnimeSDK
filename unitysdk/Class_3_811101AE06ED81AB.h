#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByDefenderFeature; }

#define CLASS_3_811101AE06ED81AB_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1CA00850)
#define CLASS_3_811101AE06ED81AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA00830)

inline static constexpr unsigned int Class_3_811101AE06ED81AB_TypeDefinitionIndex = 43143;

class Class_3_811101AE06ED81AB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByDefenderFeature* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByDefenderFeature* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByDefenderFeature*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_811101AE06ED81AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_811101AE06ED81AB_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
