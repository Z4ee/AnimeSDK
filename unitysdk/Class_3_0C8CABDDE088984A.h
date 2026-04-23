#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInDistrict; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C8CABDDE088984A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117FE2F0)
#define CLASS_3_0C8CABDDE088984A__CTOR_OFFSET UNITYSDK_OFFSET(0x117FE2C0)

inline static constexpr unsigned int Class_3_0C8CABDDE088984A_TypeDefinitionIndex = 49003;

class Class_3_0C8CABDDE088984A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInDistrict*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInDistrict* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + CLASS_3_0C8CABDDE088984A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C8CABDDE088984A_EVALUATE_OFFSET))(this);
	}
};
