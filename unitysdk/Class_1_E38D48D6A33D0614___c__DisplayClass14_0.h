#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C36D70)
#define CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__0_OFFSET UNITYSDK_OFFSET(0x17C3B2D0)
#define CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__1_OFFSET UNITYSDK_OFFSET(0x17C3B330)

inline static constexpr unsigned int Class_1_E38D48D6A33D0614___c__DisplayClass14_0_TypeDefinitionIndex = 34705;

class Class_1_E38D48D6A33D0614___c__DisplayClass14_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* regionTagSet; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckEffectValid_b__0(::RPG::GameCore::CakeRaceRegionTag tag)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__0_OFFSET))(this, tag);
	}

	::System::Boolean __CheckEffectValid_b__1(::RPG::GameCore::CakeRaceRegionTag tag)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__1_OFFSET))(this, tag);
	}
};
