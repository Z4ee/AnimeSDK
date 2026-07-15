#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_529;
class Class_1_07A210D994F284D8_4;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1DB6C02CA182EEBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C4A6B0)
#define CLASS_2_1DB6C02CA182EEBA_GET_CURRENTABILITYTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0x17C4A8E0)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x17C4A8C0)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C4A8A0)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x17C4A810)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x17C4A7F0)
#define CLASS_2_1DB6C02CA182EEBA_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C4A830)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x17C4A730)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x17C4A850)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x17C4A900)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x17C4A7A0)
#define CLASS_2_1DB6C02CA182EEBA_SET_CURRENTABILITYTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0x17C4A8F0)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x17C4A8D0)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C4A8B0)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x17C4A820)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x17C4A800)
#define CLASS_2_1DB6C02CA182EEBA_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C4A840)
#define CLASS_2_1DB6C02CA182EEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4A5C0)

inline static constexpr unsigned int Class_2_1DB6C02CA182EEBA_TypeDefinitionIndex = 53297;

class Class_2_1DB6C02CA182EEBA : public ::Class_1_A2D8E5AB4B623162
{
public:
	::RPG::GameCore::GameEntity* _CurrentAbilityTargetGroupLeader_k__BackingField; // 0x90
	::Class_0_16E4307DCC419505_529* _ParentParallelTaskList_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0xA0
	::RPG::GameCore::TurnBasedAbilityConfig* Field_2_3; // 0xA8
	::Class_1_07A210D994F284D8_4* _ParallelRoot_k__BackingField; // 0xB0
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0xB8
	::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0xC0
	::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0xC8
	::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0xD0

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_529* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_529*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_529* get_ParentParallelTaskList()
	{
		return ((::Class_0_16E4307DCC419505_529*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
	}

	::System::Void set_ParentParallelTaskList(::Class_0_16E4307DCC419505_529* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_529*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARENTPARALLELTASKLIST_OFFSET))(this, a1);
	}

	::Class_1_07A210D994F284D8_4* get_ParallelRoot()
	{
		return ((::Class_1_07A210D994F284D8_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELROOT_OFFSET))(this);
	}

	::System::Void set_ParallelRoot(::Class_1_07A210D994F284D8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_4*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELROOT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_TargetTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ParallelDelayTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELDELAYTIME_OFFSET))(this);
	}

	::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELDELAYTIME_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_CurrentAbilityTargetGroupLeader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_CURRENTABILITYTARGETGROUPLEADER_OFFSET))(this);
	}

	::System::Void set_CurrentAbilityTargetGroupLeader(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_CURRENTABILITYTARGETGROUPLEADER_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}
};
