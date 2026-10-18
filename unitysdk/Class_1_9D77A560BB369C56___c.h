#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D77A560BB369C56;

#define CLASS_1_9D77A560BB369C56___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF99B0)
#define CLASS_1_9D77A560BB369C56___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF99E0)
#define CLASS_1_9D77A560BB369C56___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1DEF99F0)

inline static constexpr unsigned int Class_1_9D77A560BB369C56___c_TypeDefinitionIndex = 33629;

class Class_1_9D77A560BB369C56___c : public ::System::Object
{
public:
	static ::Class_1_9D77A560BB369C56___c** StaticGet___9()
	{
		return (::Class_1_9D77A560BB369C56___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D77A560BB369C56___c_TypeDefinitionIndex)->GetStaticField(0x31D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D77A560BB369C56___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D77A560BB369C56___C__CTOR_OFFSET))(this);
	}

	::Class_1_9D77A560BB369C56* __cctor_b__46_0()
	{
		return ((::Class_1_9D77A560BB369C56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D77A560BB369C56___C___CCTOR_B__46_0_OFFSET))(this);
	}
};
