#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindSetResetPlayerAnchor; }

#define CLASS_3_69B19BE42FD0AC3E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE47010)
#define CLASS_3_69B19BE42FD0AC3E__CTOR_OFFSET UNITYSDK_OFFSET(0xDE46FE0)

inline static constexpr unsigned int Class_3_69B19BE42FD0AC3E_TypeDefinitionIndex = 43238;

class Class_3_69B19BE42FD0AC3E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindSetResetPlayerAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_69B19BE42FD0AC3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B19BE42FD0AC3E_ONTASKBEGIN_OFFSET))(this);
	}
};
