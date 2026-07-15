#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9A024DE866AAE534;

#define CLASS_1_9A024DE866AAE534___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8C1730)
#define CLASS_1_9A024DE866AAE534___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C1760)
#define CLASS_1_9A024DE866AAE534___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1C8C1770)

inline static constexpr unsigned int Class_1_9A024DE866AAE534___c_TypeDefinitionIndex = 24516;

class Class_1_9A024DE866AAE534___c : public ::System::Object
{
public:
	static ::Class_1_9A024DE866AAE534___c** StaticGet___9()
	{
		return (::Class_1_9A024DE866AAE534___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A024DE866AAE534___c_TypeDefinitionIndex)->GetStaticField(0x4C680);
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
