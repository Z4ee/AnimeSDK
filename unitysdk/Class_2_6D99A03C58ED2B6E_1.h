#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3D0C07370D7EA03.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_475.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_6D99A03C58ED2B6E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1730DEF0)
#define CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1730DEE0)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_1_TypeDefinitionIndex = 11185;

class Class_2_6D99A03C58ED2B6E_1 : public ::Class_1_A3D0C07370D7EA03
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D99A03C58ED2B6E_1_TypeDefinitionIndex)->GetStaticField(0x43D0);
	}

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_475 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_475, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1__CCTOR_OFFSET))();
	}
};
