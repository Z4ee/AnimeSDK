#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/NPCCrowd/NPCAreaScoreTracker_EValidationState.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class ViewObjectManager; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCPerformanceScoreTable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCAREASCORETRACKER_BEGINVALIDATION_OFFSET UNITYSDK_OFFSET(0xF9C17C0)
#define NPCCROWD_NPCAREASCORETRACKER_CLEAR_OFFSET UNITYSDK_OFFSET(0xF9C1E30)
#define NPCCROWD_NPCAREASCORETRACKER_CONTINUEVALIDATION_OFFSET UNITYSDK_OFFSET(0xF9C1C80)
#define NPCCROWD_NPCAREASCORETRACKER_FINISHVALIDATION_OFFSET UNITYSDK_OFFSET(0xF9C1E90)
#define NPCCROWD_NPCAREASCORETRACKER_GETAREAPERFORMANCESCORE_OFFSET UNITYSDK_OFFSET(0xF9C1670)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVEGADGETCOUNT_OFFSET UNITYSDK_OFFSET(0xF9C12D0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVESERVERNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xF9C12E0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDGADGETSCORE_OFFSET UNITYSDK_OFFSET(0xF9C12C0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDSERVERNPCVOSCORE_OFFSET UNITYSDK_OFFSET(0xF9C12F0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ISVALIDATING_OFFSET UNITYSDK_OFFSET(0xF9C13C0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCCOUNTSCORE_OFFSET UNITYSDK_OFFSET(0xF9C1300)
#define NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xF9C1360)
#define NPCCROWD_NPCAREASCORETRACKER_ONENTITYACTIVATED_OFFSET UNITYSDK_OFFSET(0xF9C13E0)
#define NPCCROWD_NPCAREASCORETRACKER_ONENTITYDEACTIVATED_OFFSET UNITYSDK_OFFSET(0xF9C1490)
#define NPCCROWD_NPCAREASCORETRACKER_PROCESSGROUPFORVALIDATION_OFFSET UNITYSDK_OFFSET(0xF9C1F50)
#define NPCCROWD_NPCAREASCORETRACKER_REFRESHFROMPOLLINGSTATS_OFFSET UNITYSDK_OFFSET(0xF9C15D0)
#define NPCCROWD_NPCAREASCORETRACKER_UPDATECROWDCOUNT_OFFSET UNITYSDK_OFFSET(0xF9C1580)
#define NPCCROWD_NPCAREASCORETRACKER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF9C1740)
#define NPCCROWD_NPCAREASCORETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C13D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCAreaScoreTracker_TypeDefinitionIndex = 68657;

	class NPCAreaScoreTracker : public ::System::Object
	{
	public:
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x10
		::NPCCrowd::NPCPerformanceScoreTable* _scoreTable; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _validationGroupList; // 0x20
		::System::Int32 _validationAccumServerNPCCount; // 0x28
		::System::Int32 _validationAccumGadgetCount; // 0x2C
		::System::Single _validationAccumGadgetScore; // 0x30
		::System::Int32 _validationGroupIndex; // 0x34
		::System::Int32 _framesSinceLastValidation; // 0x38
		::System::Int32 _activeGadgetCount; // 0x3C
		::System::Single _cachedServerNPCVOScore; // 0x40
		::System::Single _cachedGadgetScore; // 0x44
		::System::Int32 _activeServerNPCCount; // 0x48
		::System::Single _validationAccumServerNPCVOScore; // 0x4C
		::NPCCrowd::NPCAreaScoreTracker_EValidationState _validationState; // 0x50
		::System::Int32 _cachedCrowdCount; // 0x54

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config, ::NPCCrowd::NPCPerformanceScoreTable* scoreTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*, ::NPCCrowd::NPCPerformanceScoreTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER__CTOR_OFFSET))(this, config, scoreTable);
		}

		::System::Single get_CachedGadgetScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDGADGETSCORE_OFFSET))(this);
		}

		::System::Int32 get_ActiveGadgetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVEGADGETCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ActiveServerNPCCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVESERVERNPCCOUNT_OFFSET))(this);
		}

		::System::Single get_CachedServerNPCVOScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDSERVERNPCVOSCORE_OFFSET))(this);
		}

		::System::Single get_ServerNPCCountScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCCOUNTSCORE_OFFSET))(this);
		}

		::System::Single get_ServerNPCTotalScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCTOTALSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsValidating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ISVALIDATING_OFFSET))(this);
		}

		::System::Void OnEntityActivated(::MoleMole::Config::EntityType type, ::System::Int32 viewObjectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_ONENTITYACTIVATED_OFFSET))(this, type, viewObjectID);
		}

		::System::Void OnEntityDeactivated(::MoleMole::Config::EntityType type, ::System::Int32 viewObjectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_ONENTITYDEACTIVATED_OFFSET))(this, type, viewObjectID);
		}

		::System::Void UpdateCrowdCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_UPDATECROWDCOUNT_OFFSET))(this, count);
		}

		::System::Void RefreshFromPollingStats(::System::Single gadgetScore, ::System::Int32 gadgetCount, ::System::Int32 serverNPCCount, ::System::Single serverNPCVOScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_REFRESHFROMPOLLINGSTATS_OFFSET))(this, gadgetScore, gadgetCount, serverNPCCount, serverNPCVOScore);
		}

		::System::Single GetAreaPerformanceScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GETAREAPERFORMANCESCORE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_UPDATE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_CLEAR_OFFSET))(this);
		}

		::System::Void BeginValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_BEGINVALIDATION_OFFSET))(this);
		}

		::System::Void ContinueValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_CONTINUEVALIDATION_OFFSET))(this);
		}

		::System::Void ProcessGroupForValidation(::Foundation::ViewObject::ViewObjectManager* vom, ::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_PROCESSGROUPFORVALIDATION_OFFSET))(this, vom, groupId);
		}

		::System::Void FinishValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_FINISHVALIDATION_OFFSET))(this);
		}
	};
}
