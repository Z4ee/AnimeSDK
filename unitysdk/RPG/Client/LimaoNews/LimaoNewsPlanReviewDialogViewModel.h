#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewPlanItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD478560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_GET_PLANITEMS_OFFSET UNITYSDK_OFFSET(0xD478620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_SET_PLANITEMS_OFFSET UNITYSDK_OFFSET(0xD478630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD478600)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanReviewDialogViewModel_TypeDefinitionIndex = 79118;

	class LimaoNewsPlanReviewDialogViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>* _PlanItems_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel* Create(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanReviewDialogViewModel*(*)(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>* get_PlanItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_GET_PLANITEMS_OFFSET))(this);
		}

		::System::Void set_PlanItems(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWDIALOGVIEWMODEL_SET_PLANITEMS_OFFSET))(this, a1);
		}
	};
}
