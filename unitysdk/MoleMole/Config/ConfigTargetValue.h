#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TargetValueModuleBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x192A94A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetValue_TypeDefinitionIndex = 42070;

	class ConfigTargetValue : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* DistanceBasedTargetValue; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::System::Single>*>* CampAdditionValues; // 0x18
		::UnityEngine::AnimationCurve* AngleBasedTargetValue; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::TargetValueModuleBase*>* AddOnGamePlayTargetValueModules; // 0x28
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Single>* CharacterSizeAdditionValues; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Single>* MonsterStrengthTypeAdditionalValues; // 0x38
		::UnityEngine::AnimationCurve* DynamicTargetValueLossCurve; // 0x40
		::System::Single SelectedAsTarget_MaxValue; // 0x48
		::System::Single SelectedTargetAdditionalTargetValue; // 0x4C
		::System::Single HitIncDynamicTargetValueCd; // 0x50
		::System::Single OnEnterRange_Range; // 0x54
		::System::Single SelectedAsTarget_DecaySpeed; // 0x58
		::System::Single OnEnterRange_RandValue; // 0x5C
		::System::Single SelectedAsTarget_AddValue; // 0x60
		::System::Single SelectedAsTarget_AddCD; // 0x64
		::System::Single HitIncDynamicTargetValue; // 0x68
		::System::Single SelectedAsTarget_MinValue; // 0x6C
		::System::Single InitTargetValue; // 0x70
		::System::Single OnEnterRange_DecaySpeed; // 0x74
		::System::Single MaxHitDynamicTargetValue; // 0x78
		::System::Single OnEnterRange_InitValue; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETVALUE__CTOR_OFFSET))(this);
		}
	};
}
