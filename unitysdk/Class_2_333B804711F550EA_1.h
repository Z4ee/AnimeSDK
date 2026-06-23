#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA9271BA53EF73F8.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_333B804711F550EA_1_METHOD_2_453FBD30243168C1_OFFSET UNITYSDK_OFFSET(0x11D9C6E0)
#define CLASS_2_333B804711F550EA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9C730)

inline static constexpr unsigned int Class_2_333B804711F550EA_1_TypeDefinitionIndex = 70699;

class Class_2_333B804711F550EA_1 : public ::Class_1_FA9271BA53EF73F8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333B804711F550EA_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_453FBD30243168C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_333B804711F550EA_1_METHOD_2_453FBD30243168C1_OFFSET))(this, a1);
	}
};
