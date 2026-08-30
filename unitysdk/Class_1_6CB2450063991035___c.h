#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB2450063991035;

#define CLASS_1_6CB2450063991035___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7BF0)
#define CLASS_1_6CB2450063991035___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7C30)
#define CLASS_1_6CB2450063991035___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDC7C40)

inline static constexpr unsigned int Class_1_6CB2450063991035___c_TypeDefinitionIndex = 26077;

class Class_1_6CB2450063991035___c : public ::System::Object
{
public:
	static ::Class_1_6CB2450063991035___c** StaticGet___9()
	{
		return (::Class_1_6CB2450063991035___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035___c_TypeDefinitionIndex)->GetStaticField(0x1E820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035___C__CTOR_OFFSET))(this);
	}

	::Class_1_6CB2450063991035* __cctor_b__33_0()
	{
		return ((::Class_1_6CB2450063991035*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
