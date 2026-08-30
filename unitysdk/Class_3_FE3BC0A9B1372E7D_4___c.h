#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FE3BC0A9B1372E7D_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16060D80)
#define CLASS_3_FE3BC0A9B1372E7D_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16060DC0)
#define CLASS_3_FE3BC0A9B1372E7D_4___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x16060DD0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_4___c_TypeDefinitionIndex = 52938;

class Class_3_FE3BC0A9B1372E7D_4___c : public ::System::Object
{
public:
	static ::Class_3_FE3BC0A9B1372E7D_4___c** StaticGet___9()
	{
		return (::Class_3_FE3BC0A9B1372E7D_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D_4___c_TypeDefinitionIndex)->GetStaticField(0x1F600);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D_4___c_TypeDefinitionIndex)->GetStaticField(0x1F608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4___C__CTOR_OFFSET))(this);
	}

	::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}
};
