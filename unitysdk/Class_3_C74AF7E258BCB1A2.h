#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyVersusBarProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C74AF7E258BCB1A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C57140)
#define CLASS_3_C74AF7E258BCB1A2__CTOR_OFFSET UNITYSDK_OFFSET(0x17C57110)

inline static constexpr unsigned int Class_3_C74AF7E258BCB1A2_TypeDefinitionIndex = 53275;

class Class_3_C74AF7E258BCB1A2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyVersusBarProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyVersusBarProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyVersusBarProperty*))((::PBYTE)hIl2Cpp + CLASS_3_C74AF7E258BCB1A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74AF7E258BCB1A2_ONTASKBEGIN_OFFSET))(this);
	}
};
