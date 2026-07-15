#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FE3BC0A9B1372E7D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F04230)
#define CLASS_3_FE3BC0A9B1372E7D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F04270)
#define CLASS_3_FE3BC0A9B1372E7D___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18F04280)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D___c_TypeDefinitionIndex = 50259;

class Class_3_FE3BC0A9B1372E7D___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D___c_TypeDefinitionIndex)->GetStaticField(0x5D9E0);
	}
	static ::Class_3_FE3BC0A9B1372E7D___c** StaticGet___9()
	{
		return (::Class_3_FE3BC0A9B1372E7D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FE3BC0A9B1372E7D___c_TypeDefinitionIndex)->GetStaticField(0x5D9E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D___C__CTOR_OFFSET))(this);
	}

	::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}
};
