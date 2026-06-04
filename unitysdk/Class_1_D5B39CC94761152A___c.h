#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D5B39CC94761152A;

#define CLASS_1_D5B39CC94761152A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A02D520)
#define CLASS_1_D5B39CC94761152A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02D550)
#define CLASS_1_D5B39CC94761152A___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A02D560)

inline static constexpr unsigned int Class_1_D5B39CC94761152A___c_TypeDefinitionIndex = 32162;

class Class_1_D5B39CC94761152A___c : public ::System::Object
{
public:
	static ::Class_1_D5B39CC94761152A___c** StaticGet___9()
	{
		return (::Class_1_D5B39CC94761152A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5B39CC94761152A___c_TypeDefinitionIndex)->GetStaticField(0x2C460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C__CTOR_OFFSET))(this);
	}

	::Class_1_D5B39CC94761152A* __cctor_b__38_0()
	{
		return ((::Class_1_D5B39CC94761152A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5B39CC94761152A___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
