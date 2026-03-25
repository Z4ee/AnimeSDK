#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B1A7D8EBAB39D13D.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_569DE47525C5FD32;
class Class_4_D581BED103406713;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D84B4578A743B6D7_METHOD_2_A5E6D914A33599E4_OFFSET UNITYSDK_OFFSET(0x1671E460)
#define CLASS_2_D84B4578A743B6D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1671E3E0)

inline static constexpr unsigned int Class_2_D84B4578A743B6D7_TypeDefinitionIndex = 28367;

class Class_2_D84B4578A743B6D7 : public ::Class_1_B1A7D8EBAB39D13D
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x30
	::Class_4_D581BED103406713* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_2; // 0x40

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_569DE47525C5FD32* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_569DE47525C5FD32*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_569DE47525C5FD32* Method_2_A5E6D914A33599E4(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_569DE47525C5FD32*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_D84B4578A743B6D7_METHOD_2_A5E6D914A33599E4_OFFSET))(this, a1);
	}
};
