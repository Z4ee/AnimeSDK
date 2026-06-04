#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GravityBallPuzzleSwitchBoard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_791B141D74D586FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138A8490)
#define CLASS_3_791B141D74D586FB__CTOR_OFFSET UNITYSDK_OFFSET(0x138A8460)

inline static constexpr unsigned int Class_3_791B141D74D586FB_TypeDefinitionIndex = 49471;

class Class_3_791B141D74D586FB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GravityBallPuzzleSwitchBoard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*))((::PBYTE)hIl2Cpp + CLASS_3_791B141D74D586FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_791B141D74D586FB_ONTASKBEGIN_OFFSET))(this);
	}
};
