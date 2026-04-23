#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortByModifierDynamicFloat; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5DDA0)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__3_OFFSET UNITYSDK_OFFSET(0x9A5E600)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_G___COMPAREIMPLMAXFISRT_1_OFFSET UNITYSDK_OFFSET(0x9A5E6C0)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_G___COMPAREIMPLMINFISRT_0_OFFSET UNITYSDK_OFFSET(0x9A5E660)

inline static constexpr unsigned int Class_1_397C0FDFC5C04C2B___c__DisplayClass3_0_TypeDefinitionIndex = 51289;

class Class_1_397C0FDFC5C04C2B___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* __9__3; // 0x10
	::RPG::GameCore::SortByModifierDynamicFloat* config; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>* _SortScoreDict; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _EntitySort_SortByModifierDynamicFloat_b__3(::RPG::GameCore::TurnBasedModifierInstance* pMod)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__3_OFFSET))(this, pMod);
	}

	::System::Int32 _EntitySort_SortByModifierDynamicFloat_g___CompareImplMinFisrt_0(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_G___COMPAREIMPLMINFISRT_0_OFFSET))(this, a, b);
	}

	::System::Int32 _EntitySort_SortByModifierDynamicFloat_g___CompareImplMaxFisrt_1(::RPG::GameCore::GameEntity* a, ::RPG::GameCore::GameEntity* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_0__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_G___COMPAREIMPLMAXFISRT_1_OFFSET))(this, a, b);
	}
};
