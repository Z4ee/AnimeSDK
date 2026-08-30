#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8DE318908313772;

#define CLASS_1_B8DE318908313772___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28F0D0)
#define CLASS_1_B8DE318908313772___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28F110)
#define CLASS_1_B8DE318908313772___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E28F120)

inline static constexpr unsigned int Class_1_B8DE318908313772___c_TypeDefinitionIndex = 29156;

class Class_1_B8DE318908313772___c : public ::System::Object
{
public:
	static ::Class_1_B8DE318908313772___c** StaticGet___9()
	{
		return (::Class_1_B8DE318908313772___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8DE318908313772___c_TypeDefinitionIndex)->GetStaticField(0x53E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8DE318908313772___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8DE318908313772___C__CTOR_OFFSET))(this);
	}

	::Class_1_B8DE318908313772* __cctor_b__43_0()
	{
		return ((::Class_1_B8DE318908313772*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8DE318908313772___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
