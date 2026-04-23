#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetSkillSlotData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_88F7F17A6B9C6F4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117F5EB0)
#define CLASS_3_88F7F17A6B9C6F4E__CTOR_OFFSET UNITYSDK_OFFSET(0x117F5E80)

inline static constexpr unsigned int Class_3_88F7F17A6B9C6F4E_TypeDefinitionIndex = 53382;

class Class_3_88F7F17A6B9C6F4E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetSkillSlotData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetSkillSlotData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetSkillSlotData*))((::PBYTE)hIl2Cpp + CLASS_3_88F7F17A6B9C6F4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88F7F17A6B9C6F4E_ONTASKBEGIN_OFFSET))(this);
	}
};
