#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_11EC94CEE42888F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_172_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD3AC70)
#define CLASS_3_27518451A20BB161_172__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3AC40)

inline static constexpr unsigned int Class_3_27518451A20BB161_172_TypeDefinitionIndex = 52057;

class Class_3_27518451A20BB161_172 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_11EC94CEE42888F1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_11EC94CEE42888F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_11EC94CEE42888F1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_172__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_172_ONTASKBEGIN_OFFSET))(this);
	}
};
