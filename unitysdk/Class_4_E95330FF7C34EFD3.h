#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B65C7740BC15A3DB.h"

namespace RPG::GameCore { class SetDynamicValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_E95330FF7C34EFD3__CTOR_OFFSET UNITYSDK_OFFSET(0xD230530)

inline static constexpr unsigned int Class_4_E95330FF7C34EFD3_TypeDefinitionIndex = 55677;

class Class_4_E95330FF7C34EFD3 : public ::Class_3_B65C7740BC15A3DB
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + CLASS_4_E95330FF7C34EFD3__CTOR_OFFSET))(this, a1, a2);
	}
};
