#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionEnterPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4338A00A9B8D2D0B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C7B580)
#define CLASS_3_4338A00A9B8D2D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x13C7B550)

inline static constexpr unsigned int Class_3_4338A00A9B8D2D0B_TypeDefinitionIndex = 49579;

class Class_3_4338A00A9B8D2D0B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionEnterPerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionEnterPerformance*))((::PBYTE)hIl2Cpp + CLASS_3_4338A00A9B8D2D0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4338A00A9B8D2D0B_ONTASKBEGIN_OFFSET))(this);
	}
};
