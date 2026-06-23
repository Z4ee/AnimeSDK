#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_2_D24637F5237CFC57;
class Class_3_3B42BC0680587011;
class Class_3_6D73516CC6FEADD7;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class ComprehensiveAttack_ForceExitSettingData; }
namespace MoleMole { class ComprehensiveAttack_SuccessExitSettingData; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_COMPREHENSIVEATTACK_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17D360A0)
#define MOLEMOLE_COMPREHENSIVEATTACK_APPLYPARAMVALUES_OFFSET UNITYSDK_OFFSET(0x17D36EA0)
#define MOLEMOLE_COMPREHENSIVEATTACK_APPLYRESULT_OFFSET UNITYSDK_OFFSET(0x17D36BF0)
#define MOLEMOLE_COMPREHENSIVEATTACK_CHECKFORCEEXIT_OFFSET UNITYSDK_OFFSET(0x17D36D00)
#define MOLEMOLE_COMPREHENSIVEATTACK_CHECKSUCCESSEXITCONDITION_OFFSET UNITYSDK_OFFSET(0x17D37070)
#define MOLEMOLE_COMPREHENSIVEATTACK_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17D361A0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ISSUCCESSEXITSETTINGVALID_OFFSET UNITYSDK_OFFSET(0x17D36FE0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17D35AC0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONEND_OFFSET UNITYSDK_OFFSET(0x17D37220)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONRESET_OFFSET UNITYSDK_OFFSET(0x17D37640)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONSTART_OFFSET UNITYSDK_OFFSET(0x17D36290)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17D36400)
#define MOLEMOLE_COMPREHENSIVEATTACK_REFRESHSUCCESSEXITTRACKING_OFFSET UNITYSDK_OFFSET(0x17D37330)
#define MOLEMOLE_COMPREHENSIVEATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17D377B0)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17D37970)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x17D37A00)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x17D37A90)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x17D37B20)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17D37BB0)

namespace MoleMole
{
	inline static constexpr unsigned int ComprehensiveAttack_TypeDefinitionIndex = 66000;

	class ComprehensiveAttack : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitFailParams; // 0x58
		::Class_3_6D73516CC6FEADD7* _aiComponent; // 0x60
		::BehaviorDesigner::Runtime::SharedString* AttackTrigger; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* AttackIndexNum; // 0x70
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitFailValues; // 0x78
		::MoleMole::Battle::Entity* _ownerEntity; // 0x80
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitSuccessValues; // 0x88
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnEnterParams; // 0x90
		::Class_2_D24637F5237CFC57* comprehensiveAttackTask; // 0x98
		::MoleMole::ComprehensiveAttack_ForceExitSettingData* ForceExitSetting; // 0xA0
		::MoleMole::ComprehensiveAttack_SuccessExitSettingData* SuccessExitSetting; // 0xA8
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xB0
		::BehaviorDesigner::Runtime::SharedInt* AnimatorLayer; // 0xB8
		::Class_3_F33F9DC5F4112336* _animatorComponent; // 0xC0
		::BehaviorDesigner::Runtime::SharedFloat* MaxWaitTime; // 0xC8
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitSuccessParams; // 0xD0
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnEnterValues; // 0xD8
		::BehaviorDesigner::Runtime::SharedString* AttackIndexName; // 0xE0
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* SharedAnimatorIDs; // 0xE8
		::Il2CppArray<::System::String*>* AnimatorIDs; // 0xF0
		::Class_3_3B42BC0680587011* _inputComponent; // 0xF8
		::Il2CppArray<::System::Int32>* _animatorIDHashes; // 0x100
		::System::Single _successExitNormalizedTime; // 0x108
		::System::Boolean _onEnterApplied; // 0x10C
		::System::Boolean _resultApplied; // 0x10D
		::System::Boolean _inCurrentAnim; // 0x10E
		::System::Boolean _enteredSuccessExitAnim; // 0x10F
		::System::Int32 _currentAnimIndex; // 0x110
		::System::Single _waitTimer; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONAWAKE_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus CheckForceExit(::UnityEngine::AnimatorStateInfo curState, ::System::Int32 currentHash, ::System::Int32 layer)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_CHECKFORCEEXIT_OFFSET))(this, curState, currentHash, layer);
		}

		static ::System::Void ApplyParamValues(::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* paramArray, ::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* valueArray)
		{
			return ((::System::Void(*)(::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>*, ::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_APPLYPARAMVALUES_OFFSET))(paramArray, valueArray);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus ApplyResult(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_APPLYRESULT_OFFSET))(this, status);
		}

		::System::Boolean IsSuccessExitSettingValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ISSUCCESSEXITSETTINGVALID_OFFSET))(this);
		}

		::System::Boolean CheckSuccessExitCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_CHECKSUCCESSEXITCONDITION_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONEND_OFFSET))(this);
		}

		::System::Void RefreshSuccessExitTracking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_REFRESHSUCCESSEXITTRACKING_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
