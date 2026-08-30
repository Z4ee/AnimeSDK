#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1750960FB5F747AB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_C9DFE5EE7107C629_3;

#define CLASS_2_AD549E15E6D5427E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1A780)

inline static constexpr unsigned int Class_2_AD549E15E6D5427E_TypeDefinitionIndex = 57781;

class Class_2_AD549E15E6D5427E : public ::Class_1_1750960FB5F747AB
{
public:
	::Class_1_C9DFE5EE7107C629_3* DLKKFMJENMM; // 0x30
	::RPG::GameCore::FixPoint NEMOMKPCCMG; // 0x38
	::System::Boolean NGPMGGNAHGI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD549E15E6D5427E__CTOR_OFFSET))(this);
	}
};
