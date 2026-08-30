#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleLoadClockParkModifier; }

#define CLASS_3_094F36770504D54A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5D0920)
#define CLASS_3_094F36770504D54A__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D08F0)

inline static constexpr unsigned int Class_3_094F36770504D54A_TypeDefinitionIndex = 59103;

class Class_3_094F36770504D54A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + CLASS_3_094F36770504D54A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_094F36770504D54A_ONTASKBEGIN_OFFSET))(this);
	}
};
