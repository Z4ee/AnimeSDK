#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPickupBullet; }

#define CLASS_3_B8D14A6C759DEBA8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A970D0)
#define CLASS_3_B8D14A6C759DEBA8__CTOR_OFFSET UNITYSDK_OFFSET(0x12A970A0)

inline static constexpr unsigned int Class_3_B8D14A6C759DEBA8_TypeDefinitionIndex = 54366;

class Class_3_B8D14A6C759DEBA8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroPickupBullet*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPickupBullet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPickupBullet*))((::PBYTE)hIl2Cpp + CLASS_3_B8D14A6C759DEBA8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8D14A6C759DEBA8_ONTASKBEGIN_OFFSET))(this);
	}
};
