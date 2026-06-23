#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00;
class Class_2_44A4A8D0EA003DD8_Class_2_AC11ADB8E790E083;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_82F1E9B6EF1BCA84___C_METHOD_1_0EBC9C1FADBA4159_OFFSET UNITYSDK_OFFSET(0x1879E250)
#define CLASS_1_82F1E9B6EF1BCA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879E200)
#define CLASS_1_82F1E9B6EF1BCA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1879E240)

inline static constexpr unsigned int Class_1_82F1E9B6EF1BCA84___c_TypeDefinitionIndex = 45749;

class Class_1_82F1E9B6EF1BCA84___c : public ::System::Object
{
public:
	static ::Class_1_82F1E9B6EF1BCA84___c** StaticGet___9()
	{
		return (::Class_1_82F1E9B6EF1BCA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82F1E9B6EF1BCA84___c_TypeDefinitionIndex)->GetStaticField(0x36870);
	}
	static ::System::Func_2<::Class_2_44A4A8D0EA003DD8_Class_2_AC11ADB8E790E083*, ::Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_2_44A4A8D0EA003DD8_Class_2_AC11ADB8E790E083*, ::Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82F1E9B6EF1BCA84___c_TypeDefinitionIndex)->GetStaticField(0x36878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84___C__CTOR_OFFSET))(this);
	}

	::Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00* Method_1_0EBC9C1FADBA4159(::Class_2_44A4A8D0EA003DD8_Class_2_AC11ADB8E790E083* a1)
	{
		return ((::Class_1_82F1E9B6EF1BCA84_Class_1_DF3984ACD9BFBD00*(*)(::PVOID, ::Class_2_44A4A8D0EA003DD8_Class_2_AC11ADB8E790E083*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84___C_METHOD_1_0EBC9C1FADBA4159_OFFSET))(this, a1);
	}
};
