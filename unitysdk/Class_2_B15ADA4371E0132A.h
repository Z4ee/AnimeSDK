#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetBattleBGMToStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B15ADA4371E0132A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CC7D40)
#define CLASS_2_B15ADA4371E0132A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CC7D80)
#define CLASS_2_B15ADA4371E0132A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CC7EB0)
#define CLASS_2_B15ADA4371E0132A_TICK_OFFSET UNITYSDK_OFFSET(0x17CC7F00)
#define CLASS_2_B15ADA4371E0132A__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC7D30)

inline static constexpr unsigned int Class_2_B15ADA4371E0132A_TypeDefinitionIndex = 58542;

class Class_2_B15ADA4371E0132A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ResetBattleBGMToStage* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetBattleBGMToStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetBattleBGMToStage*))((::PBYTE)hIl2Cpp + CLASS_2_B15ADA4371E0132A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B15ADA4371E0132A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B15ADA4371E0132A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B15ADA4371E0132A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B15ADA4371E0132A_TICK_OFFSET))(this, a1);
	}
};
