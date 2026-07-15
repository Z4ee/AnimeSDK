#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8BECDCE48063EC7.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_79E380B8FEE3115F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D84B4578A743B6D7_METHOD_2_0DC7EF9D470F0AD9_OFFSET UNITYSDK_OFFSET(0x17B11D40)
#define CLASS_2_D84B4578A743B6D7_METHOD_2_18CA3767827515DE_OFFSET UNITYSDK_OFFSET(0x17B12140)
#define CLASS_2_D84B4578A743B6D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17B11CC0)

inline static constexpr unsigned int Class_2_D84B4578A743B6D7_TypeDefinitionIndex = 34679;

class Class_2_D84B4578A743B6D7 : public ::Class_1_D8BECDCE48063EC7
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x40
	::Class_4_79E380B8FEE3115F* Field_2_2; // 0x48

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_AEE59ED8DADEC1A1* Method_2_0DC7EF9D470F0AD9(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7_METHOD_2_0DC7EF9D470F0AD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Method_2_18CA3767827515DE(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7_METHOD_2_18CA3767827515DE_OFFSET))(this, a1);
	}
};
