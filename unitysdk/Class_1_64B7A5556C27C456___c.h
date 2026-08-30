#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64B7A5556C27C456;

#define CLASS_1_64B7A5556C27C456___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA213A0)
#define CLASS_1_64B7A5556C27C456___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA213D0)
#define CLASS_1_64B7A5556C27C456___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DA213E0)

inline static constexpr unsigned int Class_1_64B7A5556C27C456___c_TypeDefinitionIndex = 26190;

class Class_1_64B7A5556C27C456___c : public ::System::Object
{
public:
	static ::Class_1_64B7A5556C27C456___c** StaticGet___9()
	{
		return (::Class_1_64B7A5556C27C456___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64B7A5556C27C456___c_TypeDefinitionIndex)->GetStaticField(0x1B3F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64B7A5556C27C456___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B7A5556C27C456___C__CTOR_OFFSET))(this);
	}

	::Class_1_64B7A5556C27C456* __cctor_b__68_0()
	{
		return ((::Class_1_64B7A5556C27C456*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B7A5556C27C456___C___CCTOR_B__68_0_OFFSET))(this);
	}
};
