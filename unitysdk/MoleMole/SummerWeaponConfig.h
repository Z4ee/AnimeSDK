#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/AimAssistCrossHairMoveRatioParam.h"
#include "unitysdk/MoleMole/SummerWeaponConfig_CrossHairRayShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class SummerEventWeaponSkillParamBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERWEAPONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE1460)

namespace MoleMole
{
	inline static constexpr unsigned int SummerWeaponConfig_TypeDefinitionIndex = 84859;

	class SummerWeaponConfig : public ::System::Object
	{
	public:
		::System::Int32 magazineCapacity; // 0x10
		::System::String* bulletConfigKey; // 0x18
		::System::String* ChargeSkillValueKey; // 0x20
		::System::String* ChargeSkillMaxValueKey; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* weaponAnimatorZoneTags; // 0x30
		::System::String* weaponSwitchAbilityEventKey; // 0x38
		::MoleMole::SummerEventWeaponSkillParamBase* weaponSkillParam; // 0x40
		::Foundation::AssetPath crossHairPath; // 0x48
		::MoleMole::SummerWeaponConfig_CrossHairRayShape crossHairRayShape; // 0x58
		::System::Single crossHairRaycastRadius; // 0x5C
		::UnityEngine::Vector2 crossHairBoxRayParam; // 0x60
		::System::String* crossHairChangeEvent; // 0x68
		::System::String* crossHairResetEvent; // 0x70
		::Foundation::AssetPath weaponIconPath; // 0x78
		::System::Boolean noBulletWeapon; // 0x88
		::MoleMole::AimAssistCrossHairMoveRatioParam AssistRatio; // 0x8C
		::System::Single reloadTime; // 0x9C
		::System::Single backstageReloadTime; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERWEAPONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
