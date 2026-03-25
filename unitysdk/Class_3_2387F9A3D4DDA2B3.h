#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimePuzzleLockChime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2387F9A3D4DDA2B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC6B690)
#define CLASS_3_2387F9A3D4DDA2B3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6B660)

inline static constexpr unsigned int Class_3_2387F9A3D4DDA2B3_TypeDefinitionIndex = 46796;

class Class_3_2387F9A3D4DDA2B3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChimePuzzleLockChime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleLockChime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleLockChime*))((::PBYTE)hIl2Cpp + CLASS_3_2387F9A3D4DDA2B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2387F9A3D4DDA2B3_ONTASKBEGIN_OFFSET))(this);
	}
};
