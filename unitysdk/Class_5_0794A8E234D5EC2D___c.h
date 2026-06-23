#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_0794A8E234D5EC2D___C_METHOD_1_AA8489A3F0200DCE_OFFSET UNITYSDK_OFFSET(0x179D9990)
#define CLASS_5_0794A8E234D5EC2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D9940)
#define CLASS_5_0794A8E234D5EC2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179D9980)

inline static constexpr unsigned int Class_5_0794A8E234D5EC2D___c_TypeDefinitionIndex = 73667;

class Class_5_0794A8E234D5EC2D___c : public ::System::Object
{
public:
	static ::Class_5_0794A8E234D5EC2D___c** StaticGet___9()
	{
		return (::Class_5_0794A8E234D5EC2D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_0794A8E234D5EC2D___c_TypeDefinitionIndex)->GetStaticField(0x3BDC0);
	}
	static ::System::Func_2<::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_0794A8E234D5EC2D___c_TypeDefinitionIndex)->GetStaticField(0x3BDC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_AA8489A3F0200DCE(::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D___C_METHOD_1_AA8489A3F0200DCE_OFFSET))(this, a1);
	}
};
