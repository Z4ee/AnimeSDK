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

#define CLASS_2_18A6611020544E5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176714C0)
#define CLASS_2_18A6611020544E5C_METHOD_2_14103B4D7F556AC2_OFFSET UNITYSDK_OFFSET(0x17673710)
#define CLASS_2_18A6611020544E5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17671900)
#define CLASS_2_18A6611020544E5C_METHOD_2_4470079B241DC9AC_OFFSET UNITYSDK_OFFSET(0x176728F0)
#define CLASS_2_18A6611020544E5C_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x17671540)
#define CLASS_2_18A6611020544E5C_METHOD_2_B060EFAD670F0C83_OFFSET UNITYSDK_OFFSET(0x17673040)
#define CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET UNITYSDK_OFFSET(0x17672B70)
#define CLASS_2_18A6611020544E5C_METHOD_2_C065D9865AD72EAA_OFFSET UNITYSDK_OFFSET(0x17672520)
#define CLASS_2_18A6611020544E5C_METHOD_2_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0x17672820)
#define CLASS_2_18A6611020544E5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17671FC0)
#define CLASS_2_18A6611020544E5C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17672AF0)
#define CLASS_2_18A6611020544E5C_TICK_OFFSET UNITYSDK_OFFSET(0x176719C0)
#define CLASS_2_18A6611020544E5C__CTOR_OFFSET UNITYSDK_OFFSET(0x176714B0)

inline static constexpr unsigned int Class_2_18A6611020544E5C_TypeDefinitionIndex = 53578;

class Class_2_18A6611020544E5C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x18
	::RPG::Client::MonoCustomRotateItem* KIOMFMKAPEH; // 0x20
	::RPG::Client::MonoHandOverlapTrigger* KEJPFIAHINP; // 0x28
	::RPG::GameCore::SwitchHandStateSync* IGHAHBNLIJA; // 0x30
	::UnityEngine::Transform* LNFLNINJBCN; // 0x38
	::RPG::Client::MonoControllableHand* KNBJLAPEIFJ; // 0x40
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x48
	::Class_2_5B599AA9B6DFF68F* NOLJIPMCEAK; // 0x50
	::System::UInt32 NJFKHPIHDEF; // 0x58

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

	::System::UInt32 Method_2_C065D9865AD72EAA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_C065D9865AD72EAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_B4A92FBA9B14B708(::Class_1_3497D086B05ACE3A* a1, ::Class_1_BEB73AACF0CDA957* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_B4A92FBA9B14B708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14103B4D7F556AC2(::RPG::GameCore::ESwitchHandGestureType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CLASS_2_18A6611020544E5C_METHOD_2_14103B4D7F556AC2_OFFSET))(this, a1);
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
