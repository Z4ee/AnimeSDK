#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8BECDCE48063EC7.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_D581BED103406713;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D84B4578A743B6D7_METHOD_2_18CA3767827515DE_OFFSET UNITYSDK_OFFSET(0x18ACF240)
#define CLASS_2_D84B4578A743B6D7_METHOD_2_56BA11EE61598EB4_OFFSET UNITYSDK_OFFSET(0x18ACEFB0)
#define CLASS_2_D84B4578A743B6D7__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABBD60)

inline static constexpr unsigned int Class_2_D84B4578A743B6D7_TypeDefinitionIndex = 34297;

class Class_2_D84B4578A743B6D7 : public ::Class_1_D8BECDCE48063EC7
{
public:
	::Class_4_D581BED103406713* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_2; // 0x48

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_AEE59ED8DADEC1A1* Method_2_56BA11EE61598EB4(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7_METHOD_2_56BA11EE61598EB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Method_2_18CA3767827515DE(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7_METHOD_2_18CA3767827515DE_OFFSET))(this, a1);
	}
};
