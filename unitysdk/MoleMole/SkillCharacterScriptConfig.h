#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_626947D8870F8D56.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/CharacterScriptConfigBase.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Config { class AnimatorZone; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace MoleMole::Config { class ConfigCharacterAnimatorStateLength; }
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLEAN_OFFSET UNITYSDK_OFFSET(0x19178AD0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GETSHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1914BDD0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_ANIMATORZONEGROUP_OFFSET UNITYSDK_OFFSET(0x19178D50)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_EVENTPATTERNCONFIGS_OFFSET UNITYSDK_OFFSET(0x19178F90)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_LINKEDANIMEVENTSOBJECT_OFFSET UNITYSDK_OFFSET(0x191796E0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_LINKEDANIMEVENTS_OFFSET UNITYSDK_OFFSET(0x19179560)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_STATELENGTHCONFIG_OFFSET UNITYSDK_OFFSET(0x19178B30)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x191792C0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19179A40)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19179860)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19179A50)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_TypeDefinitionIndex = 74614;

	class SkillCharacterScriptConfig : public ::MoleMole::CharacterScriptConfigBase
	{
	public:
		static ::System::Boolean* StaticGet__hideOldAnimEvents()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_TypeDefinitionIndex)->GetStaticField(0xE450);
		}
		static ::System::Boolean* StaticGet_S_False()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_TypeDefinitionIndex)->GetStaticField(0xE451);
		}
		::System::String* displayName; // 0x110
		::System::Boolean IsBossLockState; // 0x118
		::MoleMole::AttackType AttackType; // 0x11C
		::Il2CppArray<::System::String*>* customTags; // 0x120
		::System::Single AIWeightRatioM; // 0x128
		::System::Single AIWeightDivisorN; // 0x12C
		::System::Single AIWeightAdjusterS; // 0x130
		::System::Boolean AIWeightCurveOverride; // 0x134
		::UnityEngine::AnimationCurve* dis2AvatarWeightCurve; // 0x138
		::System::Single dis2AvatarRatio; // 0x140
		::UnityEngine::AnimationCurve* dis2CamCenterWeightCurve; // 0x148
		::System::Single dis2CamCenterRatio; // 0x150
		::System::Boolean EnableChangeTypeByDis; // 0x154
		::System::Single nearDistance; // 0x158
		::MoleMole::AttackType inNearType; // 0x15C
		::System::Single farDistance; // 0x160
		::MoleMole::AttackType leaveFarType; // 0x164
		::System::Boolean EnableBlendMove; // 0x168
		::Enum_3_626947D8870F8D56 MoveType; // 0x16C
		::System::Single BlendSpeed; // 0x170
		::MoleMole::AnimatorBlendData* BlendData; // 0x178
		::MoleMole::AnimatorBlendData* StartBlendData; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>* BlendDataByTag; // 0x188
		::System::Boolean EnableCounterstroke; // 0x190
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>* ConfigCounterstrokes; // 0x198
		::System::String* AIConfigPath; // 0x1A0
		::MoleMole::Config::CharacterSize CharacterSize; // 0x1A8
		::System::Boolean EnabledOverrideCameraState; // 0x1AC
		::MoleMole::Config::InlevelCameraState OverrideBattleCameraState; // 0x1B0
		::System::Single RotateSpeed; // 0x1B4
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>* Skills; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* ClickControls; // 0x1C0
		::System::Single HoldControlTime; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* HoldControls; // 0x1D0
		::System::Collections::Generic::List_1<::System::String*>* TriggerCacheKeys; // 0x1D8
		::System::String* StateLengthAssetPath; // 0x1E0
		::MoleMole::Config::ConfigCharacterAnimatorStateLength* _stateLengthConfig; // 0x1E8
		::System::String* ZoneDataAssetPath; // 0x1F0
		::MoleMole::SkillCharacterAnimatorZoneData* ZoneData; // 0x1F8
		::Il2CppArray<::System::String*>* patternPathNameList; // 0x200
		::Il2CppArray<::MoleMole::Config::ConfigAnimatorEventPattern*>* _eventPatternConfigs; // 0x208
		::Il2CppArray<::System::String*>* eventPatternConfigPaths; // 0x210
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>* AnimatorStateEventPatternsDict; // 0x218
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* AnimatorStateClipNameDic; // 0x220
		::System::String* linkedAnimEventConfigPath; // 0x228
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* SummonTagMax; // 0x230
		::System::Collections::Generic::List_1<::System::Int32>* KeepSummonedIDWhenStageChange; // 0x238
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>* AnimEvents; // 0x240
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* AnimEventGroups; // 0x248
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>* AnimEventProtections; // 0x250
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* AnimEventDodgeDummyGroups; // 0x258
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>* AnimEventInvincibilityForbidGroups; // 0x260
		::System::Collections::Generic::List_1<::System::String*>* LookIKBlackAnimStates; // 0x268
		::MoleMole::Config::ConfigCommonEntityAnimEvents* _linkedAnimEventsObject; // 0x270

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG__CCTOR_OFFSET))();
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLEAN_OFFSET))(this);
		}

		::System::String* GetShortDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GETSHORTDISPLAYNAME_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCharacterAnimatorStateLength* get_StateLengthConfig()
		{
			return ((::MoleMole::Config::ConfigCharacterAnimatorStateLength*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_STATELENGTHCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>* get_AnimatorZoneGroup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_ANIMATORZONEGROUP_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::Config::ConfigAnimatorEventPattern*>* get_eventPatternConfigs()
		{
			return ((::Il2CppArray<::MoleMole::Config::ConfigAnimatorEventPattern*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_EVENTPATTERNCONFIGS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>* get_LinkedAnimEvents()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_LINKEDANIMEVENTS_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCommonEntityAnimEvents* get_LinkedAnimEventsObject()
		{
			return ((::MoleMole::Config::ConfigCommonEntityAnimEvents*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_GET_LINKEDANIMEVENTSOBJECT_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
