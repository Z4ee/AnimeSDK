#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GravityBallPuzzleSwitchBoardWaitFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9AD961DB2EE1F02C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F20F10)
#define CLASS_2_9AD961DB2EE1F02C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F20F50)
#define CLASS_2_9AD961DB2EE1F02C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F21100)
#define CLASS_2_9AD961DB2EE1F02C_TICK_OFFSET UNITYSDK_OFFSET(0x17F21140)
#define CLASS_2_9AD961DB2EE1F02C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F20F00)
#define CLASS_2_9AD961DB2EE1F02C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F211A0)

inline static constexpr unsigned int Class_2_9AD961DB2EE1F02C_TypeDefinitionIndex = 50522;

class Class_2_9AD961DB2EE1F02C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AD961DB2EE1F02C__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
