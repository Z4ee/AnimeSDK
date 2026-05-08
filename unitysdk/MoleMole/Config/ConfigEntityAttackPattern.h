#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotYType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> class Func_14; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> class Func_11; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN_GETCOLLISIONCENTER_OFFSET UNITYSDK_OFFSET(0x186B0410)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x186B0610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_TypeDefinitionIndex = 71087;

	class ConfigEntityAttackPattern : public ::System::Object
	{
	public:
		::System::String* BaseAttachPoint; // 0x10
		::System::String* BaseCenterTargetCustomKey; // 0x18
		::System::Func_14<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Boolean>* patternMethodWithPosRot; // 0x20
		::Il2CppArray<::System::String*>* TagList; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* BeBlockTags; // 0x30
		::System::Func_11<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Boolean>* patternMethod; // 0x38
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x40
		::System::Single CenterYOffset; // 0x44
		::System::Single AngleXOffset; // 0x48
		::System::Single CenterZOffset; // 0x4C
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType BaseXZRotType; // 0x50
		::System::Single AngleZOffset; // 0x54
		::System::Boolean OpenDebugAttackRate; // 0x58
		::System::Boolean LockZAxis; // 0x59
		::System::Boolean IsSubtractive; // 0x5A
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType BaseYType; // 0x5C
		::System::Single AngleYOffset; // 0x60
		::System::Boolean ForceAttackInvincibleTarget; // 0x64
		::System::Boolean IsAngleOffsetLocal; // 0x65
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType BaseXZType; // 0x68
		::System::Single DebugAttackRate; // 0x6C
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType BaseYRotType; // 0x70
		::System::Single AttackResultFilterCoreDistance; // 0x74
		::System::Boolean IgnoreOnParryBeingHitCallback; // 0x78
		::System::Boolean LockYAxis; // 0x79
		::System::Boolean LockXAxis; // 0x7A
		::System::Boolean ShowDebug; // 0x7B
		::System::Single CenterXOffset; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCollisionCenter(::MoleMole::Battle::Entity* casterEntity, ::MoleMole::Battle::Entity* centerEntity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN_GETCOLLISIONCENTER_OFFSET))(this, casterEntity, centerEntity);
		}
	};
}
