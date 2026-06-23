#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C768A21A845C0D;

#define CLASS_1_4122C9128BC501D0_2_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x1C3E9F60)
#define CLASS_1_4122C9128BC501D0_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3EA0B0)
#define CLASS_1_4122C9128BC501D0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EA0A0)

inline static constexpr unsigned int Class_1_4122C9128BC501D0_2_TypeDefinitionIndex = 88623;

class Class_1_4122C9128BC501D0_2 : public ::System::Object
{
public:
	static ::Class_1_4122C9128BC501D0_2** StaticGet_Field_1_0()
	{
		return (::Class_1_4122C9128BC501D0_2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4122C9128BC501D0_2_TypeDefinitionIndex)->GetStaticField(0x4DD10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_2__CCTOR_OFFSET))();
	}

	::Class_1_45C768A21A845C0D* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_45C768A21A845C0D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4122C9128BC501D0_2_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}
};
