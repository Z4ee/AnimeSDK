#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarUIShowInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLINKZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D246E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLinkZone_TypeDefinitionIndex = 50901;

	class ConfigLinkZone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean AllowLinkZoneAvatarUltPerformZone; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* AllowLinkZoneAvatarUltPerformZoneTag; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* QTERelayAttackSwitchInIndexList; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* ExQTERelayAttackSwitchInIndexList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>* RelayAttackTypeIndexDict; // 0x78
		::Foundation::AssetPath LinkZoneSkillButtonIconPath; // 0x80
		::Foundation::AssetPath LinkZoneSkillButtonMaterialPath; // 0x90
		::Foundation::AssetPath LinkZoneSkillButtonFlowMaterialPath; // 0xA0
		::System::String* RelayAttackQTEHintKey; // 0xB0
		::System::String* LinkZoneUltQTEHintKey; // 0xB8
		::System::Single LinkZoneSkillButtonLongPressThresholdTime; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>* LinkZoneTeamExQTEAvatarInfoDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>* LinkZoneTeamExQTESkinInfoDict; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* EnergyOperateTypeTextMapDict; // 0xD8
		::System::Int32 EnergyUIShowScale; // 0xE0
		::System::Int32 EnergyUIShowMinValueThreshold; // 0xE4
		::System::Single EnergyOperateItemUIShowHoldTime; // 0xE8
		::System::Single ChainUltimateUIShowHoldTime; // 0xEC
		::System::Single ChainMeterProgressLerpSpeed; // 0xF0
		::UnityEngine::Color ChainUltimateUISlotColor1; // 0xF4
		::UnityEngine::Color ChainUltimateUISlotColor2; // 0x104
		::UnityEngine::Color ChainUltimateUISlotColor3; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE__CTOR_OFFSET))(this);
		}
	};
}
