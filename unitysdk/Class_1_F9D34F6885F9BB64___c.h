#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9D34F6885F9BB64;

#define CLASS_1_F9D34F6885F9BB64___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E296E80)
#define CLASS_1_F9D34F6885F9BB64___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E296EB0)
#define CLASS_1_F9D34F6885F9BB64___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E296EC0)

inline static constexpr unsigned int Class_1_F9D34F6885F9BB64___c_TypeDefinitionIndex = 33127;

class Class_1_F9D34F6885F9BB64___c : public ::System::Object
{
public:
	static ::Class_1_F9D34F6885F9BB64___c** StaticGet___9()
	{
		return (::Class_1_F9D34F6885F9BB64___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9D34F6885F9BB64___c_TypeDefinitionIndex)->GetStaticField(0x50240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64___C__CTOR_OFFSET))(this);
	}

	::Class_1_F9D34F6885F9BB64* __cctor_b__32_0()
	{
		return ((::Class_1_F9D34F6885F9BB64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64___C___CCTOR_B__32_0_OFFSET))(this);
	}
};
