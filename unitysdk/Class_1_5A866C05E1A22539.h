#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F50CC8D9599D41DE;

#define CLASS_1_5A866C05E1A22539_METHOD_1_49A63E2309B03B95_OFFSET UNITYSDK_OFFSET(0x178DC160)
#define CLASS_1_5A866C05E1A22539_METHOD_1_826C748D57143BE6_OFFSET UNITYSDK_OFFSET(0x178DC280)
#define CLASS_1_5A866C05E1A22539__CCTOR_OFFSET UNITYSDK_OFFSET(0x178DC240)
#define CLASS_1_5A866C05E1A22539__CTOR_OFFSET UNITYSDK_OFFSET(0x178DC230)

inline static constexpr unsigned int Class_1_5A866C05E1A22539_TypeDefinitionIndex = 83746;

class Class_1_5A866C05E1A22539 : public ::System::Object
{
public:
	static ::Class_1_5A866C05E1A22539** StaticGet_Field_1_0()
	{
		return (::Class_1_5A866C05E1A22539**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A866C05E1A22539_TypeDefinitionIndex)->GetStaticField(0x31610);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539__CCTOR_OFFSET))();
	}

	::Class_1_F50CC8D9599D41DE* Method_1_49A63E2309B03B95(::System::Int32 a1)
	{
		return ((::Class_1_F50CC8D9599D41DE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_METHOD_1_49A63E2309B03B95_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_826C748D57143BE6(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5A866C05E1A22539_METHOD_1_826C748D57143BE6_OFFSET))(a1);
	}
};
