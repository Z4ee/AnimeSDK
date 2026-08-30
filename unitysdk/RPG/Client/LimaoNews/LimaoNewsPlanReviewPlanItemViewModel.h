#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanReviewPhaseItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD478ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_ISPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xD479030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PHASEITEMS_OFFSET UNITYSDK_OFFSET(0xD479050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANDESC_OFFSET UNITYSDK_OFFSET(0xD479010)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xD478FD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD478FF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_ISPLANFINISHED_OFFSET UNITYSDK_OFFSET(0xD479040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PHASEITEMS_OFFSET UNITYSDK_OFFSET(0xD479060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANDESC_OFFSET UNITYSDK_OFFSET(0xD479020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xD478FE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANTITLE_OFFSET UNITYSDK_OFFSET(0xD479000)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD478FB0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanReviewPlanItemViewModel_TypeDefinitionIndex = 79121;

	class LimaoNewsPlanReviewPlanItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* _PhaseItems_k__BackingField; // 0x20
		::RPG::Client::TextID _PlanDesc_k__BackingField; // 0x28
		::System::Boolean _IsPlanFinished_k__BackingField; // 0x38
		::System::UInt32 _PlanID_k__BackingField; // 0x3C
		::RPG::Client::TextID _PlanTitle_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* a3)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPlanReviewPlanItemViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsPlanData*, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_PlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANID_OFFSET))(this);
		}

		::System::Void set_PlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANTITLE_OFFSET))(this);
		}

		::System::Void set_PlanTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlanDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PLANDESC_OFFSET))(this);
		}

		::System::Void set_PlanDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PLANDESC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlanFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_ISPLANFINISHED_OFFSET))(this);
		}

		::System::Void set_IsPlanFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_ISPLANFINISHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* get_PhaseItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_GET_PHASEITEMS_OFFSET))(this);
		}

		::System::Void set_PhaseItems(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsPlanReviewPhaseItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPLANITEMVIEWMODEL_SET_PHASEITEMS_OFFSET))(this, a1);
		}
	};
}
