#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }

#define CLASS_1_835674ABDEA6EB80___C__DISPLAYCLASS1_0__CONTAINS_B__0_OFFSET UNITYSDK_OFFSET(0x11FEEC70)
#define CLASS_1_835674ABDEA6EB80___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11FEEC60)

inline static constexpr unsigned int Class_1_835674ABDEA6EB80___c__DisplayClass1_0_TypeDefinitionIndex = 75656;

class Class_1_835674ABDEA6EB80___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::Client::Pet::PetInstanceIdentifier identifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_835674ABDEA6EB80___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Contains_b__0(::RPG::Client::Pet::IPetInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + CLASS_1_835674ABDEA6EB80___C__DISPLAYCLASS1_0__CONTAINS_B__0_OFFSET))(this, a1);
	}
};
