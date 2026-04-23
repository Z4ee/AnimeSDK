#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_B1452AB91A4F872E_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1916BEA0)
#define CLASS_4_B1452AB91A4F872E_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1916BDA0)
#define CLASS_4_B1452AB91A4F872E__CTOR_OFFSET UNITYSDK_OFFSET(0x1916BE30)

inline static constexpr unsigned int Class_4_B1452AB91A4F872E_TypeDefinitionIndex = 23245;

class Class_4_B1452AB91A4F872E : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x20
	::RPG::GameCore::TeamTypeMask Field_4_0; // 0x28
	::RPG::GameCore::RtStackSkillTargetRedirectPhase Field_4_3; // 0x2C
	::System::Int32 Field_4_4; // 0x30
	::RPG::GameCore::EntityTypeMask Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B1452AB91A4F872E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B1452AB91A4F872E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B1452AB91A4F872E*&))((::PBYTE)hIl2Cpp + CLASS_4_B1452AB91A4F872E_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B1452AB91A4F872E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B1452AB91A4F872E*))((::PBYTE)hIl2Cpp + CLASS_4_B1452AB91A4F872E_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};
