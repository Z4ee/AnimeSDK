#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyEvolveBuildProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25CEE845BFDF4861_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FAB550)
#define CLASS_3_25CEE845BFDF4861__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAB520)

inline static constexpr unsigned int Class_3_25CEE845BFDF4861_TypeDefinitionIndex = 55402;

class Class_3_25CEE845BFDF4861 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyEvolveBuildProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyEvolveBuildProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyEvolveBuildProperty*))((::PBYTE)hIl2Cpp + CLASS_3_25CEE845BFDF4861__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25CEE845BFDF4861_ONTASKBEGIN_OFFSET))(this);
	}
};
