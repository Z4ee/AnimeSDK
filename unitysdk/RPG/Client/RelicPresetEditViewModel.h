#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDE306C0)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETINVENTORYRELICITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xDE30820)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xDE30C20)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xDE30D50)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GET_PLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE31090)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL_SET_PLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE310A0)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDE30810)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__GETRELICTYPEMATCHSCORE_OFFSET UNITYSDK_OFFSET(0xDE30DA0)
#define RPG_CLIENT_RELICPRESETEDITVIEWMODEL__SORTINVENTORYRELICITEMS_OFFSET UNITYSDK_OFFSET(0xDE30890)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetEditViewModel_TypeDefinitionIndex = 66861;

	class RelicPresetEditViewModel : public ::System::Object
	{
	public:
		::Class_1_1D95EF1836E9FE9D* _PresetCalculatorService; // 0x10
		::RPG::Client::RelicPresetPlanViewModel* _PlanViewModel_k__BackingField; // 0x18
		::Class_1_5D2E9E194E93B02A* _PresetDataService; // 0x20
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x28
		::System::Int32 RelicTypeMatchBaseScore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicPresetEditViewModel* Create(::RPG::Client::RelicPresetPlanViewModel* a1, ::Class_1_5D2E9E194E93B02A* a2, ::Class_1_1D95EF1836E9FE9D* a3)
		{
			return ((::RPG::Client::RelicPresetEditViewModel*(*)(::RPG::Client::RelicPresetPlanViewModel*, ::Class_1_5D2E9E194E93B02A*, ::Class_1_1D95EF1836E9FE9D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetInventoryRelicItemDataList(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETINVENTORYRELICITEMDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::RelicItemData* GetRelicItemData(::RPG::GameCore::RelicType a1)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GETRELICRECOMMENDDATA_OFFSET))(this);
		}

		::System::Void _SortInventoryRelicItems(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__SORTINVENTORYRELICITEMS_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetRelicTypeMatchScore(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL__GETRELICTYPEMATCHSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::RelicPresetPlanViewModel* get_PlanViewModel()
		{
			return ((::RPG::Client::RelicPresetPlanViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_GET_PLANVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PlanViewModel(::RPG::Client::RelicPresetPlanViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETEDITVIEWMODEL_SET_PLANVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
