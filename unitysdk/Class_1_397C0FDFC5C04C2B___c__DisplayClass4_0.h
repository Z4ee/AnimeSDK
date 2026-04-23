#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortByModifierValue; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5E3F0)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_B__3_OFFSET UNITYSDK_OFFSET(0x9A5E950)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMAXFISRT_1_OFFSET UNITYSDK_OFFSET(0x9A5EAB0)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMINFISRT_0_OFFSET UNITYSDK_OFFSET(0x9A5EA50)

inline static constexpr unsigned int Class_1_397C0FDFC5C04C2B___c__DisplayClass4_0_TypeDefinitionIndex = 51291;

class Class_1_397C0FDFC5C04C2B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::GameCore::SortByModifierValue* config; // 0x10
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* __9__3; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>* _SortScoreDict; // 0x20
	::RPG::GameCore::GameEntity* _Caster; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _EntitySort_SortByModifierValue_b__3(::RPG::GameCore::TurnBasedModifierInstance* pMod)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_B__3_OFFSET))(this, pMod);
	}

	::System::Int32 _EntitySort_SortByModifierValue_g___CompareImplMinFisrt_0(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMINFISRT_0_OFFSET))(this, a, b);
	}

	::System::Int32 _EntitySort_SortByModifierValue_g___CompareImplMaxFisrt_1(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS4_0__ENTITYSORT_SORTBYMODIFIERVALUE_G___COMPAREIMPLMAXFISRT_1_OFFSET))(this, a, b);
	}
};
