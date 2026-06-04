#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF001F1F4539E7CD;

#define CLASS_1_BF001F1F4539E7CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8FD720)
#define CLASS_1_BF001F1F4539E7CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FD760)
#define CLASS_1_BF001F1F4539E7CD___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1A8FD770)

inline static constexpr unsigned int Class_1_BF001F1F4539E7CD___c_TypeDefinitionIndex = 26008;

class Class_1_BF001F1F4539E7CD___c : public ::System::Object
{
public:
	static ::Class_1_BF001F1F4539E7CD___c** StaticGet___9()
	{
		return (::Class_1_BF001F1F4539E7CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF001F1F4539E7CD___c_TypeDefinitionIndex)->GetStaticField(0x60D70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF001F1F4539E7CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF001F1F4539E7CD___C__CTOR_OFFSET))(this);
	}

	::Class_1_BF001F1F4539E7CD* __cctor_b__68_0()
	{
		return ((::Class_1_BF001F1F4539E7CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF001F1F4539E7CD___C___CCTOR_B__68_0_OFFSET))(this);
	}
};
