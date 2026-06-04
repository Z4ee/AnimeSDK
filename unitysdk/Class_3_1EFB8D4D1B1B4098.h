#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetWaypointSafeZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EFB8D4D1B1B4098_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3BF220)
#define CLASS_3_1EFB8D4D1B1B4098__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BF1F0)

inline static constexpr unsigned int Class_3_1EFB8D4D1B1B4098_TypeDefinitionIndex = 54742;

class Class_3_1EFB8D4D1B1B4098 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetWaypointSafeZone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWaypointSafeZone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWaypointSafeZone*))((::PBYTE)hIl2Cpp + CLASS_3_1EFB8D4D1B1B4098__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFB8D4D1B1B4098_ONTASKBEGIN_OFFSET))(this);
	}
};
