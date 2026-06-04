#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A98FE0030671F830;

#define CLASS_1_A98FE0030671F830___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB023D0)
#define CLASS_1_A98FE0030671F830___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB02410)
#define CLASS_1_A98FE0030671F830___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1AB02420)

inline static constexpr unsigned int Class_1_A98FE0030671F830___c_TypeDefinitionIndex = 27290;

class Class_1_A98FE0030671F830___c : public ::System::Object
{
public:
	static ::Class_1_A98FE0030671F830___c** StaticGet___9()
	{
		return (::Class_1_A98FE0030671F830___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A98FE0030671F830___c_TypeDefinitionIndex)->GetStaticField(0x14F90);
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
