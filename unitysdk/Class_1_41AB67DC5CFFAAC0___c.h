#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_41AB67DC5CFFAAC0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18899D30)
#define CLASS_1_41AB67DC5CFFAAC0___C__CONVERTTOBINARYFORMAT_B__1_0_OFFSET UNITYSDK_OFFSET(0x18899D80)
#define CLASS_1_41AB67DC5CFFAAC0___C__CONVERTTOBINARYFORMAT_B__1_1_OFFSET UNITYSDK_OFFSET(0x18899D90)
#define CLASS_1_41AB67DC5CFFAAC0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18899D70)

inline static constexpr unsigned int Class_1_41AB67DC5CFFAAC0___c_TypeDefinitionIndex = 73652;

class Class_1_41AB67DC5CFFAAC0___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41AB67DC5CFFAAC0___c_TypeDefinitionIndex)->GetStaticField(0x46220);
	}
	static ::Class_1_41AB67DC5CFFAAC0___c** StaticGet___9()
	{
		return (::Class_1_41AB67DC5CFFAAC0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41AB67DC5CFFAAC0___c_TypeDefinitionIndex)->GetStaticField(0x46228);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41AB67DC5CFFAAC0___c_TypeDefinitionIndex)->GetStaticField(0x46230);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _ConvertToBinaryFormat_b__1_0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0___C__CONVERTTOBINARYFORMAT_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _ConvertToBinaryFormat_b__1_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0___C__CONVERTTOBINARYFORMAT_B__1_1_OFFSET))(this, a1);
	}
};
