#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C1A562AF201E3725;

#define CLASS_1_C1A562AF201E3725___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A109640)
#define CLASS_1_C1A562AF201E3725___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A109670)
#define CLASS_1_C1A562AF201E3725___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1A109680)

inline static constexpr unsigned int Class_1_C1A562AF201E3725___c_TypeDefinitionIndex = 24156;

class Class_1_C1A562AF201E3725___c : public ::System::Object
{
public:
	static ::Class_1_C1A562AF201E3725___c** StaticGet___9()
	{
		return (::Class_1_C1A562AF201E3725___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A562AF201E3725___c_TypeDefinitionIndex)->GetStaticField(0x277F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725___C__CTOR_OFFSET))(this);
	}

	::Class_1_C1A562AF201E3725* __cctor_b__32_0()
	{
		return ((::Class_1_C1A562AF201E3725*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725___C___CCTOR_B__32_0_OFFSET))(this);
	}
};
