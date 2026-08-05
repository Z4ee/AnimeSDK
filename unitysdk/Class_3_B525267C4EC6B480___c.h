#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_B525267C4EC6B480___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x1569EE50)
#define CLASS_3_B525267C4EC6B480___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569EE00)
#define CLASS_3_B525267C4EC6B480___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1569EE40)

inline static constexpr unsigned int Class_3_B525267C4EC6B480___c_TypeDefinitionIndex = 52792;

class Class_3_B525267C4EC6B480___c : public ::System::Object
{
public:
	static ::Class_3_B525267C4EC6B480___c** StaticGet___9()
	{
		return (::Class_3_B525267C4EC6B480___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B525267C4EC6B480___c_TypeDefinitionIndex)->GetStaticField(0x2D8F0);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B525267C4EC6B480___c_TypeDefinitionIndex)->GetStaticField(0x2D8F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}
};
