#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_26FABDF4360D5746.h"

namespace RPG::GameCore { class ByCompareTargetCountClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_E84CDA127E9FF478__CTOR_OFFSET UNITYSDK_OFFSET(0x8A67E20)

inline static constexpr unsigned int Class_4_E84CDA127E9FF478_TypeDefinitionIndex = 43659;

class Class_4_E84CDA127E9FF478 : public ::Class_3_26FABDF4360D5746
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + CLASS_4_E84CDA127E9FF478__CTOR_OFFSET))(this, a1, a2);
	}
};
