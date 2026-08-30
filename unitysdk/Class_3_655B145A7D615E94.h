#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EndAdvSkillCombo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_655B145A7D615E94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E89D50)
#define CLASS_3_655B145A7D615E94__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89D20)

inline static constexpr unsigned int Class_3_655B145A7D615E94_TypeDefinitionIndex = 58265;

class Class_3_655B145A7D615E94 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EndAdvSkillCombo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + CLASS_3_655B145A7D615E94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655B145A7D615E94_ONTASKBEGIN_OFFSET))(this);
	}
};
