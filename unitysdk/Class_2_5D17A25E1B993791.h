#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5D17A25E1B993791_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C91040)
#define CLASS_2_5D17A25E1B993791_METHOD_2_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x18C920D0)
#define CLASS_2_5D17A25E1B993791_METHOD_2_42D97A8CBDA1DDFB_OFFSET UNITYSDK_OFFSET(0x18C92600)
#define CLASS_2_5D17A25E1B993791_METHOD_2_49D0AA3CA011A2D8_OFFSET UNITYSDK_OFFSET(0x18C913C0)
#define CLASS_2_5D17A25E1B993791_METHOD_2_DF09B691B31D076E_OFFSET UNITYSDK_OFFSET(0x18C91B90)
#define CLASS_2_5D17A25E1B993791_METHOD_2_EBBE08F2874773A2_OFFSET UNITYSDK_OFFSET(0x18C91570)
#define CLASS_2_5D17A25E1B993791_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x18C92790)
#define CLASS_2_5D17A25E1B993791_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C91080)
#define CLASS_2_5D17A25E1B993791_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C91AC0)
#define CLASS_2_5D17A25E1B993791_TICK_OFFSET UNITYSDK_OFFSET(0x18C916A0)
#define CLASS_2_5D17A25E1B993791__CTOR_OFFSET UNITYSDK_OFFSET(0x18C91020)
#define CLASS_2_5D17A25E1B993791__ONTASKSUCCESS_B__7_2_OFFSET UNITYSDK_OFFSET(0x18C92C10)
#define CLASS_2_5D17A25E1B993791__ONTASKSUCCESS_B__7_3_OFFSET UNITYSDK_OFFSET(0x18C92C80)
#define CLASS_2_5D17A25E1B993791__TICK_B__4_0_OFFSET UNITYSDK_OFFSET(0x18C92A20)

inline static constexpr unsigned int Class_2_5D17A25E1B993791_TypeDefinitionIndex = 50017;

class Class_2_5D17A25E1B993791 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::AdvNpcFaceToPlayer* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::Boolean Field_2_6; // 0x40
	::System::UInt32 Field_2_7; // 0x44
	::UnityEngine::Vector3 Field_2_8; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFaceToPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFaceToPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF09B691B31D076E(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_METHOD_2_DF09B691B31D076E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_42D97A8CBDA1DDFB(::RPG::GameCore::AdventureCharacterController* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_METHOD_2_42D97A8CBDA1DDFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_METHOD_2_1283EC0876EAAACF_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_49D0AA3CA011A2D8(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::TargetEvaluator* a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_METHOD_2_49D0AA3CA011A2D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* Method_2_EBBE08F2874773A2()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_METHOD_2_EBBE08F2874773A2_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void _Tick_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791__TICK_B__4_0_OFFSET))(this);
	}

	::System::Boolean _OnTaskSuccess_b__7_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791__ONTASKSUCCESS_B__7_2_OFFSET))(this, a1);
	}

	::System::Boolean _OnTaskSuccess_b__7_3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5D17A25E1B993791__ONTASKSUCCESS_B__7_3_OFFSET))(this, a1);
	}
};
