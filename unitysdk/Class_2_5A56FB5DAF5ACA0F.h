#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA9271BA53EF73F8.h"
#include "unitysdk/MoleMole/Config/CampType.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_5A56FB5DAF5ACA0F_METHOD_2_453FBD30243168C1_OFFSET UNITYSDK_OFFSET(0x16223FA0)
#define CLASS_2_5A56FB5DAF5ACA0F__CTOR_OFFSET UNITYSDK_OFFSET(0x16223F90)

inline static constexpr unsigned int Class_2_5A56FB5DAF5ACA0F_TypeDefinitionIndex = 71362;

class Class_2_5A56FB5DAF5ACA0F : public ::Class_1_FA9271BA53EF73F8
{
public:
	::MoleMole::Config::CampType Field_2_0; // 0x10

	::System::Void _ctor(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_2_5A56FB5DAF5ACA0F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_453FBD30243168C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_5A56FB5DAF5ACA0F_METHOD_2_453FBD30243168C1_OFFSET))(this, a1);
	}
};
