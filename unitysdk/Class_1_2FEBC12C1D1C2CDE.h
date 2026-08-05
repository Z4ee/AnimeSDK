#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79098BC9B0AF0D6E;
template <typename T> class Class_1_2F25331DD33F900A;

#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1F6DAAC0)
#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_831B14EB1B5EE562_OFFSET UNITYSDK_OFFSET(0x1F6DAB70)
#define CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6DAA60)

inline static constexpr unsigned int Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex = 29384;

class Class_1_2FEBC12C1D1C2CDE : public ::System::Object
{
public:
	static ::Class_1_2F25331DD33F900A<::Class_1_79098BC9B0AF0D6E*>** StaticGet_Field_1_0()
	{
		return (::Class_1_2F25331DD33F900A<::Class_1_79098BC9B0AF0D6E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex)->GetStaticField(0x24B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET))();
	}

	static ::Class_1_79098BC9B0AF0D6E* Method_1_831B14EB1B5EE562()
	{
		return ((::Class_1_79098BC9B0AF0D6E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_831B14EB1B5EE562_OFFSET))();
	}
};
