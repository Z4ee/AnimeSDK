#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client::Prop { class MonoPushDownObject; }
namespace RPG::GameCore { class AdvPlayerPushDownProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_327654700DEA38B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3701F0)
#define CLASS_2_327654700DEA38B4_METHOD_2_A0C13191B8508BD3_OFFSET UNITYSDK_OFFSET(0xD370B70)
#define CLASS_2_327654700DEA38B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD370450)
#define CLASS_2_327654700DEA38B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD370300)
#define CLASS_2_327654700DEA38B4_TICK_OFFSET UNITYSDK_OFFSET(0xD3709C0)
#define CLASS_2_327654700DEA38B4__CTOR_OFFSET UNITYSDK_OFFSET(0xD3700C0)

inline static constexpr unsigned int Class_2_327654700DEA38B4_TypeDefinitionIndex = 48445;

class Class_2_327654700DEA38B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::Prop::MonoPushDownObject* Field_2_2; // 0x20
	::RPG::GameCore::AdvPlayerPushDownProp* Field_2_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_3; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0C13191B8508BD3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_327654700DEA38B4_METHOD_2_A0C13191B8508BD3_OFFSET))(this, a1);
	}
};
