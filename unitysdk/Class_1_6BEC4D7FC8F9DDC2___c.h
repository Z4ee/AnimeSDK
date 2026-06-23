#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6BEC4D7FC8F9DDC2___C_METHOD_1_4458DC56A49A73B1_OFFSET UNITYSDK_OFFSET(0x168EE750)
#define CLASS_1_6BEC4D7FC8F9DDC2___C_METHOD_1_B48ACF2E47BD1E24_OFFSET UNITYSDK_OFFSET(0x168EE760)
#define CLASS_1_6BEC4D7FC8F9DDC2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168EE700)
#define CLASS_1_6BEC4D7FC8F9DDC2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168EE740)

inline static constexpr unsigned int Class_1_6BEC4D7FC8F9DDC2___c_TypeDefinitionIndex = 57291;

class Class_1_6BEC4D7FC8F9DDC2___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BEC4D7FC8F9DDC2___c_TypeDefinitionIndex)->GetStaticField(0x42090);
	}
	static ::System::Func_2<::Struct_2_3659D99D9E0DCBB9, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::Struct_2_3659D99D9E0DCBB9, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BEC4D7FC8F9DDC2___c_TypeDefinitionIndex)->GetStaticField(0x42098);
	}
	static ::Class_1_6BEC4D7FC8F9DDC2___c** StaticGet___9()
	{
		return (::Class_1_6BEC4D7FC8F9DDC2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BEC4D7FC8F9DDC2___c_TypeDefinitionIndex)->GetStaticField(0x420A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BEC4D7FC8F9DDC2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BEC4D7FC8F9DDC2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4458DC56A49A73B1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BEC4D7FC8F9DDC2___C_METHOD_1_4458DC56A49A73B1_OFFSET))(this, a1);
	}

	::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 Method_1_B48ACF2E47BD1E24(::Struct_2_3659D99D9E0DCBB9 a1)
	{
		return ((::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9))((::PBYTE)hIl2Cpp + CLASS_1_6BEC4D7FC8F9DDC2___C_METHOD_1_B48ACF2E47BD1E24_OFFSET))(this, a1);
	}
};
