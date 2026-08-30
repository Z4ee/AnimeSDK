#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_243516B33988BE08_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14C2FAC0)
#define CLASS_3_243516B33988BE08__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2FA90)

inline static constexpr unsigned int Class_3_243516B33988BE08_TypeDefinitionIndex = 52374;

class Class_3_243516B33988BE08 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByEnableStoryStreamingSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + CLASS_3_243516B33988BE08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_243516B33988BE08_EVALUATE_OFFSET))(this);
	}
};
