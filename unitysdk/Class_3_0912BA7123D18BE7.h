#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByEntityCreated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0912BA7123D18BE7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18B0EAC0)
#define CLASS_3_0912BA7123D18BE7__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0EA90)

inline static constexpr unsigned int Class_3_0912BA7123D18BE7_TypeDefinitionIndex = 50717;

class Class_3_0912BA7123D18BE7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByEntityCreated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityCreated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + CLASS_3_0912BA7123D18BE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0912BA7123D18BE7_EVALUATE_OFFSET))(this);
	}
};
