#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7BC7BD156CC39DE;

#define CLASS_1_C7BC7BD156CC39DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5120)
#define CLASS_1_C7BC7BD156CC39DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5150)
#define CLASS_1_C7BC7BD156CC39DE___C___CCTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0x1DFF5160)

inline static constexpr unsigned int Class_1_C7BC7BD156CC39DE___c_TypeDefinitionIndex = 33606;

class Class_1_C7BC7BD156CC39DE___c : public ::System::Object
{
public:
	static ::Class_1_C7BC7BD156CC39DE___c** StaticGet___9()
	{
		return (::Class_1_C7BC7BD156CC39DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7BC7BD156CC39DE___c_TypeDefinitionIndex)->GetStaticField(0x5C990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7BC7BD156CC39DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7BC7BD156CC39DE___C__CTOR_OFFSET))(this);
	}

	::Class_1_C7BC7BD156CC39DE* __cctor_b__59_0()
	{
		return ((::Class_1_C7BC7BD156CC39DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7BC7BD156CC39DE___C___CCTOR_B__59_0_OFFSET))(this);
	}
};
