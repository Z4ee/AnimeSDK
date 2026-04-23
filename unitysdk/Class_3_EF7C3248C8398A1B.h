#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupRotatableRegionAirlock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EF7C3248C8398A1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12878B00)
#define CLASS_3_EF7C3248C8398A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x12878AD0)

inline static constexpr unsigned int Class_3_EF7C3248C8398A1B_TypeDefinitionIndex = 48878;

class Class_3_EF7C3248C8398A1B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupRotatableRegionAirlock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupRotatableRegionAirlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupRotatableRegionAirlock*))((::PBYTE)hIl2Cpp + CLASS_3_EF7C3248C8398A1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF7C3248C8398A1B_ONTASKBEGIN_OFFSET))(this);
	}
};
