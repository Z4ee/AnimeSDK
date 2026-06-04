#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_585010012878E285_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB7D800)
#define CLASS_3_585010012878E285__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7D7D0)

inline static constexpr unsigned int Class_3_585010012878E285_TypeDefinitionIndex = 52024;

class Class_3_585010012878E285 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TargetTimeSlow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_3_585010012878E285__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_585010012878E285_ONTASKBEGIN_OFFSET))(this);
	}
};
