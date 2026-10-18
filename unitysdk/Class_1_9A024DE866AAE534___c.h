#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9A024DE866AAE534;

#define CLASS_1_9A024DE866AAE534___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24B4E0)
#define CLASS_1_9A024DE866AAE534___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24B510)
#define CLASS_1_9A024DE866AAE534___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E24B520)

inline static constexpr unsigned int Class_1_9A024DE866AAE534___c_TypeDefinitionIndex = 25436;

class Class_1_9A024DE866AAE534___c : public ::System::Object
{
public:
	static ::Class_1_9A024DE866AAE534___c** StaticGet___9()
	{
		return (::Class_1_9A024DE866AAE534___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534___c_TypeDefinitionIndex)->GetStaticField(0x3D0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534___C__CTOR_OFFSET))(this);
	}

	::Class_1_9A024DE866AAE534* __cctor_b__68_0()
	{
		return ((::Class_1_9A024DE866AAE534*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A024DE866AAE534___C___CCTOR_B__68_0_OFFSET))(this);
	}
};
