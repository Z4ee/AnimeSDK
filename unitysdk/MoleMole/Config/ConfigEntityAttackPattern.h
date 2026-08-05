#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotYType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
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

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN_GETCOLLISIONCENTER_OFFSET UNITYSDK_OFFSET(0x1A4AC180)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AC380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_TypeDefinitionIndex = 59115;

	class ConfigEntityAttackPattern : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* BeBlockTags; // 0x10
		::Il2CppArray<::System::String*>* TagList; // 0x18
		::System::Func_11<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean>* patternMethod; // 0x20
		::System::String* BaseCenterTargetCustomKey; // 0x28
		::System::String* BaseAttachPoint; // 0x30
		::System::Func_14<::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Boolean>* patternMethodWithPosRot; // 0x38
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType BaseXZRotType; // 0x40
		::System::Boolean LockYAxis; // 0x44
		::System::Boolean ForceAttackInvincibleTarget; // 0x45
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType BaseYRotType; // 0x48
		::System::Single AngleXOffset; // 0x4C
		::System::Single CenterYOffset; // 0x50
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType BaseYType; // 0x54
		::System::Single AngleZOffset; // 0x58
		::System::Single AttackResultFilterCoreDistance; // 0x5C
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType BaseXZType; // 0x60
		::System::Single DebugAttackRate; // 0x64
		::System::Boolean IsAngleOffsetLocal; // 0x68
		::System::Boolean IgnoreOnParryBeingHitCallback; // 0x69
		::System::Boolean IsSubtractive; // 0x6A
		::System::Boolean OpenDebugAttackRate; // 0x6B
		::System::Single CenterXOffset; // 0x6C
		::System::Single AngleYOffset; // 0x70
		::System::Single CenterZOffset; // 0x74
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x78
		::System::Boolean LockXAxis; // 0x7C
		::System::Boolean ShowDebug; // 0x7D
		::System::Boolean LockZAxis; // 0x7E

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
