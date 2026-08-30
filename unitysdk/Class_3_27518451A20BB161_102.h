#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0399F40049476FEF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_102_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572DE70)
#define CLASS_3_27518451A20BB161_102__CTOR_OFFSET UNITYSDK_OFFSET(0x1572DE40)

inline static constexpr unsigned int Class_3_27518451A20BB161_102_TypeDefinitionIndex = 53557;

class Class_3_27518451A20BB161_102 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0399F40049476FEF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0399F40049476FEF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0399F40049476FEF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102_ONTASKBEGIN_OFFSET))(this);
	}
};
