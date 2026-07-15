#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FE3BC0A9B1372E7D_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192407B0)
#define CLASS_3_FE3BC0A9B1372E7D_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192407F0)
#define CLASS_3_FE3BC0A9B1372E7D_1___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x19240800)
#define CLASS_3_FE3BC0A9B1372E7D_1___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x19240810)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_1___c_TypeDefinitionIndex = 50261;

class Class_3_FE3BC0A9B1372E7D_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D_1___c_TypeDefinitionIndex)->GetStaticField(0x309F0);
	}
	static ::Class_3_FE3BC0A9B1372E7D_1___c** StaticGet___9()
	{
		return (::Class_3_FE3BC0A9B1372E7D_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D_1___c_TypeDefinitionIndex)->GetStaticField(0x309F8);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D_1___c_TypeDefinitionIndex)->GetStaticField(0x30A00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1___C__CTOR_OFFSET))(this);
	}

	::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}

	::System::Single _OnTaskBegin_b__1_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1___C__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
