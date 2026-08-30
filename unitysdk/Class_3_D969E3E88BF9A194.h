#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ConvinceMoveCurrTurnOption; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D969E3E88BF9A194_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7BE130)
#define CLASS_3_D969E3E88BF9A194_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1A7BE320)
#define CLASS_3_D969E3E88BF9A194__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BE100)

inline static constexpr unsigned int Class_3_D969E3E88BF9A194_TypeDefinitionIndex = 52980;

class Class_3_D969E3E88BF9A194 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceMoveCurrTurnOption*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*))((::PBYTE)hIl2Cpp + CLASS_3_D969E3E88BF9A194__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D969E3E88BF9A194_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_D969E3E88BF9A194_SETNEXTTASK_OFFSET))(this, a1);
	}
};
