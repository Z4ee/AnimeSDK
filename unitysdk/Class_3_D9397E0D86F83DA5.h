#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D9397E0D86F83DA5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A3B060)
#define CLASS_3_D9397E0D86F83DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3B030)

inline static constexpr unsigned int Class_3_D9397E0D86F83DA5_TypeDefinitionIndex = 52112;

class Class_3_D9397E0D86F83DA5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareUnusedUltraSkillCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + CLASS_3_D9397E0D86F83DA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9397E0D86F83DA5_EVALUATE_OFFSET))(this);
	}
};
