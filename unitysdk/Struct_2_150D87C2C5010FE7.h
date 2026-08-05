#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D67DC31738C86159.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_150D87C2C5010FE7_METHOD_2_E70C3A654A6E50E2_OFFSET UNITYSDK_OFFSET(0x61E9C0)
#define STRUCT_2_150D87C2C5010FE7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STRUCT_2_150D87C2C5010FE7__CTOR_OFFSET UNITYSDK_OFFSET(0x351440)

inline static constexpr unsigned int Struct_2_150D87C2C5010FE7_TypeDefinitionIndex = 53077;

struct alignas(8) Struct_2_150D87C2C5010FE7
{
	::MoleMole::Battle::Entity* Field_2_0; // 0x10
	::Enum_3_D67DC31738C86159 Field_2_7; // 0x18

	::System::Void _ctor(::Enum_3_D67DC31738C86159 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D67DC31738C86159, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_150D87C2C5010FE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_E70C3A654A6E50E2(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_150D87C2C5010FE7_METHOD_2_E70C3A654A6E50E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_150D87C2C5010FE7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
