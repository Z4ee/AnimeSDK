#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_3ABA989E5AECB261;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_26F7C7575715A789___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CB9830)
#define CLASS_1_26F7C7575715A789___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET UNITYSDK_OFFSET(0x17CB9880)
#define CLASS_1_26F7C7575715A789___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET UNITYSDK_OFFSET(0x17CB9890)
#define CLASS_1_26F7C7575715A789___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB9870)

inline static constexpr unsigned int Class_1_26F7C7575715A789___c_TypeDefinitionIndex = 34667;

class Class_1_26F7C7575715A789___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>, ::Class_2_3ABA989E5AECB261*>** StaticGet___9__8_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>, ::Class_2_3ABA989E5AECB261*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F7C7575715A789___c_TypeDefinitionIndex)->GetStaticField(0x6AAA0);
	}
	static ::Class_1_26F7C7575715A789___c** StaticGet___9()
	{
		return (::Class_1_26F7C7575715A789___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F7C7575715A789___c_TypeDefinitionIndex)->GetStaticField(0x6AAA8);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>, ::System::Single>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26F7C7575715A789___c_TypeDefinitionIndex)->GetStaticField(0x6AAB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789___C__CTOR_OFFSET))(this);
	}

	::System::Single _ComputeNowFightCatRanksWithEntity_b__8_0(::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*> tup)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>))((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET))(this, tup);
	}

	::Class_2_3ABA989E5AECB261* _ComputeNowFightCatRanksWithEntity_b__8_1(::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*> tup)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::Class_2_3ABA989E5AECB261*>))((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET))(this, tup);
	}
};
