#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FDC5754AF82301E6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18594790)
#define CLASS_3_FDC5754AF82301E6__CTOR_OFFSET UNITYSDK_OFFSET(0x18594760)

inline static constexpr unsigned int Class_3_FDC5754AF82301E6_TypeDefinitionIndex = 51448;

class Class_3_FDC5754AF82301E6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByCurrentSkillName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + CLASS_3_FDC5754AF82301E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDC5754AF82301E6_EVALUATE_OFFSET))(this);
	}
};
