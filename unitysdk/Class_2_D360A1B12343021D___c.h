#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4544004F26734BD_102;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D360A1B12343021D___C_METHOD_1_8043D7822E94644D_OFFSET UNITYSDK_OFFSET(0x1250EA70)
#define CLASS_2_D360A1B12343021D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1250EA20)
#define CLASS_2_D360A1B12343021D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1250EA60)

inline static constexpr unsigned int Class_2_D360A1B12343021D___c_TypeDefinitionIndex = 48239;

class Class_2_D360A1B12343021D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_C4544004F26734BD_102*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_1_C4544004F26734BD_102*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D360A1B12343021D___c_TypeDefinitionIndex)->GetStaticField(0x45E30);
	}
	static ::Class_2_D360A1B12343021D___c** StaticGet___9()
	{
		return (::Class_2_D360A1B12343021D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D360A1B12343021D___c_TypeDefinitionIndex)->GetStaticField(0x45E38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D360A1B12343021D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D360A1B12343021D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8043D7822E94644D(::Class_1_C4544004F26734BD_102* a1, ::Class_1_C4544004F26734BD_102* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C4544004F26734BD_102*, ::Class_1_C4544004F26734BD_102*))((::PBYTE)hIl2Cpp + CLASS_2_D360A1B12343021D___C_METHOD_1_8043D7822E94644D_OFFSET))(this, a1, a2);
	}
};
