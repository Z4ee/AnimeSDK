#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }

#define CLASS_2_D36F52E30066F13C_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10C9A2A0)
#define CLASS_2_D36F52E30066F13C_METHOD_2_50F5A6A6740A86DB_OFFSET UNITYSDK_OFFSET(0x10C9A600)
#define CLASS_2_D36F52E30066F13C_METHOD_2_9CED48CB41DB3FF6_OFFSET UNITYSDK_OFFSET(0x10C9A2E0)
#define CLASS_2_D36F52E30066F13C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C9A940)
#define CLASS_2_D36F52E30066F13C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9A930)

inline static constexpr unsigned int Class_2_D36F52E30066F13C_TypeDefinitionIndex = 61034;

class Class_2_D36F52E30066F13C : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	static ::Class_2_D36F52E30066F13C** StaticGet_Field_2_0()
	{
		return (::Class_2_D36F52E30066F13C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D36F52E30066F13C_TypeDefinitionIndex)->GetStaticField(0x14090);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C__CCTOR_OFFSET))();
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_9CED48CB41DB3FF6(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_9CED48CB41DB3FF6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_50F5A6A6740A86DB(::Class_1_2670985A37556FEA* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_2_D36F52E30066F13C_METHOD_2_50F5A6A6740A86DB_OFFSET))(this, a1);
	}
};
