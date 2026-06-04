#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C108C82C095C1A03;

#define CLASS_1_C108C82C095C1A03___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAD1850)
#define CLASS_1_C108C82C095C1A03___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD1880)
#define CLASS_1_C108C82C095C1A03___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1AAD1890)

inline static constexpr unsigned int Class_1_C108C82C095C1A03___c_TypeDefinitionIndex = 31729;

class Class_1_C108C82C095C1A03___c : public ::System::Object
{
public:
	static ::Class_1_C108C82C095C1A03___c** StaticGet___9()
	{
		return (::Class_1_C108C82C095C1A03___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C108C82C095C1A03___c_TypeDefinitionIndex)->GetStaticField(0x10C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C108C82C095C1A03___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C108C82C095C1A03___C__CTOR_OFFSET))(this);
	}

	::Class_1_C108C82C095C1A03* __cctor_b__83_0()
	{
		return ((::Class_1_C108C82C095C1A03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C108C82C095C1A03___C___CCTOR_B__83_0_OFFSET))(this);
	}
};
