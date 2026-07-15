#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4486EA42F339872;

#define CLASS_1_E4486EA42F339872___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC422B0)
#define CLASS_1_E4486EA42F339872___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC422E0)
#define CLASS_1_E4486EA42F339872___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1CC422F0)

inline static constexpr unsigned int Class_1_E4486EA42F339872___c_TypeDefinitionIndex = 32422;

class Class_1_E4486EA42F339872___c : public ::System::Object
{
public:
	static ::Class_1_E4486EA42F339872___c** StaticGet___9()
	{
		return (::Class_1_E4486EA42F339872___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E4486EA42F339872___c_TypeDefinitionIndex)->GetStaticField(0x56330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E4486EA42F339872___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4486EA42F339872___C__CTOR_OFFSET))(this);
	}

	::Class_1_E4486EA42F339872* __cctor_b__43_0()
	{
		return ((::Class_1_E4486EA42F339872*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4486EA42F339872___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
