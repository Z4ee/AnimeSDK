#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideSkillDisplayInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2192889FCAEB65CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C6BE50)
#define CLASS_3_2192889FCAEB65CF__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6BE20)

inline static constexpr unsigned int Class_3_2192889FCAEB65CF_TypeDefinitionIndex = 44092;

class Class_3_2192889FCAEB65CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideSkillDisplayInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideSkillDisplayInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideSkillDisplayInfo*))((::PBYTE)hIl2Cpp + CLASS_3_2192889FCAEB65CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2192889FCAEB65CF_ONTASKBEGIN_OFFSET))(this);
	}
};
