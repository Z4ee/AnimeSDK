#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvDisablePlayerLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BFCAA1B29DB6CB40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BB24C0)
#define CLASS_3_BFCAA1B29DB6CB40__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB2490)

inline static constexpr unsigned int Class_3_BFCAA1B29DB6CB40_TypeDefinitionIndex = 48949;

class Class_3_BFCAA1B29DB6CB40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDisablePlayerLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDisablePlayerLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_BFCAA1B29DB6CB40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFCAA1B29DB6CB40_ONTASKBEGIN_OFFSET))(this);
	}
};
