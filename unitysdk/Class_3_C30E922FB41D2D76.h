#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckBloodLinkDead; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C30E922FB41D2D76_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18007B30)
#define CLASS_3_C30E922FB41D2D76__CTOR_OFFSET UNITYSDK_OFFSET(0x18007B00)

inline static constexpr unsigned int Class_3_C30E922FB41D2D76_TypeDefinitionIndex = 54706;

class Class_3_C30E922FB41D2D76 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckBloodLinkDead*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + CLASS_3_C30E922FB41D2D76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C30E922FB41D2D76_EVALUATE_OFFSET))(this);
	}
};
