#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ConvinceMoveNextTurn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D04FED4CCA042F60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3E3DF0)
#define CLASS_3_D04FED4CCA042F60_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xF3E3FE0)
#define CLASS_3_D04FED4CCA042F60__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E3DC0)

inline static constexpr unsigned int Class_3_D04FED4CCA042F60_TypeDefinitionIndex = 52981;

class Class_3_D04FED4CCA042F60 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceMoveNextTurn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveNextTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveNextTurn*))((::PBYTE)hIl2Cpp + CLASS_3_D04FED4CCA042F60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D04FED4CCA042F60_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_D04FED4CCA042F60_SETNEXTTASK_OFFSET))(this, a1);
	}
};
