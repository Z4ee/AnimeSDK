#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define STRUCT_2_9BF8902D61AE1796___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19214D90)
#define STRUCT_2_9BF8902D61AE1796___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x19214DD0)
#define STRUCT_2_9BF8902D61AE1796___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19214DC0)

inline static constexpr unsigned int Struct_2_9BF8902D61AE1796___c_TypeDefinitionIndex = 8950;

class Struct_2_9BF8902D61AE1796___c : public ::System::Object
{
public:
	static ::Struct_2_9BF8902D61AE1796___c** StaticGet___9()
	{
		return (::Struct_2_9BF8902D61AE1796___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9BF8902D61AE1796___c_TypeDefinitionIndex)->GetStaticField(0x3FAF0);
	}
	static ::System::Action_1<::Struct_2_6C64084003D66585>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Struct_2_6C64084003D66585>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9BF8902D61AE1796___c_TypeDefinitionIndex)->GetStaticField(0x3FAF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796___C__CTOR_OFFSET))(this);
	}

	::System::Void _Create_b__6_0(::Struct_2_6C64084003D66585 e)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6C64084003D66585))((::PBYTE)hIl2Cpp + STRUCT_2_9BF8902D61AE1796___C__CREATE_B__6_0_OFFSET))(this, e);
	}
};
