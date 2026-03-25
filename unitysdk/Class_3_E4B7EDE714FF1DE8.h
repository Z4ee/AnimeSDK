#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureSubmitSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E4B7EDE714FF1DE8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104E9540)
#define CLASS_3_E4B7EDE714FF1DE8__CTOR_OFFSET UNITYSDK_OFFSET(0x104E9510)

inline static constexpr unsigned int Class_3_E4B7EDE714FF1DE8_TypeDefinitionIndex = 46699;

class Class_3_E4B7EDE714FF1DE8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureSubmitSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + CLASS_3_E4B7EDE714FF1DE8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4B7EDE714FF1DE8_ONTASKBEGIN_OFFSET))(this);
	}
};
