#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8FCA304455C313FC;

#define CLASS_1_8FCA304455C313FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B40BF0)
#define CLASS_1_8FCA304455C313FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B40C30)
#define CLASS_1_8FCA304455C313FC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x19B40C40)

inline static constexpr unsigned int Class_1_8FCA304455C313FC___c_TypeDefinitionIndex = 25135;

class Class_1_8FCA304455C313FC___c : public ::System::Object
{
public:
	static ::Class_1_8FCA304455C313FC___c** StaticGet___9()
	{
		return (::Class_1_8FCA304455C313FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8FCA304455C313FC___c_TypeDefinitionIndex)->GetStaticField(0x63460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC___C__CTOR_OFFSET))(this);
	}

	::Class_1_8FCA304455C313FC* __cctor_b__33_0()
	{
		return ((::Class_1_8FCA304455C313FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
