#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtStackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E6A64ECEE5F87828_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180FF740)
#define CLASS_3_E6A64ECEE5F87828__CTOR_OFFSET UNITYSDK_OFFSET(0x180FF710)

inline static constexpr unsigned int Class_3_E6A64ECEE5F87828_TypeDefinitionIndex = 54131;

class Class_3_E6A64ECEE5F87828 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtStackProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStackProperty*))((::PBYTE)hIl2Cpp + CLASS_3_E6A64ECEE5F87828__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6A64ECEE5F87828_ONTASKBEGIN_OFFSET))(this);
	}
};
