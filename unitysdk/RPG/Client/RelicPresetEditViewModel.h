#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xAF9DB00)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETINVENTORYRELICITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xAF9DCD0)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xAF9E030)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xAF9E1C0)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GET_PLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9E640)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_SET_PLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9E650)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9DC50)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__GETRELICTYPEMATCHSCORE_OFFSET UNITYSDK_OFFSET(0xAF9E210)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__SORTINVENTORYRELICITEMS_OFFSET UNITYSDK_OFFSET(0xAF9DD40)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetEditViewModel_TypeDefinitionIndex = 61571;

	class RelicPresetEditViewModel : public ::System::Object
	{
	public:
		::RPG::Client::RelicPresetPlanViewModel* _PlanViewModel_k__BackingField; // 0x10
		::Class_1_6A9A64AC86CBF3B4* _PresetCalculatorService; // 0x18
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x20
		::Class_1_29A54A6045520AF2* _PresetDataService; // 0x28
		::System::Int32 RelicTypeMatchBaseScore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicPresetEditViewModel* Create(::RPG::Client::RelicPresetPlanViewModel* planViewModel, ::Class_1_29A54A6045520AF2* relicPresetDataService, ::Class_1_6A9A64AC86CBF3B4* calculatorService)
		{
			return ((::RPG::Client::RelicPresetEditViewModel*(*)(::RPG::Client::RelicPresetPlanViewModel*, ::Class_1_29A54A6045520AF2*, ::Class_1_6A9A64AC86CBF3B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_CREATE_OFFSET))(planViewModel, relicPresetDataService, calculatorService);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetInventoryRelicItemDataList(::RPG::GameCore::RelicType relicType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETINVENTORYRELICITEMDATALIST_OFFSET))(this, relicType);
		}

		::RPG::Client::RelicItemData* GetRelicItemData(::RPG::GameCore::RelicType relicType)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICITEMDATA_OFFSET))(this, relicType);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICRECOMMENDDATA_OFFSET))(this);
		}

		::System::Void _SortInventoryRelicItems(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicItems, ::RPG::GameCore::RelicType relicType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__SORTINVENTORYRELICITEMS_OFFSET))(this, relicItems, relicType);
		}

		::System::Int32 _GetRelicTypeMatchScore(::RPG::Client::RelicItemData* relicItem)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__GETRELICTYPEMATCHSCORE_OFFSET))(this, relicItem);
		}

		::RPG::Client::RelicPresetPlanViewModel* get_PlanViewModel()
		{
			return ((::RPG::Client::RelicPresetPlanViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GET_PLANVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PlanViewModel(::RPG::Client::RelicPresetPlanViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_SET_PLANVIEWMODEL_OFFSET))(this, value);
		}
	};
}
