#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F8475F35C1D70A82.h"

namespace RPG::GameCore { class ByIsBodyPartClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_A745CCAF07AE878E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0DC10)

inline static constexpr unsigned int Class_4_A745CCAF07AE878E_TypeDefinitionIndex = 52165;

class Class_4_A745CCAF07AE878E : public ::Class_3_F8475F35C1D70A82
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + CLASS_4_A745CCAF07AE878E__CTOR_OFFSET))(this, a1, a2);
	}
};
