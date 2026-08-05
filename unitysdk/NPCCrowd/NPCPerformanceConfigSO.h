#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCPerformanceTierSettings.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPERFORMANCECONFIGSO_GET_CULLPRIORITYSLIDERLABEL_OFFSET UNITYSDK_OFFSET(0xD8AB6C0)
#define NPCCROWD_NPCPERFORMANCECONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD8AB700)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceConfigSO_TypeDefinitionIndex = 54253;

	class NPCPerformanceConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::NPCCrowd::NPCPerformanceTierSettings>* omitLevel2Settings; // 0x58
		::System::Boolean bEnableSystem; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* enableFloorIDs; // 0x68
		::NPCCrowd::EDynamicUnloadPriority protectedThreshold; // 0x70
		::System::Int32 crowdCullPerFrame; // 0x74
		::System::Int32 restorePerFrame; // 0x78
		::System::Int32 restoreHysteresis; // 0x7C
		::System::Single restoreCooldown; // 0x80
		::System::Single restoreInterval; // 0x84
		::System::Single minBackStageDuration; // 0x88
		::System::Single cullEnterHysteresis; // 0x8C
		::System::Single minServerNPCCullDistance; // 0x90
		::System::Single minCrowdCullDistance; // 0x94
		::System::Boolean bEnablePerformanceLinking; // 0x98
		::System::Single performanceCheckRadius; // 0x9C
		::System::Single minDensityFactor; // 0xA0
		::System::Boolean enableSoftCullMode; // 0xA4
		::System::Int32 crowdCullPriorityPct; // 0xA8
		::System::Single serverNPCScoreWeight; // 0xAC
		::System::Single crowdNPCScoreWeight; // 0xB0
		::System::Int32 scoreRecalcIntervalFrames; // 0xB4
		::System::Int32 groupsPerValidationFrame; // 0xB8
		::System::Single scoreValidationThreshold; // 0xBC
		::System::Collections::Generic::List_1<::ENPCAvatarGender>* noMonoRenderEntityGenders; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCECONFIGSO__CTOR_OFFSET))(this);
		}

		::System::String* get_CullPrioritySliderLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCECONFIGSO_GET_CULLPRIORITYSLIDERLABEL_OFFSET))(this);
		}
	};
}
