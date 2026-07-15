#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD010263573232AE;
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define CLASS_1_15FDE894A4C8FF3F_METHOD_1_410195172EDD0AA2_OFFSET UNITYSDK_OFFSET(0x14AD84D0)
#define CLASS_1_15FDE894A4C8FF3F__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD86A0)

inline static constexpr unsigned int Class_1_15FDE894A4C8FF3F_TypeDefinitionIndex = 64561;

class Class_1_15FDE894A4C8FF3F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15FDE894A4C8FF3F__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefShareCodeDataItem* Method_1_410195172EDD0AA2(::Class_1_CD010263573232AE* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::PVOID, ::Class_1_CD010263573232AE*))((::PBYTE)hIl2Cpp + CLASS_1_15FDE894A4C8FF3F_METHOD_1_410195172EDD0AA2_OFFSET))(this, a1);
	}
};
