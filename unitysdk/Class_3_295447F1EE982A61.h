#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GravityBallPuzzleStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_295447F1EE982A61_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B87B70)
#define CLASS_3_295447F1EE982A61__CTOR_OFFSET UNITYSDK_OFFSET(0x11B87B40)

inline static constexpr unsigned int Class_3_295447F1EE982A61_TypeDefinitionIndex = 48804;

class Class_3_295447F1EE982A61 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GravityBallPuzzleStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleStart*))((::PBYTE)hIl2Cpp + CLASS_3_295447F1EE982A61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_295447F1EE982A61_ONTASKBEGIN_OFFSET))(this);
	}
};
