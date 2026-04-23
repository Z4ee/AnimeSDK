#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_73.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_11;

#define CLASS_1_14E02E1F6D70E487_11___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195C5F50)
#define CLASS_1_14E02E1F6D70E487_11___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195C5F80)
#define CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x195C5F90)
#define CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x195C5FC0)
#define CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x195C5FD0)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_11___c_TypeDefinitionIndex = 32075;

class Class_1_14E02E1F6D70E487_11___c : public ::System::Object
{
public:
	static ::Class_1_14E02E1F6D70E487_11___c** StaticGet___9()
	{
		return (::Class_1_14E02E1F6D70E487_11___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_11___c_TypeDefinitionIndex)->GetStaticField(0x53A20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_11___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_11___C__CTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_11* __cctor_b__73_0()
	{
		return ((::Class_1_14E02E1F6D70E487_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__73_1(::Enum_3_0A3761FE34514D6C_73 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_73))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_1_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_73 __cctor_b__73_2(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_73(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_11___C___CCTOR_B__73_2_OFFSET))(this, x);
	}
};
