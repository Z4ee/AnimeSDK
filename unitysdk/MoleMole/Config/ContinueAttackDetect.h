#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
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

#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x186C05F0)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_NEEDHIDECONTINUEATTACKFIELDS_OFFSET UNITYSDK_OFFSET(0x186C0630)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C0690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ContinueAttackDetect_TypeDefinitionIndex = 60042;

	class ContinueAttackDetect : public ::MoleMole::Config::ConfigEntityAttackPattern
	{
	public:
		::System::Func_15<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupIDAndPosRot; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>* bindAnimList; // 0x88
		::MoleMole::Config::ConfigTimeDrivenAttackCollider* colliderCfg; // 0x90
		::System::Func_13<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupID; // 0x98
		::System::Single unitMaxHitCnt; // 0xA0
		::System::Int32 aliveMaxRecoverTimes; // 0xA4
		::System::Int32 aliveMaxHitCnt; // 0xA8
		::System::Boolean KeepWhenHit; // 0xAC
		::System::Boolean isReenterForceHitInterval; // 0xAD
		::System::Boolean canSkipCurFixedUpdate; // 0xAE
		::System::Boolean IsHideContinueAttackFields; // 0xAF
		::System::Single hitInterval; // 0xB0
		::System::Single aliveDuration; // 0xB4
		::System::Boolean useAliveMaxRecoverTimes; // 0xB8
		::System::Boolean manualConfigurationPatternListData; // 0xB9
		::System::Boolean isFollowAttacker; // 0xBA
		::System::Boolean isClearHitCntExitPattern; // 0xBB

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
