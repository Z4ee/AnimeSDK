#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackSkillDesc; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE538C614451F154_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153EAE60)
#define CLASS_3_EE538C614451F154__CTOR_OFFSET UNITYSDK_OFFSET(0x153EAE30)

inline static constexpr unsigned int Class_3_EE538C614451F154_TypeDefinitionIndex = 55843;

class Class_3_EE538C614451F154 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackSkillDesc*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackSkillDesc* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackSkillDesc*))((::PBYTE)hIl2Cpp + CLASS_3_EE538C614451F154__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE538C614451F154_ONTASKBEGIN_OFFSET))(this);
	}
};
