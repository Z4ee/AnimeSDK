#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_8AE5F743C6E492E4_CLASS_1_3E92AF51BF0E11D9_METHOD_1_05B18A0542ADCC2C_OFFSET UNITYSDK_OFFSET(0x13FDAC20)
#define CLASS_3_8AE5F743C6E492E4_CLASS_1_3E92AF51BF0E11D9__CTOR_OFFSET UNITYSDK_OFFSET(0x13FDAC10)

inline static constexpr unsigned int Class_3_8AE5F743C6E492E4_Class_1_3E92AF51BF0E11D9_TypeDefinitionIndex = 82162;

class Class_3_8AE5F743C6E492E4_Class_1_3E92AF51BF0E11D9 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_3E92AF51BF0E11D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_05B18A0542ADCC2C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_3E92AF51BF0E11D9_METHOD_1_05B18A0542ADCC2C_OFFSET))(this, a1);
	}
};
