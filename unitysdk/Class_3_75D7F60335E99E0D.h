#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C00C44C10E42328.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_75D7F60335E99E0D_METHOD_3_56AB20857C761B0F_OFFSET UNITYSDK_OFFSET(0x12ACE770)
#define CLASS_3_75D7F60335E99E0D__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACE800)

inline static constexpr unsigned int Class_3_75D7F60335E99E0D_TypeDefinitionIndex = 74434;

class Class_3_75D7F60335E99E0D : public ::Class_2_9C00C44C10E42328
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75D7F60335E99E0D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_56AB20857C761B0F(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_75D7F60335E99E0D_METHOD_3_56AB20857C761B0F_OFFSET))(this, a1);
	}
};
