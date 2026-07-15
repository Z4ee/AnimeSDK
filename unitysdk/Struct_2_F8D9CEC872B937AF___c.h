#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define STRUCT_2_F8D9CEC872B937AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BC7790)
#define STRUCT_2_F8D9CEC872B937AF___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x14BC77D0)
#define STRUCT_2_F8D9CEC872B937AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC77C0)

inline static constexpr unsigned int Struct_2_F8D9CEC872B937AF___c_TypeDefinitionIndex = 6819;

class Struct_2_F8D9CEC872B937AF___c : public ::System::Object
{
public:
	static ::System::Action_1<::Struct_2_6C64084003D66585>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Struct_2_6C64084003D66585>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F8D9CEC872B937AF___c_TypeDefinitionIndex)->GetStaticField(0x4E90);
	}
	static ::Struct_2_F8D9CEC872B937AF___c** StaticGet___9()
	{
		return (::Struct_2_F8D9CEC872B937AF___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F8D9CEC872B937AF___c_TypeDefinitionIndex)->GetStaticField(0x4E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF___C__CTOR_OFFSET))(this);
	}

	::System::Void _Create_b__6_0(::Struct_2_6C64084003D66585 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6C64084003D66585))((::PBYTE)hIl2Cpp + STRUCT_2_F8D9CEC872B937AF___C__CREATE_B__6_0_OFFSET))(this, a1);
	}
};
