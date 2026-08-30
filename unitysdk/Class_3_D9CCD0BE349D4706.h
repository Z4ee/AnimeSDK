#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PinballPuzzleLaunch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D9CCD0BE349D4706_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12873CC0)
#define CLASS_3_D9CCD0BE349D4706__CTOR_OFFSET UNITYSDK_OFFSET(0x12873C90)

inline static constexpr unsigned int Class_3_D9CCD0BE349D4706_TypeDefinitionIndex = 58405;

class Class_3_D9CCD0BE349D4706 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PinballPuzzleLaunch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PinballPuzzleLaunch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PinballPuzzleLaunch*))((::PBYTE)hIl2Cpp + CLASS_3_D9CCD0BE349D4706__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9CCD0BE349D4706_ONTASKBEGIN_OFFSET))(this);
	}
};
