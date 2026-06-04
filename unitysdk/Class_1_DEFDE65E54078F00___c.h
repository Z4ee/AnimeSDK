#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DEFDE65E54078F00;

#define CLASS_1_DEFDE65E54078F00___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A551D40)
#define CLASS_1_DEFDE65E54078F00___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A551D80)
#define CLASS_1_DEFDE65E54078F00___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1A551D90)

inline static constexpr unsigned int Class_1_DEFDE65E54078F00___c_TypeDefinitionIndex = 25151;

class Class_1_DEFDE65E54078F00___c : public ::System::Object
{
public:
	static ::Class_1_DEFDE65E54078F00___c** StaticGet___9()
	{
		return (::Class_1_DEFDE65E54078F00___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEFDE65E54078F00___c_TypeDefinitionIndex)->GetStaticField(0x122C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEFDE65E54078F00___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEFDE65E54078F00___C__CTOR_OFFSET))(this);
	}

	::Class_1_DEFDE65E54078F00* __cctor_b__32_0()
	{
		return ((::Class_1_DEFDE65E54078F00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEFDE65E54078F00___C___CCTOR_B__32_0_OFFSET))(this);
	}
};
