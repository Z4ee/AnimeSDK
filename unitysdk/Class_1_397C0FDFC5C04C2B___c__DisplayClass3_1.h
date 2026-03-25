#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_397C0FDFC5C04C2B___c__DisplayClass3_0;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x104B5C40)
#define CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_1__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__2_OFFSET UNITYSDK_OFFSET(0x104B65C0)

inline static constexpr unsigned int Class_1_397C0FDFC5C04C2B___c__DisplayClass3_1_TypeDefinitionIndex = 44556;

class Class_1_397C0FDFC5C04C2B___c__DisplayClass3_1 : public ::System::Object
{
public:
	::Class_1_397C0FDFC5C04C2B___c__DisplayClass3_0* CS___8__locals1; // 0x10
	::RPG::GameCore::FixPoint score; // 0x18
	::System::Int32 scoreCount; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
	}

	::System::Void _EntitySort_SortByModifierDynamicFloat_b__2(::RPG::GameCore::TurnBasedModifierInstance* pMod)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B___C__DISPLAYCLASS3_1__ENTITYSORT_SORTBYMODIFIERDYNAMICFLOAT_B__2_OFFSET))(this, pMod);
	}
};
