#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionExitPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F48F6DA5551C40F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164EF7F0)
#define CLASS_3_F48F6DA5551C40F4__CTOR_OFFSET UNITYSDK_OFFSET(0x164EF7C0)

inline static constexpr unsigned int Class_3_F48F6DA5551C40F4_TypeDefinitionIndex = 50634;

class Class_3_F48F6DA5551C40F4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionExitPerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionExitPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionExitPerformance*))((::PBYTE)hIl2Cpp + CLASS_3_F48F6DA5551C40F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F48F6DA5551C40F4_ONTASKBEGIN_OFFSET))(this);
	}
};
