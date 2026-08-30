#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverridePerformanceEndCrack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D4C5A5910E93D1CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153DF280)
#define CLASS_3_D4C5A5910E93D1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x153DF250)

inline static constexpr unsigned int Class_3_D4C5A5910E93D1CF_TypeDefinitionIndex = 53326;

class Class_3_D4C5A5910E93D1CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverridePerformanceEndCrack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + CLASS_3_D4C5A5910E93D1CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4C5A5910E93D1CF_ONTASKBEGIN_OFFSET))(this);
	}
};
