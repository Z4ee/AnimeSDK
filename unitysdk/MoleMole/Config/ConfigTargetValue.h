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

#define MOLEMOLE_CONFIG_CONFIGTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x14875E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetValue_TypeDefinitionIndex = 54754;

	class ConfigTargetValue : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* DynamicTargetValueLossCurve; // 0x10
		::UnityEngine::AnimationCurve* AngleBasedTargetValue; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::TargetValueModuleBase*>* AddOnGamePlayTargetValueModules; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CampType, ::System::Single>*>* CampAdditionValues; // 0x28
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Single>* CharacterSizeAdditionValues; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Single>* MonsterStrengthTypeAdditionalValues; // 0x38
		::UnityEngine::AnimationCurve* DistanceBasedTargetValue; // 0x40
		::System::Single HitIncDynamicTargetValue; // 0x48
		::System::Single SelectedAsTarget_DecaySpeed; // 0x4C
		::System::Single MaxHitDynamicTargetValue; // 0x50
		::System::Single OnEnterRange_RandValue; // 0x54
		::System::Single SelectedAsTarget_MaxValue; // 0x58
		::System::Single OnEnterRange_InitValue; // 0x5C
		::System::Single SelectedAsTarget_AddValue; // 0x60
		::System::Single HitIncDynamicTargetValueCd; // 0x64
		::System::Single OnEnterRange_Range; // 0x68
		::System::Single OnEnterRange_DecaySpeed; // 0x6C
		::System::Single SelectedAsTarget_MinValue; // 0x70
		::System::Single SelectedAsTarget_AddCD; // 0x74
		::System::Single SelectedTargetAdditionalTargetValue; // 0x78
		::System::Single InitTargetValue; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETVALUE__CTOR_OFFSET))(this);
		}
	};
}
