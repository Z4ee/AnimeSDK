#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"

class Class_1_3497D086B05ACE3A;
class Class_1_BEB73AACF0CDA957;
class Class_2_5B599AA9B6DFF68F;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::Client { class MonoCustomRotateItem; }
namespace RPG::Client { class MonoHandOverlapTrigger; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchHandStateSync; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_18A6611020544E5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C0AA60)
#define CLASS_2_18A6611020544E5C_METHOD_2_17F25267A311530C_OFFSET UNITYSDK_OFFSET(0x13C0B840)
#define CLASS_2_18A6611020544E5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13C0ADC0)
#define CLASS_2_18A6611020544E5C_METHOD_2_4470079B241DC9AC_OFFSET UNITYSDK_OFFSET(0x13C0BB90)
#define CLASS_2_18A6611020544E5C_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x13C0AAE0)
#define CLASS_2_18A6611020544E5C_METHOD_2_B060EFAD670F0C83_OFFSET UNITYSDK_OFFSET(0x13C0C200)
#define CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET UNITYSDK_OFFSET(0x13C0BE10)
#define CLASS_2_18A6611020544E5C_METHOD_2_B944848102CC2EEE_OFFSET UNITYSDK_OFFSET(0x13C0C8A0)
#define CLASS_2_18A6611020544E5C_METHOD_2_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0x13C0BAC0)
#define CLASS_2_18A6611020544E5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C0B340)
#define CLASS_2_18A6611020544E5C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C0BD90)
#define CLASS_2_18A6611020544E5C_TICK_OFFSET UNITYSDK_OFFSET(0x13C0AE80)
#define CLASS_2_18A6611020544E5C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0AA50)

inline static constexpr unsigned int Class_2_18A6611020544E5C_TypeDefinitionIndex = 49839;

class Class_2_18A6611020544E5C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::MonoHandOverlapTrigger* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::CharacterModelComponent* Field_2_3; // 0x30
	::RPG::Client::MonoCustomRotateItem* Field_2_4; // 0x38
	::RPG::Client::MonoControllableHand* Field_2_5; // 0x40
	::RPG::GameCore::SwitchHandStateSync* Field_2_6; // 0x48
	::Class_2_5B599AA9B6DFF68F* Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandStateSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandStateSync*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_C49BD18776DC458B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_C49BD18776DC458B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4470079B241DC9AC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_4470079B241DC9AC_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_ONTASKRESET_OFFSET))(this);
	}

	::System::UInt32 Method_2_17F25267A311530C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_17F25267A311530C_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_B4A92FBA9B14B708(::Class_1_3497D086B05ACE3A* a1, ::Class_1_BEB73AACF0CDA957* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B944848102CC2EEE(::RPG::GameCore::ESwitchHandGestureType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B944848102CC2EEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_B060EFAD670F0C83(::RPG::GameCore::ESwitchHandGestureType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B060EFAD670F0C83_OFFSET))(this, a1, a2);
	}
};
