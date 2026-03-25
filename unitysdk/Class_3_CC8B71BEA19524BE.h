#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UsePassiveSkill; }

#define CLASS_3_CC8B71BEA19524BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEF1DB0)
#define CLASS_3_CC8B71BEA19524BE__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF1D80)

inline static constexpr unsigned int Class_3_CC8B71BEA19524BE_TypeDefinitionIndex = 47516;

class Class_3_CC8B71BEA19524BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UsePassiveSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UsePassiveSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UsePassiveSkill*))((::PBYTE)hIl2Cpp + CLASS_3_CC8B71BEA19524BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC8B71BEA19524BE_ONTASKBEGIN_OFFSET))(this);
	}
};
