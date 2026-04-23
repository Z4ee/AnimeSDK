#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_45F1B947F980A2C0_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA7B54F0)
#define CLASS_3_45F1B947F980A2C0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B54C0)

inline static constexpr unsigned int Class_3_45F1B947F980A2C0_TypeDefinitionIndex = 49704;

class Class_3_45F1B947F980A2C0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByInAlertRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByInAlertRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_3_45F1B947F980A2C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45F1B947F980A2C0_EVALUATE_OFFSET))(this);
	}
};
