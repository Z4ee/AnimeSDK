#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetMarble { class PetMarblePVEMatchContext; }

#define CLASS_3_27518451A20BB161___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC3830)
#define CLASS_3_27518451A20BB161___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xFEC38B0)

inline static constexpr unsigned int Class_3_27518451A20BB161___c__DisplayClass1_0_TypeDefinitionIndex = 52303;

class Class_3_27518451A20BB161___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::Client::PetMarble::PetMarblePVEMatchContext* context; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
