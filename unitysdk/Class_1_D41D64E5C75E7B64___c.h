#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D41D64E5C75E7B64;

#define CLASS_1_D41D64E5C75E7B64___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCE9800)
#define CLASS_1_D41D64E5C75E7B64___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCE9830)
#define CLASS_1_D41D64E5C75E7B64___C___CCTOR_B__118_0_OFFSET UNITYSDK_OFFSET(0x1BCE9840)

inline static constexpr unsigned int Class_1_D41D64E5C75E7B64___c_TypeDefinitionIndex = 33064;

class Class_1_D41D64E5C75E7B64___c : public ::System::Object
{
public:
	static ::Class_1_D41D64E5C75E7B64___c** StaticGet___9()
	{
		return (::Class_1_D41D64E5C75E7B64___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64___c_TypeDefinitionIndex)->GetStaticField(0xD640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64___C__CTOR_OFFSET))(this);
	}

	::Class_1_D41D64E5C75E7B64* __cctor_b__118_0()
	{
		return ((::Class_1_D41D64E5C75E7B64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64___C___CCTOR_B__118_0_OFFSET))(this);
	}
};
