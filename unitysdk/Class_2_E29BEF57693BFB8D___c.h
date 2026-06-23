#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E29BEF57693BFB8D___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x133BDA10)
#define CLASS_2_E29BEF57693BFB8D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x133BD9C0)
#define CLASS_2_E29BEF57693BFB8D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133BDA00)

inline static constexpr unsigned int Class_2_E29BEF57693BFB8D___c_TypeDefinitionIndex = 57978;

class Class_2_E29BEF57693BFB8D___c : public ::System::Object
{
public:
	static ::Class_2_E29BEF57693BFB8D___c** StaticGet___9()
	{
		return (::Class_2_E29BEF57693BFB8D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E29BEF57693BFB8D___c_TypeDefinitionIndex)->GetStaticField(0x423D0);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E29BEF57693BFB8D___c_TypeDefinitionIndex)->GetStaticField(0x423D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E29BEF57693BFB8D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E29BEF57693BFB8D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E29BEF57693BFB8D___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
