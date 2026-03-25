#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_38C460910E5AC181;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C16931E567A100F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166AE320)
#define CLASS_1_C16931E567A100F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166AE360)
#define CLASS_1_C16931E567A100F1___C___CALCDICESCOREBYAILEVEL_B__23_1_OFFSET UNITYSDK_OFFSET(0x166AE370)
#define CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__24_0_OFFSET UNITYSDK_OFFSET(0x166AE3F0)
#define CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__24_1_OFFSET UNITYSDK_OFFSET(0x166AE400)
#define CLASS_1_C16931E567A100F1___C___GETDICECONTENTWEIGHTLISTMAP_B__27_0_OFFSET UNITYSDK_OFFSET(0x166AE410)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c_TypeDefinitionIndex = 28514;

class Class_1_C16931E567A100F1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>>** StaticGet___9__23_1()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0x2AA70);
	}
	static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0x2AA78);
	}
	static ::Class_1_C16931E567A100F1___c** StaticGet___9()
	{
		return (::Class_1_C16931E567A100F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0x2AA80);
	}
	static ::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>** StaticGet___9__24_1()
	{
		return (::System::Func_2<::System::Single, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0x2AA88);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C16931E567A100F1___c_TypeDefinitionIndex)->GetStaticField(0x2AA90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __calcDiceScoreByAILevel_b__23_1(::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64> a, ::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64> b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>, ::System::ValueTuple_2<::Class_1_38C460910E5AC181*, ::System::UInt64>))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCDICESCOREBYAILEVEL_B__23_1_OFFSET))(this, a, b);
	}

	::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__24_0(::System::Single p)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__24_0_OFFSET))(this, p);
	}

	::RPG::GameCore::FixPoint __calcSelectedDiceScore_b__24_1(::System::Single p)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___CALCSELECTEDDICESCORE_B__24_1_OFFSET))(this, p);
	}

	::System::Int64 __GetDiceContentWeightListMap_b__27_0(::System::UInt32 w)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C___GETDICECONTENTWEIGHTLISTMAP_B__27_0_OFFSET))(this, w);
	}
};
