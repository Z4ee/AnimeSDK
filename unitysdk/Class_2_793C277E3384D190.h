#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class StartMatchThreeV2PVE1v1Game; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_793C277E3384D190_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1136AF90)
#define CLASS_2_793C277E3384D190_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1136AFD0)
#define CLASS_2_793C277E3384D190_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1136B540)
#define CLASS_2_793C277E3384D190_TICK_OFFSET UNITYSDK_OFFSET(0x1136B590)
#define CLASS_2_793C277E3384D190__CTOR_OFFSET UNITYSDK_OFFSET(0x1136AF80)
#define CLASS_2_793C277E3384D190__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1136B5F0)

inline static constexpr unsigned int Class_2_793C277E3384D190_TypeDefinitionIndex = 47405;

class Class_2_793C277E3384D190 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::StartMatchThreeV2PVE1v1Game* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793C277E3384D190__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
