#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSkillBPChangePreview; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6421FCA7574ADCFA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8C99C50)
#define CLASS_3_6421FCA7574ADCFA_METHOD_3_28DD74503BDDC010_OFFSET UNITYSDK_OFFSET(0x8C99FF0)
#define CLASS_3_6421FCA7574ADCFA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C99C20)

inline static constexpr unsigned int Class_3_6421FCA7574ADCFA_TypeDefinitionIndex = 43644;

class Class_3_6421FCA7574ADCFA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSkillBPChangePreview*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + CLASS_3_6421FCA7574ADCFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6421FCA7574ADCFA_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_3_28DD74503BDDC010(::RPG::GameCore::SkillCharacterComponent* a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + CLASS_3_6421FCA7574ADCFA_METHOD_3_28DD74503BDDC010_OFFSET))(this, a1);
	}
};
