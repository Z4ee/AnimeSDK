#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingDisplayCarType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_98AEF78BF463A759_GET_DIAPLAYCARTYPE_OFFSET UNITYSDK_OFFSET(0xC3EF680)
#define CLASS_1_98AEF78BF463A759__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EF670)

inline static constexpr unsigned int Class_1_98AEF78BF463A759_TypeDefinitionIndex = 80372;

class Class_1_98AEF78BF463A759 : public ::System::Object
{
public:
	::RPG::GameCore::B51RacingDisplayCarType _DiaplayCarType_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::B51RacingDisplayCarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingDisplayCarType))((::PBYTE)hIl2Cpp + CLASS_1_98AEF78BF463A759__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::B51RacingDisplayCarType get_DiaplayCarType()
	{
		return ((::RPG::GameCore::B51RacingDisplayCarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AEF78BF463A759_GET_DIAPLAYCARTYPE_OFFSET))(this);
	}
};
