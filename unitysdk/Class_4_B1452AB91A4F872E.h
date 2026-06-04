#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_B1452AB91A4F872E_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x192B7F40)
#define CLASS_4_B1452AB91A4F872E_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x192B7E40)
#define CLASS_4_B1452AB91A4F872E_METHOD_4_8F89AB4BF2E65FA1_OFFSET UNITYSDK_OFFSET(0x192B8220)
#define CLASS_4_B1452AB91A4F872E_METHOD_4_D904BEDF8B9A9E17_OFFSET UNITYSDK_OFFSET(0x192B82B0)
#define CLASS_4_B1452AB91A4F872E__CTOR_OFFSET UNITYSDK_OFFSET(0x192B7ED0)

inline static constexpr unsigned int Class_4_B1452AB91A4F872E_TypeDefinitionIndex = 22913;

class Class_4_B1452AB91A4F872E : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::RtStackSkillTargetRedirectPhase Field_4_1; // 0x28
	::System::Int32 Field_4_2; // 0x2C
	::RPG::GameCore::TeamTypeMask Field_4_3; // 0x30
	::RPG::GameCore::EntityTypeMask Field_4_4; // 0x38

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

	static ::System::Void Method_4_8F89AB4BF2E65FA1(::SimpleJSON::JSONNode* a1, ::Class_4_B1452AB91A4F872E*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B1452AB91A4F872E*&))((::PBYTE)hIl2Cpp + CLASS_4_B1452AB91A4F872E_METHOD_4_8F89AB4BF2E65FA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D904BEDF8B9A9E17(::SimpleJSON::JSONNode* a1, ::Class_4_B1452AB91A4F872E* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_B1452AB91A4F872E*))((::PBYTE)hIl2Cpp + CLASS_4_B1452AB91A4F872E_METHOD_4_D904BEDF8B9A9E17_OFFSET))(a1, a2);
	}
};
