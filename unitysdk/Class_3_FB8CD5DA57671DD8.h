#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareWaveCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB8CD5DA57671DD8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16DBF180)
#define CLASS_3_FB8CD5DA57671DD8__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBF150)

inline static constexpr unsigned int Class_3_FB8CD5DA57671DD8_TypeDefinitionIndex = 52115;

class Class_3_FB8CD5DA57671DD8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareWaveCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + CLASS_3_FB8CD5DA57671DD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB8CD5DA57671DD8_EVALUATE_OFFSET))(this);
	}
};
