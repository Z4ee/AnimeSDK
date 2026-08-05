#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;

#define CLASS_1_5A866C05E1A22539_1_METHOD_1_49A63E2309B03B95_OFFSET UNITYSDK_OFFSET(0x1E070170)
#define CLASS_1_5A866C05E1A22539_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E070240)
#define CLASS_1_5A866C05E1A22539_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E070230)

inline static constexpr unsigned int Class_1_5A866C05E1A22539_1_TypeDefinitionIndex = 92185;

class Class_1_5A866C05E1A22539_1 : public ::System::Object
{
public:
	static ::Class_1_5A866C05E1A22539_1** StaticGet_Field_1_0()
	{
		return (::Class_1_5A866C05E1A22539_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A866C05E1A22539_1_TypeDefinitionIndex)->GetStaticField(0x51DA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_1__CCTOR_OFFSET))();
	}

	::Class_1_34A82ADD3D230E95* Method_1_49A63E2309B03B95(::System::Int32 a1)
	{
		return ((::Class_1_34A82ADD3D230E95*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_1_METHOD_1_49A63E2309B03B95_OFFSET))(this, a1);
	}
};
