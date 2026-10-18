#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5057FF2FC249EB8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF88AE00)
#define CLASS_3_27518451A20BB161_99__CTOR_OFFSET UNITYSDK_OFFSET(0xF88ADD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_99_TypeDefinitionIndex = 53053;

class Class_3_27518451A20BB161_99 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5057FF2FC249EB8D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5057FF2FC249EB8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5057FF2FC249EB8D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_99_ONTASKBEGIN_OFFSET))(this);
	}
};
