#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_69.h"
#include "unitysdk/System/Object.h"

class Class_1_36F19AB6A3078C9D_1;

#define CLASS_1_36F19AB6A3078C9D_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA600B0)
#define CLASS_1_36F19AB6A3078C9D_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA600F0)
#define CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DA60100)
#define CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x1DA60130)
#define CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x1DA60140)

inline static constexpr unsigned int Class_1_36F19AB6A3078C9D_1___c_TypeDefinitionIndex = 32719;

class Class_1_36F19AB6A3078C9D_1___c : public ::System::Object
{
public:
	static ::Class_1_36F19AB6A3078C9D_1___c** StaticGet___9()
	{
		return (::Class_1_36F19AB6A3078C9D_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36F19AB6A3078C9D_1___c_TypeDefinitionIndex)->GetStaticField(0x24FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36F19AB6A3078C9D_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F19AB6A3078C9D_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_36F19AB6A3078C9D_1* __cctor_b__33_0()
	{
		return ((::Class_1_36F19AB6A3078C9D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__33_1(::Enum_3_0A3761FE34514D6C_69 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_69))((::PBYTE)hIl2Cpp + CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_1_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_69 __cctor_b__33_2(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_69(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36F19AB6A3078C9D_1___C___CCTOR_B__33_2_OFFSET))(this, a1);
	}
};
