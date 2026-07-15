#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;

#define CLASS_1_0ED6B63BB337230E_METHOD_1_5C6E1CA11918F3B1_OFFSET UNITYSDK_OFFSET(0x1D0E0AF0)
#define CLASS_1_0ED6B63BB337230E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0D40)
#define CLASS_1_0ED6B63BB337230E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0AE0)

inline static constexpr unsigned int Class_1_0ED6B63BB337230E_TypeDefinitionIndex = 41512;

class Class_1_0ED6B63BB337230E : public ::System::Object
{
public:
	static ::Class_1_0ED6B63BB337230E** StaticGet_Field_1_0()
	{
		return (::Class_1_0ED6B63BB337230E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0ED6B63BB337230E_TypeDefinitionIndex)->GetStaticField(0x4DEE0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_5C6E1CA11918F3B1(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_0ED6B63BB337230E_METHOD_1_5C6E1CA11918F3B1_OFFSET))(this, a1);
	}
};
