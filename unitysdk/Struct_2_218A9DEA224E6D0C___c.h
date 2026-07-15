#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_218A9DEA224E6D0C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15497870)
#define STRUCT_2_218A9DEA224E6D0C___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x154978C0)
#define STRUCT_2_218A9DEA224E6D0C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154978B0)

inline static constexpr unsigned int Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex = 6877;

class Struct_2_218A9DEA224E6D0C___c : public ::System::Object
{
public:
	static ::Struct_2_218A9DEA224E6D0C___c** StaticGet___9()
	{
		return (::Struct_2_218A9DEA224E6D0C___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex)->GetStaticField(0x3320);
	}
	static ::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_218A9DEA224E6D0C___c_TypeDefinitionIndex)->GetStaticField(0x3328);
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
