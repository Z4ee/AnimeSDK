#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B0536AF7AC38558;

#define CLASS_1_3B0536AF7AC38558___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA16100)
#define CLASS_1_3B0536AF7AC38558___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16140)
#define CLASS_1_3B0536AF7AC38558___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DA16150)

inline static constexpr unsigned int Class_1_3B0536AF7AC38558___c_TypeDefinitionIndex = 32880;

class Class_1_3B0536AF7AC38558___c : public ::System::Object
{
public:
	static ::Class_1_3B0536AF7AC38558___c** StaticGet___9()
	{
		return (::Class_1_3B0536AF7AC38558___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B0536AF7AC38558___c_TypeDefinitionIndex)->GetStaticField(0x19730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B0536AF7AC38558___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B0536AF7AC38558___C__CTOR_OFFSET))(this);
	}

	::Class_1_3B0536AF7AC38558* __cctor_b__43_0()
	{
		return ((::Class_1_3B0536AF7AC38558*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B0536AF7AC38558___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
