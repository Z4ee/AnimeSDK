#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/System/Object.h"

class Class_1_732AF221927F3BE0_1;

#define CLASS_1_732AF221927F3BE0_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195FF030)
#define CLASS_1_732AF221927F3BE0_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195FF060)
#define CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x195FF070)
#define CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_1_OFFSET UNITYSDK_OFFSET(0x195FF0A0)
#define CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_2_OFFSET UNITYSDK_OFFSET(0x195FF0B0)

inline static constexpr unsigned int Class_1_732AF221927F3BE0_1___c_TypeDefinitionIndex = 28358;

class Class_1_732AF221927F3BE0_1___c : public ::System::Object
{
public:
	static ::Class_1_732AF221927F3BE0_1___c** StaticGet___9()
	{
		return (::Class_1_732AF221927F3BE0_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_732AF221927F3BE0_1___c_TypeDefinitionIndex)->GetStaticField(0x5AEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_732AF221927F3BE0_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_732AF221927F3BE0_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_732AF221927F3BE0_1* __cctor_b__98_0()
	{
		return ((::Class_1_732AF221927F3BE0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__98_1(::Enum_3_0A3761FE34514D6C_46 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_46))((::PBYTE)hIl2Cpp + CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_1_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_46 __cctor_b__98_2(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_46(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_732AF221927F3BE0_1___C___CCTOR_B__98_2_OFFSET))(this, x);
	}
};
