#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D5B39CC94761152A;

#define CLASS_1_D5B39CC94761152A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C46B690)
#define CLASS_1_D5B39CC94761152A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46B6C0)
#define CLASS_1_D5B39CC94761152A___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C46B6D0)

inline static constexpr unsigned int Class_1_D5B39CC94761152A___c_TypeDefinitionIndex = 30708;

class Class_1_D5B39CC94761152A___c : public ::System::Object
{
public:
	static ::Class_1_D5B39CC94761152A___c** StaticGet___9()
	{
		return (::Class_1_D5B39CC94761152A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5B39CC94761152A___c_TypeDefinitionIndex)->GetStaticField(0x10100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C__CTOR_OFFSET))(this);
	}

	::Class_1_D5B39CC94761152A* __cctor_b__43_0()
	{
		return ((::Class_1_D5B39CC94761152A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
