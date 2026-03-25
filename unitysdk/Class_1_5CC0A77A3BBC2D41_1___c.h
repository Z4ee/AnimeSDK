#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CC0A77A3BBC2D41_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ABD280)
#define CLASS_1_5CC0A77A3BBC2D41_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17ABD2C0)
#define CLASS_1_5CC0A77A3BBC2D41_1___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17ABD2D0)
#define CLASS_1_5CC0A77A3BBC2D41_1___C___CCTOR_B__25_1_OFFSET UNITYSDK_OFFSET(0x17ABD2E0)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41_1___c_TypeDefinitionIndex = 23466;

class Class_1_5CC0A77A3BBC2D41_1___c : public ::System::Object
{
public:
	static ::Class_1_5CC0A77A3BBC2D41_1___c** StaticGet___9()
	{
		return (::Class_1_5CC0A77A3BBC2D41_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_1___c_TypeDefinitionIndex)->GetStaticField(0x22AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__25_0(::Enum_3_84F790F6B4BFF34E_1 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_84F790F6B4BFF34E_1))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1___C___CCTOR_B__25_0_OFFSET))(this, x);
	}

	::Enum_3_84F790F6B4BFF34E_1 __cctor_b__25_1(::System::Int32 x)
	{
		return ((::Enum_3_84F790F6B4BFF34E_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_1___C___CCTOR_B__25_1_OFFSET))(this, x);
	}
};
