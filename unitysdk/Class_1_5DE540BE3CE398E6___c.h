#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DE540BE3CE398E6;

#define CLASS_1_5DE540BE3CE398E6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD994B0)
#define CLASS_1_5DE540BE3CE398E6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD994F0)
#define CLASS_1_5DE540BE3CE398E6___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DD99500)

inline static constexpr unsigned int Class_1_5DE540BE3CE398E6___c_TypeDefinitionIndex = 26055;

class Class_1_5DE540BE3CE398E6___c : public ::System::Object
{
public:
	static ::Class_1_5DE540BE3CE398E6___c** StaticGet___9()
	{
		return (::Class_1_5DE540BE3CE398E6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5DE540BE3CE398E6___c_TypeDefinitionIndex)->GetStaticField(0x408C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DE540BE3CE398E6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DE540BE3CE398E6___C__CTOR_OFFSET))(this);
	}

	::Class_1_5DE540BE3CE398E6* __cctor_b__43_0()
	{
		return ((::Class_1_5DE540BE3CE398E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DE540BE3CE398E6___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
