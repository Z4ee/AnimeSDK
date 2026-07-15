#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortByModifierValue; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16165920)
#define CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_B__3_OFFSET UNITYSDK_OFFSET(0x16166250)
#define CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMAXFISRT_1_OFFSET UNITYSDK_OFFSET(0x16166480)
#define CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMINFISRT_0_OFFSET UNITYSDK_OFFSET(0x161662E0)

inline static constexpr unsigned int Class_1_93C352ED7897F063___c__DisplayClass4_0_TypeDefinitionIndex = 53112;

class Class_1_93C352ED7897F063___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>* _SortScoreDict; // 0x10
	::RPG::GameCore::SortByModifierValue* config; // 0x18
	::RPG::GameCore::GameEntity* _Caster; // 0x20
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* __9__3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _EntitySort_SortByModifierValue_b__3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_B__3_OFFSET))(this, a1);
	}

	::System::Int32 _EntitySort_SortByModifierValue_g___CompareImplMinFisrt_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMINFISRT_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _EntitySort_SortByModifierValue_g___CompareImplMaxFisrt_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMAXFISRT_1_OFFSET))(this, a1, a2);
	}
};
