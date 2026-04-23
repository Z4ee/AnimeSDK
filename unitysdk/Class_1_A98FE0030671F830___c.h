#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A98FE0030671F830;

#define CLASS_1_A98FE0030671F830___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192E8F80)
#define CLASS_1_A98FE0030671F830___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192E8FC0)
#define CLASS_1_A98FE0030671F830___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x192E8FD0)

inline static constexpr unsigned int Class_1_A98FE0030671F830___c_TypeDefinitionIndex = 27317;

class Class_1_A98FE0030671F830___c : public ::System::Object
{
public:
	static ::Class_1_A98FE0030671F830___c** StaticGet___9()
	{
		return (::Class_1_A98FE0030671F830___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A98FE0030671F830___c_TypeDefinitionIndex)->GetStaticField(0x5CB50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830___C__CTOR_OFFSET))(this);
	}

	::Class_1_A98FE0030671F830* __cctor_b__28_0()
	{
		return ((::Class_1_A98FE0030671F830*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A98FE0030671F830___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
