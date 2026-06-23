#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3D0C07370D7EA03.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_178.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_6D99A03C58ED2B6E_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16473B50)
#define CLASS_2_6D99A03C58ED2B6E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x16473B40)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_4_TypeDefinitionIndex = 10716;

class Class_2_6D99A03C58ED2B6E_4 : public ::Class_1_A3D0C07370D7EA03
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D99A03C58ED2B6E_4_TypeDefinitionIndex)->GetStaticField(0x3E70);
	}

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_178 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_178, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_4__CCTOR_OFFSET))();
	}
};
