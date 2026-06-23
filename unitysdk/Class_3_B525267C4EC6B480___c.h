#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_B525267C4EC6B480___C_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x153E7A60)
#define CLASS_3_B525267C4EC6B480___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153E7A10)
#define CLASS_3_B525267C4EC6B480___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153E7A50)

inline static constexpr unsigned int Class_3_B525267C4EC6B480___c_TypeDefinitionIndex = 40427;

class Class_3_B525267C4EC6B480___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B525267C4EC6B480___c_TypeDefinitionIndex)->GetStaticField(0x4AC70);
	}
	static ::Class_3_B525267C4EC6B480___c** StaticGet___9()
	{
		return (::Class_3_B525267C4EC6B480___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B525267C4EC6B480___c_TypeDefinitionIndex)->GetStaticField(0x4AC78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B525267C4EC6B480___C_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
