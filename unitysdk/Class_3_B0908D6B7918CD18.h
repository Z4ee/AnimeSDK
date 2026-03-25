#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForceSyncActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B0908D6B7918CD18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1058C510)
#define CLASS_3_B0908D6B7918CD18__CTOR_OFFSET UNITYSDK_OFFSET(0x1058C4E0)

inline static constexpr unsigned int Class_3_B0908D6B7918CD18_TypeDefinitionIndex = 44070;

class Class_3_B0908D6B7918CD18 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceSyncActionDelayLink*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceSyncActionDelayLink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceSyncActionDelayLink*))((::PBYTE)hIl2Cpp + CLASS_3_B0908D6B7918CD18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0908D6B7918CD18_ONTASKBEGIN_OFFSET))(this);
	}
};
