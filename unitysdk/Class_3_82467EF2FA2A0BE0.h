#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForcePlayerLockAdventureTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_82467EF2FA2A0BE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB632E00)
#define CLASS_3_82467EF2FA2A0BE0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB632E40)
#define CLASS_3_82467EF2FA2A0BE0__CTOR_OFFSET UNITYSDK_OFFSET(0xB632DD0)

inline static constexpr unsigned int Class_3_82467EF2FA2A0BE0_TypeDefinitionIndex = 53174;

class Class_3_82467EF2FA2A0BE0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForcePlayerLockAdventureTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*))((::PBYTE)hIl2Cpp + CLASS_3_82467EF2FA2A0BE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82467EF2FA2A0BE0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82467EF2FA2A0BE0_ONTASKBEGIN_OFFSET))(this);
	}
};
