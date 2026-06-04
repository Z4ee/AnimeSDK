#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB022F959632208C;

#define CLASS_1_384338DD03F999FE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AAD850)
#define CLASS_1_384338DD03F999FE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAD890)
#define CLASS_1_384338DD03F999FE___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x18AAD8A0)

inline static constexpr unsigned int Class_1_384338DD03F999FE___c_TypeDefinitionIndex = 34683;

class Class_1_384338DD03F999FE___c : public ::System::Object
{
public:
	static ::Class_1_384338DD03F999FE___c** StaticGet___9()
	{
		return (::Class_1_384338DD03F999FE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_384338DD03F999FE___c_TypeDefinitionIndex)->GetStaticField(0x58930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__8_0(::Class_1_BB022F959632208C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB022F959632208C*))((::PBYTE)hIl2Cpp + CLASS_1_384338DD03F999FE___C___CCTOR_B__8_0_OFFSET))(this, a1);
	}
};
