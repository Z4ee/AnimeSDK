#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_895EC44CA440294E;

#define CLASS_1_895EC44CA440294E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE53620)
#define CLASS_1_895EC44CA440294E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE53650)
#define CLASS_1_895EC44CA440294E___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE53660)

inline static constexpr unsigned int Class_1_895EC44CA440294E___c_TypeDefinitionIndex = 32635;

class Class_1_895EC44CA440294E___c : public ::System::Object
{
public:
	static ::Class_1_895EC44CA440294E___c** StaticGet___9()
	{
		return (::Class_1_895EC44CA440294E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_895EC44CA440294E___c_TypeDefinitionIndex)->GetStaticField(0x2F600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_895EC44CA440294E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895EC44CA440294E___C__CTOR_OFFSET))(this);
	}

	::Class_1_895EC44CA440294E* __cctor_b__43_0()
	{
		return ((::Class_1_895EC44CA440294E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895EC44CA440294E___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
