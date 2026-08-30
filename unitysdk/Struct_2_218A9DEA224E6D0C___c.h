#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_218A9DEA224E6D0C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D710FD0)
#define STRUCT_2_218A9DEA224E6D0C___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1D711020)
#define STRUCT_2_218A9DEA224E6D0C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D711010)

inline static constexpr unsigned int Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex = 6489;

class Struct_2_218A9DEA224E6D0C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex)->GetStaticField(0x1B410);
	}
	static ::Struct_2_218A9DEA224E6D0C___c** StaticGet___9()
	{
		return (::Struct_2_218A9DEA224E6D0C___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex)->GetStaticField(0x1B418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C___C__CTOR_OFFSET))(this);
	}

	::Struct_2_3906C24C646CC83F _Create_b__11_0(::Struct_2_6C64084003D66585 a1)
	{
		return ((::Struct_2_3906C24C646CC83F(*)(::PVOID, ::Struct_2_6C64084003D66585))((::PBYTE)hIl2Cpp + STRUCT_2_218A9DEA224E6D0C___C__CREATE_B__11_0_OFFSET))(this, a1);
	}
};
