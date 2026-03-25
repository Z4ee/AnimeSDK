#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRestartGatheredRegion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3F14DDA497C1AA1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109F3940)
#define CLASS_3_F3F14DDA497C1AA1__CTOR_OFFSET UNITYSDK_OFFSET(0x109F3910)

inline static constexpr unsigned int Class_3_F3F14DDA497C1AA1_TypeDefinitionIndex = 46669;

class Class_3_F3F14DDA497C1AA1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRestartGatheredRegion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + CLASS_3_F3F14DDA497C1AA1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3F14DDA497C1AA1_ONTASKBEGIN_OFFSET))(this);
	}
};
