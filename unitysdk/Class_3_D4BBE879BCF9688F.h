#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetComfortZoneWidthOverride; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D4BBE879BCF9688F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAEC9700)
#define CLASS_3_D4BBE879BCF9688F__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC96D0)

inline static constexpr unsigned int Class_3_D4BBE879BCF9688F_TypeDefinitionIndex = 51725;

class Class_3_D4BBE879BCF9688F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetComfortZoneWidthOverride*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + CLASS_3_D4BBE879BCF9688F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4BBE879BCF9688F_ONTASKBEGIN_OFFSET))(this);
	}
};
