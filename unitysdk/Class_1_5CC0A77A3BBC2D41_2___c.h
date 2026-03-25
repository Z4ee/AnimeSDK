#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CC0A77A3BBC2D41_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7CB10)
#define CLASS_1_5CC0A77A3BBC2D41_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7CB40)
#define CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17E7CB50)
#define CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_1_OFFSET UNITYSDK_OFFSET(0x17E7CB60)

inline static constexpr unsigned int Class_1_5CC0A77A3BBC2D41_2___c_TypeDefinitionIndex = 25141;

class Class_1_5CC0A77A3BBC2D41_2___c : public ::System::Object
{
public:
	static ::Class_1_5CC0A77A3BBC2D41_2___c** StaticGet___9()
	{
		return (::Class_1_5CC0A77A3BBC2D41_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC0A77A3BBC2D41_2___c_TypeDefinitionIndex)->GetStaticField(0x26480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__25_0(::Enum_3_0A3761FE34514D6C_45 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_45 __cctor_b__25_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_45(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CC0A77A3BBC2D41_2___C___CCTOR_B__25_1_OFFSET))(this, x);
	}
};
