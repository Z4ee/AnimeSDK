#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_198C3C5F8B64ECE7.h"

namespace RPG::GameCore { class StateTreeStateConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A72F039C0613D7D3__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB8B80)

inline static constexpr unsigned int Class_2_A72F039C0613D7D3_TypeDefinitionIndex = 42224;

class Class_2_A72F039C0613D7D3 : public ::Class_1_198C3C5F8B64ECE7
{
public:
	::System::Void _ctor(::RPG::GameCore::StateTreeStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_198C3C5F8B64ECE7* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeStateConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_198C3C5F8B64ECE7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A72F039C0613D7D3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
