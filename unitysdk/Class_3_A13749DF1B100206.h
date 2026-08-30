#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ConvinceMovePrevTurn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A13749DF1B100206_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3E3940)
#define CLASS_3_A13749DF1B100206_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xF3E3B10)
#define CLASS_3_A13749DF1B100206__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E3910)

inline static constexpr unsigned int Class_3_A13749DF1B100206_TypeDefinitionIndex = 52982;

class Class_3_A13749DF1B100206 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceMovePrevTurn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + CLASS_3_A13749DF1B100206__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A13749DF1B100206_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_A13749DF1B100206_SETNEXTTASK_OFFSET))(this, a1);
	}
};
