#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DEF6B8E2ED2D1FB3_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_32D8C20D46CEFA3D_1___C_METHOD_1_E9E96B2AFFE21245_OFFSET UNITYSDK_OFFSET(0x1185CE90)
#define STRUCT_2_32D8C20D46CEFA3D_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1185CE40)
#define STRUCT_2_32D8C20D46CEFA3D_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1185CE80)

inline static constexpr unsigned int Struct_2_32D8C20D46CEFA3D_1___c_TypeDefinitionIndex = 80042;

class Struct_2_32D8C20D46CEFA3D_1___c : public ::System::Object
{
public:
	static ::Struct_2_32D8C20D46CEFA3D_1___c** StaticGet___9()
	{
		return (::Struct_2_32D8C20D46CEFA3D_1___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_32D8C20D46CEFA3D_1___c_TypeDefinitionIndex)->GetStaticField(0x341D0);
	}
	static ::System::Func_2<::Class_3_DEF6B8E2ED2D1FB3_1*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_3_DEF6B8E2ED2D1FB3_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_32D8C20D46CEFA3D_1___c_TypeDefinitionIndex)->GetStaticField(0x341D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_32D8C20D46CEFA3D_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32D8C20D46CEFA3D_1___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_E9E96B2AFFE21245(::Class_3_DEF6B8E2ED2D1FB3_1* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3_1*))((::PBYTE)hIl2Cpp + STRUCT_2_32D8C20D46CEFA3D_1___C_METHOD_1_E9E96B2AFFE21245_OFFSET))(this, a1);
	}
};
