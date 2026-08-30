#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DBD339B7E6B21555;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_223_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CB4530)
#define CLASS_3_27518451A20BB161_223__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB4500)

inline static constexpr unsigned int Class_3_27518451A20BB161_223_TypeDefinitionIndex = 55693;

class Class_3_27518451A20BB161_223 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DBD339B7E6B21555*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DBD339B7E6B21555* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DBD339B7E6B21555*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_223__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_223_ONTASKBEGIN_OFFSET))(this);
	}
};
