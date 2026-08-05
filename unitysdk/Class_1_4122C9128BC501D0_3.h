#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F50CC8D9599D41DE;

#define CLASS_1_4122C9128BC501D0_3_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x1C69F8F0)
#define CLASS_1_4122C9128BC501D0_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C69FA30)
#define CLASS_1_4122C9128BC501D0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69FA20)

inline static constexpr unsigned int Class_1_4122C9128BC501D0_3_TypeDefinitionIndex = 91873;

class Class_1_4122C9128BC501D0_3 : public ::System::Object
{
public:
	static ::Class_1_4122C9128BC501D0_3** StaticGet_Field_1_0()
	{
		return (::Class_1_4122C9128BC501D0_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4122C9128BC501D0_3_TypeDefinitionIndex)->GetStaticField(0x51D90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_3__CCTOR_OFFSET))();
	}

	::Class_1_F50CC8D9599D41DE* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_F50CC8D9599D41DE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_3_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}
};
