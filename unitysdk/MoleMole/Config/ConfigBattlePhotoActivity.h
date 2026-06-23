#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_501339D5CF922B98.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGBATTLEPHOTOACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA49590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBattlePhotoActivity_TypeDefinitionIndex = 61211;

	class ConfigBattlePhotoActivity : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* OpenBattlePhotoUICustomEvent; // 0x58
		::System::String* CloseBattlePhotoUICustomEvent; // 0x60
		::System::String* UseBattlePhotoSkillCustomEventNoTargetFinished; // 0x68
		::System::String* UseBattlePhotoSkillCustomEvent; // 0x70
		::System::String* UseBattlePhotoSkillPerfectCustomEvent; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* SkillActiveAvatarZoneTags; // 0x80
		::Enum_3_501339D5CF922B98 SkillEnergySlotType; // 0x88
		::System::Single SkillEnergyForOneSlot; // 0x8C
		::System::Single SkillEnergyAutoRecoverySpeed; // 0x90
		::System::Single SkillCDTime; // 0x94
		::Foundation::AssetPath SkillButtonIconPath; // 0x98
		::Foundation::AssetPath SkillButtonMaterialPath; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* AvatarBg; // 0xB8
		::Foundation::AssetPath AvatarEmptyBg; // 0xC0
		::System::Int32 ImmersiveModeLevelAbility; // 0xD0
		::System::Int32 BattlePhotoNewbieGroupID; // 0xD4
		::System::Int32 SnapCountMissionTipPriority; // 0xD8
		::System::Int32 ScoreMissionTipPriority; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBATTLEPHOTOACTIVITY__CTOR_OFFSET))(this);
		}
	};
}
