#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> class Func_15; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> class Func_13; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4B9370)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_NEEDHIDECONTINUEATTACKFIELDS_OFFSET UNITYSDK_OFFSET(0x1A4B93B0)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B9410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ContinueAttackDetect_TypeDefinitionIndex = 74496;

	class ContinueAttackDetect : public ::MoleMole::Config::ConfigEntityAttackPattern
	{
	public:
		::MoleMole::Config::ConfigTimeDrivenAttackCollider* colliderCfg; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>* bindAnimList; // 0x88
		::System::Func_15<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupIDAndPosRot; // 0x90
		::System::Func_13<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupID; // 0x98
		::System::Single hitInterval; // 0xA0
		::System::Boolean isClearHitCntExitPattern; // 0xA4
		::System::Boolean isReenterForceHitInterval; // 0xA5
		::System::Boolean KeepWhenHit; // 0xA6
		::System::Boolean useAliveMaxRecoverTimes; // 0xA7
		::System::Single aliveDuration; // 0xA8
		::System::Boolean canSkipCurFixedUpdate; // 0xAC
		::System::Boolean isFollowAttacker; // 0xAD
		::System::Boolean IsHideContinueAttackFields; // 0xAE
		::System::Boolean manualConfigurationPatternListData; // 0xAF
		::System::Int32 aliveMaxHitCnt; // 0xB0
		::System::Int32 aliveMaxRecoverTimes; // 0xB4
		::System::Single unitMaxHitCnt; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::Boolean NeedHideContinueAttackFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_NEEDHIDECONTINUEATTACKFIELDS_OFFSET))(this);
		}
	};
}
