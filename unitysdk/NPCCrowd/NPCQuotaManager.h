#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/NPCCrowd/NPCPerformanceTierSettings.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCRegistry; }

#define NPCCROWD_NPCQUOTAMANAGER_APPLYEDITEDCURRENTTIERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1194A720)
#define NPCCROWD_NPCQUOTAMANAGER_APPLYTIERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1194A210)
#define NPCCROWD_NPCQUOTAMANAGER_GETCROWDTHRESHOLDRATIO_OFFSET UNITYSDK_OFFSET(0x11949E90)
#define NPCCROWD_NPCQUOTAMANAGER_GETCURRENTOMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1194A130)
#define NPCCROWD_NPCQUOTAMANAGER_GETEDITABLECURRENTTIERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1194A510)
#define NPCCROWD_NPCQUOTAMANAGER_GETSERVERNPCTHRESHOLDRATIO_OFFSET UNITYSDK_OFFSET(0x1194A000)
#define NPCCROWD_NPCQUOTAMANAGER_GET_BASECROWDCOUNT_OFFSET UNITYSDK_OFFSET(0x11949DA0)
#define NPCCROWD_NPCQUOTAMANAGER_GET_CROWDSCORETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x11949DB0)
#define NPCCROWD_NPCQUOTAMANAGER_GET_CURRENTOMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1194A120)
#define NPCCROWD_NPCQUOTAMANAGER_GET_SCORETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x11949D90)
#define NPCCROWD_NPCQUOTAMANAGER_GET_SERVERNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x1194A090)
#define NPCCROWD_NPCQUOTAMANAGER_GET_SERVERNPCSCORETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x11949F20)
#define NPCCROWD_NPCQUOTAMANAGER_REFRESHTIERSETTINGSIFCHANGED_OFFSET UNITYSDK_OFFSET(0x1194A420)
#define NPCCROWD_NPCQUOTAMANAGER_REFRESHTIERSETTINGS_OFFSET UNITYSDK_OFFSET(0x11949D30)
#define NPCCROWD_NPCQUOTAMANAGER_SETCURRENTTIERBASECROWDCOUNT_OFFSET UNITYSDK_OFFSET(0x1194A900)
#define NPCCROWD_NPCQUOTAMANAGER_SETCURRENTTIERSCORETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1194A490)
#define NPCCROWD_NPCQUOTAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x11949CD0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCQuotaManager_TypeDefinitionIndex = 62841;

	class NPCQuotaManager : public ::System::Object
	{
	public:
		// static const ::System::Single CULL_PRIORITY_MAX_SPREAD; // 0x0
		::NPCCrowd::NPCRegistry* _registry; // 0x10
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x18
		::System::Boolean _bHasCachedOmitLevel; // 0x20
		::NPCCrowd::NPCPerformanceTierSettings _tierSettings; // 0x24
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel _cachedOmitLevel; // 0x2C

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config, ::NPCCrowd::NPCRegistry* registry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*, ::NPCCrowd::NPCRegistry*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER__CTOR_OFFSET))(this, config, registry);
		}

		::System::Single get_ScoreThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_SCORETHRESHOLD_OFFSET))(this);
		}

		::System::Int32 get_BaseCrowdCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_BASECROWDCOUNT_OFFSET))(this);
		}

		::System::Single get_CrowdScoreThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_CROWDSCORETHRESHOLD_OFFSET))(this);
		}

		::System::Single get_ServerNPCScoreThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_SERVERNPCSCORETHRESHOLD_OFFSET))(this);
		}

		::System::Int32 get_ServerNPCCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_SERVERNPCCOUNT_OFFSET))(this);
		}

		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel get_CurrentOmitLevel()
		{
			return ((::MoleMole::PerformanceSettingProfile_ENPCOmitLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GET_CURRENTOMITLEVEL_OFFSET))(this);
		}

		::System::Void RefreshTierSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_REFRESHTIERSETTINGS_OFFSET))(this);
		}

		::System::Boolean RefreshTierSettingsIfChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_REFRESHTIERSETTINGSIFCHANGED_OFFSET))(this);
		}

		::System::Void SetCurrentTierScoreThreshold(::System::Single scoreThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_SETCURRENTTIERSCORETHRESHOLD_OFFSET))(this, scoreThreshold);
		}

		::System::Void SetCurrentTierBaseCrowdCount(::System::Int32 baseCrowdCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_SETCURRENTTIERBASECROWDCOUNT_OFFSET))(this, baseCrowdCount);
		}

		::System::Void ApplyTierSettings(::MoleMole::PerformanceSettingProfile_ENPCOmitLevel omitLevel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_APPLYTIERSETTINGS_OFFSET))(this, omitLevel);
		}

		::NPCCrowd::NPCPerformanceTierSettings GetEditableCurrentTierSettings()
		{
			return ((::NPCCrowd::NPCPerformanceTierSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GETEDITABLECURRENTTIERSETTINGS_OFFSET))(this);
		}

		::System::Void ApplyEditedCurrentTierSettings(::NPCCrowd::NPCPerformanceTierSettings settings)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceTierSettings))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_APPLYEDITEDCURRENTTIERSETTINGS_OFFSET))(this, settings);
		}

		static ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel GetCurrentOmitLevel()
		{
			return ((::MoleMole::PerformanceSettingProfile_ENPCOmitLevel(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GETCURRENTOMITLEVEL_OFFSET))();
		}

		::System::Single GetCrowdThresholdRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GETCROWDTHRESHOLDRATIO_OFFSET))(this);
		}

		::System::Single GetServerNPCThresholdRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCQUOTAMANAGER_GETSERVERNPCTHRESHOLDRATIO_OFFSET))(this);
		}
	};
}
