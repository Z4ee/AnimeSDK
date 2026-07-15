#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class MonoPushDownObject; }
namespace RPG::GameCore { class AdvPlayerPushDownProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B0AE2CFF72FC6F8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E95220)
#define CLASS_2_B0AE2CFF72FC6F8B_METHOD_2_10633FB61A0D692F_OFFSET UNITYSDK_OFFSET(0x16E95E10)
#define CLASS_2_B0AE2CFF72FC6F8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E95550)
#define CLASS_2_B0AE2CFF72FC6F8B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E95400)
#define CLASS_2_B0AE2CFF72FC6F8B_TICK_OFFSET UNITYSDK_OFFSET(0x16E95C60)
#define CLASS_2_B0AE2CFF72FC6F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x16E95080)

inline static constexpr unsigned int Class_2_B0AE2CFF72FC6F8B_TypeDefinitionIndex = 50084;

class Class_2_B0AE2CFF72FC6F8B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::Client::Prop::MonoPushDownObject* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::AdvPlayerPushDownProp* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_10633FB61A0D692F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B0AE2CFF72FC6F8B_METHOD_2_10633FB61A0D692F_OFFSET))(this, a1);
	}
};
