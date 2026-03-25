#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define CLASS_2_B2EC0116D7420B36__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE87C0)

inline static constexpr unsigned int Class_2_B2EC0116D7420B36_TypeDefinitionIndex = 55022;

class Class_2_B2EC0116D7420B36 : public ::System::Exception
{
public:
	::System::Void _ctor(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B2EC0116D7420B36__CTOR_OFFSET))(this, a1, a2);
	}
};
