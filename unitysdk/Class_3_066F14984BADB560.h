#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockReShaCamera; }

#define CLASS_3_066F14984BADB560_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11979A20)
#define CLASS_3_066F14984BADB560__CTOR_OFFSET UNITYSDK_OFFSET(0x119799F0)

inline static constexpr unsigned int Class_3_066F14984BADB560_TypeDefinitionIndex = 43294;

class Class_3_066F14984BADB560 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnlockReShaCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + CLASS_3_066F14984BADB560__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_066F14984BADB560_ONTASKBEGIN_OFFSET))(this);
	}
};
