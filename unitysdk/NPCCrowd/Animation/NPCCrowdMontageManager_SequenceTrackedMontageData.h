#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdMontageManager_SequenceLayerSourceData.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETLAYERORINVALID_OFFSET UNITYSDK_OFFSET(0x117A32A0)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETLAYERSOURCES_OFFSET UNITYSDK_OFFSET(0x117A3420)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETMAXLAYERINDEXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x117A3460)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_HASANYVALIDLAYER_OFFSET UNITYSDK_OFFSET(0x117A3240)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_INVALID_OFFSET UNITYSDK_OFFSET(0x117A3040)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_SETLAYER_OFFSET UNITYSDK_OFFSET(0x117A3370)
#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3180)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_SequenceTrackedMontageData_TypeDefinitionIndex = 65140;

	class NPCCrowdMontageManager_SequenceTrackedMontageData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData>* _layerSourceMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData* Invalid()
		{
			return ((::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceTrackedMontageData*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_INVALID_OFFSET))();
		}

		::System::Boolean HasAnyValidLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_HASANYVALIDLAYER_OFFSET))(this);
		}

		::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData GetLayerOrInvalid(::System::Int32 layerIndex)
		{
			return ((::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETLAYERORINVALID_OFFSET))(this, layerIndex);
		}

		::System::Void SetLayer(::System::Int32 layerIndex, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData layerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_SETLAYER_OFFSET))(this, layerIndex, layerData);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData>>* GetLayerSources()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::NPCCrowd::Animation::NPCCrowdMontageManager_SequenceLayerSourceData>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETLAYERSOURCES_OFFSET))(this);
		}

		::System::Int32 GetMaxLayerIndexOrDefault(::System::Int32 defaultCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCETRACKEDMONTAGEDATA_GETMAXLAYERINDEXORDEFAULT_OFFSET))(this, defaultCount);
		}
	};
}
