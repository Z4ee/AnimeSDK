#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLerpGatheredSpeedToZero; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1545CCDB52A381D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114D7CE0)
#define CLASS_3_1545CCDB52A381D8__CTOR_OFFSET UNITYSDK_OFFSET(0x114D7CB0)

inline static constexpr unsigned int Class_3_1545CCDB52A381D8_TypeDefinitionIndex = 58030;

class Class_3_1545CCDB52A381D8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLerpGatheredSpeedToZero*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*))((::PBYTE)hIl2Cpp + CLASS_3_1545CCDB52A381D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1545CCDB52A381D8_ONTASKBEGIN_OFFSET))(this);
	}
};
