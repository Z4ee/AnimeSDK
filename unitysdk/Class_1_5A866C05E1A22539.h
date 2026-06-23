#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91B6D33FD5BD3A1D;

#define CLASS_1_5A866C05E1A22539_METHOD_1_49A63E2309B03B95_OFFSET UNITYSDK_OFFSET(0x1BA52230)
#define CLASS_1_5A866C05E1A22539__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA52300)
#define CLASS_1_5A866C05E1A22539__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA522F0)

inline static constexpr unsigned int Class_1_5A866C05E1A22539_TypeDefinitionIndex = 88581;

class Class_1_5A866C05E1A22539 : public ::System::Object
{
public:
	static ::Class_1_5A866C05E1A22539** StaticGet_Field_1_0()
	{
		return (::Class_1_5A866C05E1A22539**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A866C05E1A22539_TypeDefinitionIndex)->GetStaticField(0x4DD20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539__CCTOR_OFFSET))();
	}

	::Class_1_91B6D33FD5BD3A1D* Method_1_49A63E2309B03B95(::System::Int32 a1)
	{
		return ((::Class_1_91B6D33FD5BD3A1D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_METHOD_1_49A63E2309B03B95_OFFSET))(this, a1);
	}
};
