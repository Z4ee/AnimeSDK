#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EF828F207E6BAF2B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitCustomString; }

#define CLASS_3_E0FAC42CA2CB3521__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBF970)

inline static constexpr unsigned int Class_3_E0FAC42CA2CB3521_TypeDefinitionIndex = 59029;

class Class_3_E0FAC42CA2CB3521 : public ::Class_2_EF828F207E6BAF2B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_E0FAC42CA2CB3521__CTOR_OFFSET))(this, a1, a2);
	}
};
