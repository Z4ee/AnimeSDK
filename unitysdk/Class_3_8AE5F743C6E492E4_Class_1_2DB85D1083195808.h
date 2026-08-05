#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_8AE5F743C6E492E4_CLASS_1_2DB85D1083195808_METHOD_1_D3654AA51C62A3B6_OFFSET UNITYSDK_OFFSET(0x17501FA0)
#define CLASS_3_8AE5F743C6E492E4_CLASS_1_2DB85D1083195808__CTOR_OFFSET UNITYSDK_OFFSET(0x17501F90)

inline static constexpr unsigned int Class_3_8AE5F743C6E492E4_Class_1_2DB85D1083195808_TypeDefinitionIndex = 82164;

class Class_3_8AE5F743C6E492E4_Class_1_2DB85D1083195808 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_2DB85D1083195808__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3654AA51C62A3B6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_2DB85D1083195808_METHOD_1_D3654AA51C62A3B6_OFFSET))(this, a1);
	}
};
