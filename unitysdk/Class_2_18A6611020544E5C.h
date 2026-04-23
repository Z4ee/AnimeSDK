#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"

class Class_1_BEB73AACF0CDA957;
class Class_1_EA80EBCE663FE95A;
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

#define CLASS_2_18A6611020544E5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE660610)
#define CLASS_2_18A6611020544E5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE660930)
#define CLASS_2_18A6611020544E5C_METHOD_2_4470079B241DC9AC_OFFSET UNITYSDK_OFFSET(0xE661690)
#define CLASS_2_18A6611020544E5C_METHOD_2_546A898B107DD9A0_OFFSET UNITYSDK_OFFSET(0xE661CF0)
#define CLASS_2_18A6611020544E5C_METHOD_2_54A38F8D8DAF21B2_OFFSET UNITYSDK_OFFSET(0xE661380)
#define CLASS_2_18A6611020544E5C_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xE660690)
#define CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET UNITYSDK_OFFSET(0xE661900)
#define CLASS_2_18A6611020544E5C_METHOD_2_B944848102CC2EEE_OFFSET UNITYSDK_OFFSET(0xE662340)
#define CLASS_2_18A6611020544E5C_METHOD_2_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0xE6615D0)
#define CLASS_2_18A6611020544E5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE660EB0)
#define CLASS_2_18A6611020544E5C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE661880)
#define CLASS_2_18A6611020544E5C_TICK_OFFSET UNITYSDK_OFFSET(0xE6609F0)
#define CLASS_2_18A6611020544E5C__CTOR_OFFSET UNITYSDK_OFFSET(0xE660600)

inline static constexpr unsigned int Class_2_18A6611020544E5C_TypeDefinitionIndex = 49172;

class Class_2_18A6611020544E5C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_5B599AA9B6DFF68F* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::RPG::Client::MonoHandOverlapTrigger* Field_2_6; // 0x28
	::RPG::Client::MonoCustomRotateItem* Field_2_8; // 0x30
	::RPG::Client::MonoControllableHand* Field_2_5; // 0x38
	::RPG::GameCore::SwitchHandStateSync* Field_2_0; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::RPG::GameCore::CharacterModelComponent* Field_2_3; // 0x50
	::System::UInt32 Field_2_2; // 0x58

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

	::System::UInt32 Method_2_54A38F8D8DAF21B2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_54A38F8D8DAF21B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_B4A92FBA9B14B708(::Class_1_EA80EBCE663FE95A* a1, ::Class_1_BEB73AACF0CDA957* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B944848102CC2EEE(::RPG::GameCore::ESwitchHandGestureType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B944848102CC2EEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_546A898B107DD9A0(::RPG::GameCore::ESwitchHandGestureType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_546A898B107DD9A0_OFFSET))(this, a1, a2);
	}
};
