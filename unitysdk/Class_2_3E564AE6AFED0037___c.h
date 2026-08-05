#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AD0F04FBDA050988.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_3E564AE6AFED0037___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x10F89D50)
#define CLASS_2_3E564AE6AFED0037___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F89D00)
#define CLASS_2_3E564AE6AFED0037___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F89D40)

inline static constexpr unsigned int Class_2_3E564AE6AFED0037___c_TypeDefinitionIndex = 84798;

class Class_2_3E564AE6AFED0037___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Struct_2_AD0F04FBDA050988>** StaticGet___9__23_0()
	{
		return (::System::Comparison_1<::Struct_2_AD0F04FBDA050988>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E564AE6AFED0037___c_TypeDefinitionIndex)->GetStaticField(0x3C5D0);
	}
	static ::Class_2_3E564AE6AFED0037___c** StaticGet___9()
	{
		return (::Class_2_3E564AE6AFED0037___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E564AE6AFED0037___c_TypeDefinitionIndex)->GetStaticField(0x3C5D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E564AE6AFED0037___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E564AE6AFED0037___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_AD0F04FBDA050988 a1, ::Struct_2_AD0F04FBDA050988 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_AD0F04FBDA050988, ::Struct_2_AD0F04FBDA050988))((::PBYTE)hIl2Cpp + CLASS_2_3E564AE6AFED0037___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
