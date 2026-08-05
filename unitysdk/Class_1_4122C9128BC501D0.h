#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F50CC8D9599D41DE;

#define CLASS_1_4122C9128BC501D0_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x10A16FE0)
#define CLASS_1_4122C9128BC501D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A17120)
#define CLASS_1_4122C9128BC501D0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A17110)

inline static constexpr unsigned int Class_1_4122C9128BC501D0_TypeDefinitionIndex = 40805;

class Class_1_4122C9128BC501D0 : public ::System::Object
{
public:
	static ::Class_1_4122C9128BC501D0** StaticGet_Field_1_0()
	{
		return (::Class_1_4122C9128BC501D0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4122C9128BC501D0_TypeDefinitionIndex)->GetStaticField(0x3DBB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0__CCTOR_OFFSET))();
	}

	::Class_1_F50CC8D9599D41DE* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_F50CC8D9599D41DE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}
};
