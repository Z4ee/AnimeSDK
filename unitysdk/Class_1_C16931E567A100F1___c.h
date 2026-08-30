#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_70B630442ADDBF4A;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C16931E567A100F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1977D820)
#define CLASS_1_C16931E567A100F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1977D860)
#define CLASS_1_C16931E567A100F1___C___CALCDICESCOREBYAILEVEL_B__37_0_OFFSET UNITYSDK_OFFSET(0x1977D870)
#define CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1977D8F0)
#define CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__38_1_OFFSET UNITYSDK_OFFSET(0x1977D9B0)
#define CLASS_1_C16931E567A100F1___C___GETDICECONTENTWEIGHTLISTMAP_B__41_0_OFFSET UNITYSDK_OFFSET(0x1977DA70)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c_TypeDefinitionIndex = 35722;

class Class_1_C16931E567A100F1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__41_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0xC8A0);
	}
	static ::Class_1_C16931E567A100F1___c** StaticGet___9()
	{
		return (::Class_1_C16931E567A100F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0xC8A8);
	}
	static ::System::Comparison_1<::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64>>** StaticGet___9__37_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0xC8B0);
	}
	static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__38_1()
	{
		return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0xC8B8);
	}
	static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0xC8C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __calcDiceScoreByAILevel_b__37_0(::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64> a1, ::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64>, ::System::ValueTuple_2<::Class_1_70B630442ADDBF4A*, ::System::UInt64>))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCDICESCOREBYAILEVEL_B__37_0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__38_0(::System::Single a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__38_0_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__38_1(::System::Single a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__38_1_OFFSET))(this, a1);
	}

	::System::Int64 __GetDiceContentWeightListMap_b__41_0(::System::UInt32 a1)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___GETDICECONTENTWEIGHTLISTMAP_B__41_0_OFFSET))(this, a1);
	}
};
