#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_659DBBD088F1CA3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2601C0)
#define CLASS_1_659DBBD088F1CA3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B260200)
#define CLASS_1_659DBBD088F1CA3E___C__SELECTDIALOGPERFORMANCETOPLAY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B260250)
#define CLASS_1_659DBBD088F1CA3E___C___ISGENDERMATCHED_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B260210)

inline static constexpr unsigned int Class_1_659DBBD088F1CA3E___c_TypeDefinitionIndex = 35788;

class Class_1_659DBBD088F1CA3E___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_659DBBD088F1CA3E___c_TypeDefinitionIndex)->GetStaticField(0xE540);
	}
	static ::Class_1_659DBBD088F1CA3E___c** StaticGet___9()
	{
		return (::Class_1_659DBBD088F1CA3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_659DBBD088F1CA3E___c_TypeDefinitionIndex)->GetStaticField(0xE548);
	}
	static ::System::Func_2<::Class_2_AEE59ED8DADEC1A1*, ::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::Class_2_AEE59ED8DADEC1A1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_659DBBD088F1CA3E___c_TypeDefinitionIndex)->GetStaticField(0xE550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __IsGenderMatched_b__10_0(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E___C___ISGENDERMATCHED_B__10_0_OFFSET))(this, a1);
	}

	::System::Int32 _SelectDialogPerformanceToPlay_b__17_0(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E___C__SELECTDIALOGPERFORMANCETOPLAY_B__17_0_OFFSET))(this, a1);
	}
};
