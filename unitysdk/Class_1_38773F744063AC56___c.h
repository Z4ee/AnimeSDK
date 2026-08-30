#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_21AD365C113DC484;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_38773F744063AC56___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1ABA90)
#define CLASS_1_38773F744063AC56___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C1ABAE0)
#define CLASS_1_38773F744063AC56___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C1ABAF0)
#define CLASS_1_38773F744063AC56___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1ABAD0)

inline static constexpr unsigned int Class_1_38773F744063AC56___c_TypeDefinitionIndex = 36593;

class Class_1_38773F744063AC56___c : public ::System::Object
{
public:
	static ::Class_1_38773F744063AC56___c** StaticGet___9()
	{
		return (::Class_1_38773F744063AC56___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38773F744063AC56___c_TypeDefinitionIndex)->GetStaticField(0x15CC0);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>, ::System::Single>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38773F744063AC56___c_TypeDefinitionIndex)->GetStaticField(0x15CC8);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>, ::Class_2_21AD365C113DC484*>** StaticGet___9__8_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>, ::Class_2_21AD365C113DC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38773F744063AC56___c_TypeDefinitionIndex)->GetStaticField(0x15CD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56___C__CTOR_OFFSET))(this);
	}

	::System::Single _ComputeNowFightCatRanksWithEntity_b__8_0(::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*> a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>))((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_0_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* _ComputeNowFightCatRanksWithEntity_b__8_1(::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*> a1)
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::Class_2_21AD365C113DC484*>))((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56___C__COMPUTENOWFIGHTCATRANKSWITHENTITY_B__8_1_OFFSET))(this, a1);
	}
};
