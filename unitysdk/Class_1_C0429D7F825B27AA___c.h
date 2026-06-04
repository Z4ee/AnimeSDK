#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0429D7F825B27AA;

#define CLASS_1_C0429D7F825B27AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A281F40)
#define CLASS_1_C0429D7F825B27AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A281F80)
#define CLASS_1_C0429D7F825B27AA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A281F90)

inline static constexpr unsigned int Class_1_C0429D7F825B27AA___c_TypeDefinitionIndex = 31660;

class Class_1_C0429D7F825B27AA___c : public ::System::Object
{
public:
	static ::Class_1_C0429D7F825B27AA___c** StaticGet___9()
	{
		return (::Class_1_C0429D7F825B27AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0429D7F825B27AA___c_TypeDefinitionIndex)->GetStaticField(0x477C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0429D7F825B27AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0429D7F825B27AA___C__CTOR_OFFSET))(this);
	}

	::Class_1_C0429D7F825B27AA* __cctor_b__38_0()
	{
		return ((::Class_1_C0429D7F825B27AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0429D7F825B27AA___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
