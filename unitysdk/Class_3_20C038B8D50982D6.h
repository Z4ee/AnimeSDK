#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareScepterMainUnitEffectTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_20C038B8D50982D6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13AF46C0)
#define CLASS_3_20C038B8D50982D6__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF4690)

inline static constexpr unsigned int Class_3_20C038B8D50982D6_TypeDefinitionIndex = 51297;

class Class_3_20C038B8D50982D6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareScepterMainUnitEffectTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + CLASS_3_20C038B8D50982D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20C038B8D50982D6_EVALUATE_OFFSET))(this);
	}
};
