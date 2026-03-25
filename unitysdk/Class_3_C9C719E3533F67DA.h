#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionSetFinalPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C9C719E3533F67DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1E1B50)
#define CLASS_3_C9C719E3533F67DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1B20)

inline static constexpr unsigned int Class_3_C9C719E3533F67DA_TypeDefinitionIndex = 42931;

class Class_3_C9C719E3533F67DA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionSetFinalPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*))((::PBYTE)hIl2Cpp + CLASS_3_C9C719E3533F67DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9C719E3533F67DA_ONTASKBEGIN_OFFSET))(this);
	}
};
