#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByTriggerFeature; }

#define CLASS_3_2B1DF233B35D7D46_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1C9727A0)
#define CLASS_3_2B1DF233B35D7D46__CTOR_OFFSET UNITYSDK_OFFSET(0x1C972780)

inline static constexpr unsigned int Class_3_2B1DF233B35D7D46_TypeDefinitionIndex = 43145;

class Class_3_2B1DF233B35D7D46 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByTriggerFeature* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByTriggerFeature* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTriggerFeature*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_2B1DF233B35D7D46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B1DF233B35D7D46_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
