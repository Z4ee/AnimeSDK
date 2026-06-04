#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByCompareProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7D7ADB0AC850F16_EVALUATE_OFFSET UNITYSDK_OFFSET(0x144363E0)
#define CLASS_3_C7D7ADB0AC850F16__CTOR_OFFSET UNITYSDK_OFFSET(0x144363B0)

inline static constexpr unsigned int Class_3_C7D7ADB0AC850F16_TypeDefinitionIndex = 50363;

class Class_3_C7D7ADB0AC850F16 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByCompareProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCompareProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCompareProperty*))((::PBYTE)hIl2Cpp + CLASS_3_C7D7ADB0AC850F16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7D7ADB0AC850F16_EVALUATE_OFFSET))(this);
	}
};
