#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68B3FFD528A3EFF0.h"
#include "unitysdk/Struct_2_A48D1DAD5D968E45.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_1029935CDAFC33C6_METHOD_3_2366DE63CD1D0F97_OFFSET UNITYSDK_OFFSET(0x18783C30)
#define CLASS_3_1029935CDAFC33C6__CTOR_OFFSET UNITYSDK_OFFSET(0x18783BB0)

inline static constexpr unsigned int Class_3_1029935CDAFC33C6_TypeDefinitionIndex = 82893;

class Class_3_1029935CDAFC33C6 : public ::Class_2_68B3FFD528A3EFF0
{
public:
	::Struct_2_A48D1DAD5D968E45 Field_3_0; // 0x20
	::Struct_2_A48D1DAD5D968E45 Field_3_7; // 0x30

	::System::Void _ctor(::Struct_2_A48D1DAD5D968E45& a1, ::Struct_2_A48D1DAD5D968E45& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A48D1DAD5D968E45&, ::Struct_2_A48D1DAD5D968E45&))((::PBYTE)hIl2Cpp + CLASS_3_1029935CDAFC33C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2366DE63CD1D0F97(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_1029935CDAFC33C6_METHOD_3_2366DE63CD1D0F97_OFFSET))(this, a1);
	}
};
