#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D0E016D534726898;

#define CLASS_1_D0E016D534726898___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C01F0)
#define CLASS_1_D0E016D534726898___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C0230)
#define CLASS_1_D0E016D534726898___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A5C0240)

inline static constexpr unsigned int Class_1_D0E016D534726898___c_TypeDefinitionIndex = 31096;

class Class_1_D0E016D534726898___c : public ::System::Object
{
public:
	static ::Class_1_D0E016D534726898___c** StaticGet___9()
	{
		return (::Class_1_D0E016D534726898___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0E016D534726898___c_TypeDefinitionIndex)->GetStaticField(0x17BA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0E016D534726898___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E016D534726898___C__CTOR_OFFSET))(this);
	}

	::Class_1_D0E016D534726898* __cctor_b__48_0()
	{
		return ((::Class_1_D0E016D534726898*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E016D534726898___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
