#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCAreaScoreTracker; }
namespace NPCCrowd { class NPCCullEventLogger; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCQuotaManager; }

#define NPCCROWD_NPCDENSITYCONTROLLER_CALCULATEPERFORMANCEFACTOR_OFFSET UNITYSDK_OFFSET(0xFFD5230)
#define NPCCROWD_NPCDENSITYCONTROLLER_CULLEXCESSCROWD_OFFSET UNITYSDK_OFFSET(0xFFD5360)
#define NPCCROWD_NPCDENSITYCONTROLLER_FORCECULLEXCESSCROWDIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xFFD54E0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GETAREAPERFORMANCESCORE_OFFSET UNITYSDK_OFFSET(0xFFD5700)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_CURRENTPERFORMANCEFACTOR_OFFSET UNITYSDK_OFFSET(0xFFD50C0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_EFFECTIVECROWDLIMIT_OFFSET UNITYSDK_OFFSET(0xFFD50B0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_LASTAREASCORE_OFFSET UNITYSDK_OFFSET(0xFFD50D0)
#define NPCCROWD_NPCDENSITYCONTROLLER_REFRESHEFFECTIVECROWDLIMIT_OFFSET UNITYSDK_OFFSET(0xFFD5660)
#define NPCCROWD_NPCDENSITYCONTROLLER_SETCULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0xFFD5110)
#define NPCCROWD_NPCDENSITYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xFFD5160)
#define NPCCROWD_NPCDENSITYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD50E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCDensityController_TypeDefinitionIndex = 57073;

	class NPCDensityController : public ::System::Object
	{
	public:
		::NPCCrowd::NPCAreaScoreTracker* _areaScoreTracker; // 0x10
		::NPCCrowd::NPCQuotaManager* _quotaManager; // 0x18
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x20
		::NPCCrowd::NPCCullEventLogger* _cullEventLogger; // 0x28
		::System::Single _currentPerformanceFactor; // 0x30
		::System::Single _lastAreaScore; // 0x34
		::System::Int32 _effectiveCrowdLimit; // 0x38

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config, ::NPCCrowd::NPCQuotaManager* quotaManager, ::NPCCrowd::NPCAreaScoreTracker* areaScoreTracker)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*, ::NPCCrowd::NPCQuotaManager*, ::NPCCrowd::NPCAreaScoreTracker*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER__CTOR_OFFSET))(this, config, quotaManager, areaScoreTracker);
		}

		::System::Int32 get_EffectiveCrowdLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_GET_EFFECTIVECROWDLIMIT_OFFSET))(this);
		}

		::System::Single get_CurrentPerformanceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_GET_CURRENTPERFORMANCEFACTOR_OFFSET))(this);
		}

		::System::Single get_LastAreaScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_GET_LASTAREASCORE_OFFSET))(this);
		}

		::System::Void SetCullEventLogger(::NPCCrowd::NPCCullEventLogger* logger)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCullEventLogger*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_SETCULLEVENTLOGGER_OFFSET))(this, logger);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Int32 ForceCullExcessCrowdImmediately()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_FORCECULLEXCESSCROWDIMMEDIATELY_OFFSET))(this);
		}

		::System::Void RefreshEffectiveCrowdLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_REFRESHEFFECTIVECROWDLIMIT_OFFSET))(this);
		}

		::System::Single CalculatePerformanceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_CALCULATEPERFORMANCEFACTOR_OFFSET))(this);
		}

		::System::Single GetAreaPerformanceScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_GETAREAPERFORMANCESCORE_OFFSET))(this);
		}

		::System::Void CullExcessCrowd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDENSITYCONTROLLER_CULLEXCESSCROWD_OFFSET))(this);
		}
	};
}
