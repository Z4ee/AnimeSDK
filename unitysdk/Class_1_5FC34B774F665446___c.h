#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FC34B774F665446;

#define CLASS_1_5FC34B774F665446___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA776C0)
#define CLASS_1_5FC34B774F665446___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA77700)
#define CLASS_1_5FC34B774F665446___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EA77710)

inline static constexpr unsigned int Class_1_5FC34B774F665446___c_TypeDefinitionIndex = 26295;

class Class_1_5FC34B774F665446___c : public ::System::Object
{
public:
	static ::Class_1_5FC34B774F665446___c** StaticGet___9()
	{
		return (::Class_1_5FC34B774F665446___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FC34B774F665446___c_TypeDefinitionIndex)->GetStaticField(0x5C000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FC34B774F665446___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FC34B774F665446___C__CTOR_OFFSET))(this);
	}

	::Class_1_5FC34B774F665446* __cctor_b__48_0()
	{
		return ((::Class_1_5FC34B774F665446*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FC34B774F665446___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
