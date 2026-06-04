#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitWolfBroPuzzleStartup; }

#define CLASS_2_B74EA541A1858FE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144F8EE0)
#define CLASS_2_B74EA541A1858FE3_METHOD_2_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x144F9320)
#define CLASS_2_B74EA541A1858FE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144F8B50)
#define CLASS_2_B74EA541A1858FE3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144F8D40)
#define CLASS_2_B74EA541A1858FE3_TICK_OFFSET UNITYSDK_OFFSET(0x144F8FF0)
#define CLASS_2_B74EA541A1858FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x144F8A20)

inline static constexpr unsigned int Class_2_B74EA541A1858FE3_TypeDefinitionIndex = 55080;

class Class_2_B74EA541A1858FE3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::Client::Prop::WolfBroPuzzleBoard* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::WaitWolfBroPuzzleStartup* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B74EA541A1858FE3_METHOD_2_C081D0F1BA12AC56_OFFSET))(this, a1);
	}
};
