#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC61D5E9B843CFF;

#define CLASS_1_4AC61D5E9B843CFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197261B0)
#define CLASS_1_4AC61D5E9B843CFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197261F0)
#define CLASS_1_4AC61D5E9B843CFF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x19726200)

inline static constexpr unsigned int Class_1_4AC61D5E9B843CFF___c_TypeDefinitionIndex = 32240;

class Class_1_4AC61D5E9B843CFF___c : public ::System::Object
{
public:
	static ::Class_1_4AC61D5E9B843CFF___c** StaticGet___9()
	{
		return (::Class_1_4AC61D5E9B843CFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AC61D5E9B843CFF___c_TypeDefinitionIndex)->GetStaticField(0x53010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF___C__CTOR_OFFSET))(this);
	}

	::Class_1_4AC61D5E9B843CFF* __cctor_b__43_0()
	{
		return ((::Class_1_4AC61D5E9B843CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC61D5E9B843CFF___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
