#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_110.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }

#define CLASS_2_D36F52E30066F13C_METHOD_2_2E20EF0244E2E56D_OFFSET UNITYSDK_OFFSET(0x18F80520)
#define CLASS_2_D36F52E30066F13C_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18F80120)
#define CLASS_2_D36F52E30066F13C_METHOD_2_9CED48CB41DB3FF6_OFFSET UNITYSDK_OFFSET(0x18F80190)
#define CLASS_2_D36F52E30066F13C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F808C0)
#define CLASS_2_D36F52E30066F13C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F808B0)

inline static constexpr unsigned int Class_2_D36F52E30066F13C_TypeDefinitionIndex = 62352;

class Class_2_D36F52E30066F13C : public ::Class_1_43BD383C98B4C0C5_110
{
public:
	static ::Class_2_D36F52E30066F13C** StaticGet_Field_2_0()
	{
		return (::Class_2_D36F52E30066F13C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D36F52E30066F13C_TypeDefinitionIndex)->GetStaticField(0x8890);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C__CCTOR_OFFSET))();
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_2_9CED48CB41DB3FF6(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_9CED48CB41DB3FF6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_2E20EF0244E2E56D(::Class_1_2670985A37556FEA* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_2E20EF0244E2E56D_OFFSET))(this, a1);
	}
};
