#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCAreaScoreTracker; }
namespace NPCCrowd { class NPCCullEventLogger; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCQuotaManager; }

#define NPCCROWD_NPCDENSITYCONTROLLER_CALCULATEPERFORMANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x12D39B30)
#define NPCCROWD_NPCDENSITYCONTROLLER_CULLEXCESSCROWD_OFFSET UNITYSDK_OFFSET(0x12D39C60)
#define NPCCROWD_NPCDENSITYCONTROLLER_FORCECULLEXCESSCROWDIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x12D39DE0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GETAREAPERFORMANCESCORE_OFFSET UNITYSDK_OFFSET(0x12D3A000)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_CURRENTPERFORMANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x12D399C0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_EFFECTIVECROWDLIMIT_OFFSET UNITYSDK_OFFSET(0x12D399B0)
#define NPCCROWD_NPCDENSITYCONTROLLER_GET_LASTAREASCORE_OFFSET UNITYSDK_OFFSET(0x12D399D0)
#define NPCCROWD_NPCDENSITYCONTROLLER_REFRESHEFFECTIVECROWDLIMIT_OFFSET UNITYSDK_OFFSET(0x12D39F60)
#define NPCCROWD_NPCDENSITYCONTROLLER_SETCULLEVENTLOGGER_OFFSET UNITYSDK_OFFSET(0x12D39A10)
#define NPCCROWD_NPCDENSITYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12D39A60)
#define NPCCROWD_NPCDENSITYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12D399E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCDensityController_TypeDefinitionIndex = 55965;

	class NPCDensityController : public ::System::Object
	{
	public:
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x10
		::NPCCrowd::NPCCullEventLogger* _cullEventLogger; // 0x18
		::NPCCrowd::NPCQuotaManager* _quotaManager; // 0x20
		::NPCCrowd::NPCAreaScoreTracker* _areaScoreTracker; // 0x28
		::System::Int32 _effectiveCrowdLimit; // 0x30
		::System::Single _lastAreaScore; // 0x34
		::System::Single _currentPerformanceFactor; // 0x38

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
