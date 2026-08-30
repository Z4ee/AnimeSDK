#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetGlobalShaderProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1B5019CCED932B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15786640)
#define CLASS_3_E1B5019CCED932B3__CTOR_OFFSET UNITYSDK_OFFSET(0x15786610)

inline static constexpr unsigned int Class_3_E1B5019CCED932B3_TypeDefinitionIndex = 55702;

class Class_3_E1B5019CCED932B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetGlobalShaderProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGlobalShaderProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGlobalShaderProperty*))((::PBYTE)hIl2Cpp + CLASS_3_E1B5019CCED932B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1B5019CCED932B3_ONTASKBEGIN_OFFSET))(this);
	}
};
