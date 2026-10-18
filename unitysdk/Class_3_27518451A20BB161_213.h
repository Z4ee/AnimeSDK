#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9A6D4F83FEFEE2DE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_213_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15722DA0)
#define CLASS_3_27518451A20BB161_213__CTOR_OFFSET UNITYSDK_OFFSET(0x15722D70)

inline static constexpr unsigned int Class_3_27518451A20BB161_213_TypeDefinitionIndex = 55238;

class Class_3_27518451A20BB161_213 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9A6D4F83FEFEE2DE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9A6D4F83FEFEE2DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9A6D4F83FEFEE2DE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_213__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_213_ONTASKBEGIN_OFFSET))(this);
	}
};
