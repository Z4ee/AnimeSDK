#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C67E04B50EC007FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7669D0)
#define CLASS_1_C67E04B50EC007FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E766A10)
#define CLASS_1_C67E04B50EC007FC___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E766A20)

inline static constexpr unsigned int Class_1_C67E04B50EC007FC___c_TypeDefinitionIndex = 42449;

class Class_1_C67E04B50EC007FC___c : public ::System::Object
{
public:
	static ::Class_1_C67E04B50EC007FC___c** StaticGet___9()
	{
		return (::Class_1_C67E04B50EC007FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C67E04B50EC007FC___c_TypeDefinitionIndex)->GetStaticField(0x60470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C67E04B50EC007FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67E04B50EC007FC___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::R3::Result a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + CLASS_1_C67E04B50EC007FC___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}
};
