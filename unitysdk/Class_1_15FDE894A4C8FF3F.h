#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6B0B39A319DDDE2_2;
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define CLASS_1_15FDE894A4C8FF3F_METHOD_1_410195172EDD0AA2_OFFSET UNITYSDK_OFFSET(0x15ADC850)
#define CLASS_1_15FDE894A4C8FF3F__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCA30)

inline static constexpr unsigned int Class_1_15FDE894A4C8FF3F_TypeDefinitionIndex = 67559;

class Class_1_15FDE894A4C8FF3F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15FDE894A4C8FF3F__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefShareCodeDataItem* Method_1_410195172EDD0AA2(::Class_1_A6B0B39A319DDDE2_2* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2_2*))((::PBYTE)hIl2Cpp + CLASS_1_15FDE894A4C8FF3F_METHOD_1_410195172EDD0AA2_OFFSET))(this, a1);
	}
};
