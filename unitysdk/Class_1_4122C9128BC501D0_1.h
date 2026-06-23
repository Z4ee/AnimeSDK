#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91B6D33FD5BD3A1D;

#define CLASS_1_4122C9128BC501D0_1_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x1342D1C0)
#define CLASS_1_4122C9128BC501D0_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1342D3B0)
#define CLASS_1_4122C9128BC501D0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1342D3A0)

inline static constexpr unsigned int Class_1_4122C9128BC501D0_1_TypeDefinitionIndex = 70669;

class Class_1_4122C9128BC501D0_1 : public ::System::Object
{
public:
	static ::Class_1_4122C9128BC501D0_1** StaticGet_Field_1_0()
	{
		return (::Class_1_4122C9128BC501D0_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4122C9128BC501D0_1_TypeDefinitionIndex)->GetStaticField(0x3BCA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_1__CCTOR_OFFSET))();
	}

	::Class_1_91B6D33FD5BD3A1D* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_91B6D33FD5BD3A1D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_1_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}
};
