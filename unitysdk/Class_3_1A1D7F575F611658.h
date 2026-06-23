#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_33E254D31CBA72CB.h"

class Class_3_9F091E965E210217_4;
namespace MoleMole { class TurnBattleEntityDummyUnit; }
namespace MoleMole { class TurnBattleEntityUnit; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_1A1D7F575F611658_METHOD_3_405BCBC42B0B7EDD_OFFSET UNITYSDK_OFFSET(0x1C69F1A0)
#define CLASS_3_1A1D7F575F611658_NEWTURNBATTLEUNIT_OFFSET UNITYSDK_OFFSET(0x1C69F120)
#define CLASS_3_1A1D7F575F611658__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C69F100)
#define CLASS_3_1A1D7F575F611658__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C69F110)
#define CLASS_3_1A1D7F575F611658__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69F0F0)

inline static constexpr unsigned int Class_3_1A1D7F575F611658_TypeDefinitionIndex = 53896;

class Class_3_1A1D7F575F611658 : public ::Class_2_33E254D31CBA72CB
{
public:
	::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_4*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_4*>*))((::PBYTE)hIl2Cpp + CLASS_3_1A1D7F575F611658__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1A1D7F575F611658__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::MoleMole::TurnBattleEntityDummyUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityDummyUnit*))((::PBYTE)hIl2Cpp + CLASS_3_1A1D7F575F611658__CTOR_2_OFFSET))(this, a1);
	}

	::MoleMole::TurnBattleEntityUnit* NewTurnBattleUnit()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A1D7F575F611658_NEWTURNBATTLEUNIT_OFFSET))(this);
	}

	::MoleMole::TurnBattleEntityUnit* Method_3_405BCBC42B0B7EDD()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A1D7F575F611658_METHOD_3_405BCBC42B0B7EDD_OFFSET))(this);
	}
};
