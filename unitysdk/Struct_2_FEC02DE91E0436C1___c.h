#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_FEC02DE91E0436C1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A541B0)
#define STRUCT_2_FEC02DE91E0436C1___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x17A54200)
#define STRUCT_2_FEC02DE91E0436C1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A541F0)

inline static constexpr unsigned int Struct_2_FEC02DE91E0436C1___c_TypeDefinitionIndex = 8812;

class Struct_2_FEC02DE91E0436C1___c : public ::System::Object
{
public:
	static ::Struct_2_FEC02DE91E0436C1___c** StaticGet___9()
	{
		return (::Struct_2_FEC02DE91E0436C1___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FEC02DE91E0436C1___c_TypeDefinitionIndex)->GetStaticField(0x1F440);
	}
	static ::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Struct_2_6C64084003D66585, ::Struct_2_3906C24C646CC83F>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FEC02DE91E0436C1___c_TypeDefinitionIndex)->GetStaticField(0x1F448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1___C__CTOR_OFFSET))(this);
	}

	::Struct_2_3906C24C646CC83F _Create_b__11_0(::Struct_2_6C64084003D66585 e)
	{
		return ((::Struct_2_3906C24C646CC83F(*)(::PVOID, ::Struct_2_6C64084003D66585))((::PBYTE)hIl2Cpp + STRUCT_2_FEC02DE91E0436C1___C__CREATE_B__11_0_OFFSET))(this, e);
	}
};
