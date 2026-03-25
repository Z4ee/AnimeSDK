#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6B17A1374373AA4B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_28_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4DF920)
#define CLASS_3_27518451A20BB161_28__CTOR_OFFSET UNITYSDK_OFFSET(0xC4DF8F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_28_TypeDefinitionIndex = 42774;

class Class_3_27518451A20BB161_28 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6B17A1374373AA4B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6B17A1374373AA4B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6B17A1374373AA4B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_28_ONTASKBEGIN_OFFSET))(this);
	}
};
