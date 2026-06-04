#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIgnoreTimeRewindLockRangeLimit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CE2375E015F1690_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144B3D30)
#define CLASS_3_2CE2375E015F1690__CTOR_OFFSET UNITYSDK_OFFSET(0x144B3D00)

inline static constexpr unsigned int Class_3_2CE2375E015F1690_TypeDefinitionIndex = 49885;

class Class_3_2CE2375E015F1690 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + CLASS_3_2CE2375E015F1690__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CE2375E015F1690_ONTASKBEGIN_OFFSET))(this);
	}
};
