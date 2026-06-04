#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBreak; }

#define CLASS_3_C9CFBB2710ACF1F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14423F50)
#define CLASS_3_C9CFBB2710ACF1F9__CTOR_OFFSET UNITYSDK_OFFSET(0x14423F20)

inline static constexpr unsigned int Class_3_C9CFBB2710ACF1F9_TypeDefinitionIndex = 52044;

class Class_3_C9CFBB2710ACF1F9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerBreak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBreak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBreak*))((::PBYTE)hIl2Cpp + CLASS_3_C9CFBB2710ACF1F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9CFBB2710ACF1F9_ONTASKBEGIN_OFFSET))(this);
	}
};
