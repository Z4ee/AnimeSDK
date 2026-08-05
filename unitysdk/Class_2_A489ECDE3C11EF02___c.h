#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2BC2D5DA764F8F39_6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A489ECDE3C11EF02___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x1AF2A4F0)
#define CLASS_2_A489ECDE3C11EF02___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x1AF2A510)
#define CLASS_2_A489ECDE3C11EF02___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A4A0)
#define CLASS_2_A489ECDE3C11EF02___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A4E0)

inline static constexpr unsigned int Class_2_A489ECDE3C11EF02___c_TypeDefinitionIndex = 77442;

class Class_2_A489ECDE3C11EF02___c : public ::System::Object
{
public:
	static ::Class_2_A489ECDE3C11EF02___c** StaticGet___9()
	{
		return (::Class_2_A489ECDE3C11EF02___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A489ECDE3C11EF02___c_TypeDefinitionIndex)->GetStaticField(0x3BAE0);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A489ECDE3C11EF02___c_TypeDefinitionIndex)->GetStaticField(0x3BAE8);
	}
	static ::System::Func_2<::Class_3_2BC2D5DA764F8F39_6*, ::System::UInt32>** StaticGet___9__36_0()
	{
		return (::System::Func_2<::Class_3_2BC2D5DA764F8F39_6*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A489ECDE3C11EF02___c_TypeDefinitionIndex)->GetStaticField(0x3BAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_2BC2D5DA764F8F39_6* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_2BC2D5DA764F8F39_6*))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
