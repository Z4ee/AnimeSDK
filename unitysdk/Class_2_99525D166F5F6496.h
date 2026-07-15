#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BattleCollegeAimShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_99525D166F5F6496_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175FBBC0)
#define CLASS_2_99525D166F5F6496_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x175FBC60)
#define CLASS_2_99525D166F5F6496_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x175FBEF0)
#define CLASS_2_99525D166F5F6496_TICK_OFFSET UNITYSDK_OFFSET(0x175FBC00)
#define CLASS_2_99525D166F5F6496__CTOR_OFFSET UNITYSDK_OFFSET(0x175FBBB0)

inline static constexpr unsigned int Class_2_99525D166F5F6496_TypeDefinitionIndex = 55371;

class Class_2_99525D166F5F6496 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::BattleCollegeAimShow* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleCollegeAimShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleCollegeAimShow*))((::PBYTE)hIl2Cpp + CLASS_2_99525D166F5F6496__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99525D166F5F6496_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99525D166F5F6496_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99525D166F5F6496_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99525D166F5F6496_ONTASKRESET_OFFSET))(this);
	}
};
