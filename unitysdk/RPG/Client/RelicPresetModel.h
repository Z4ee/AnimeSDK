#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicPresetApplyDetailViewModel; }
namespace RPG::Client { class RelicPresetAvatarPlans; }
namespace RPG::Client { class RelicPresetCustomSaveViewModel; }
namespace RPG::Client { class RelicPresetPlanData; }
namespace RPG::Client { class RelicPresetSaveDialogViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETAPPLYDETAIL_OFFSET UNITYSDK_OFFSET(0xAF9F2D0)
#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEDIALOG_OFFSET UNITYSDK_OFFSET(0xAF9F030)
#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEVIEWMODELBYPLANDATA_OFFSET UNITYSDK_OFFSET(0xAF9F690)
#define RPG_CLIENT_RELICPRESETMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF9E9C0)
#define RPG_CLIENT_RELICPRESETMODEL_GETAVATARRELICPRESETPLAN_OFFSET UNITYSDK_OFFSET(0xAF9F4A0)
#define RPG_CLIENT_RELICPRESETMODEL_GETORCREATEAVATARPLANS_OFFSET UNITYSDK_OFFSET(0xAF9EE00)
#define RPG_CLIENT_RELICPRESETMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xAF9E980)
#define RPG_CLIENT_RELICPRESETMODEL_ISAVATARPLANFULL_OFFSET UNITYSDK_OFFSET(0xAF9ED40)
#define RPG_CLIENT_RELICPRESETMODEL_SETAVATARPLANS_OFFSET UNITYSDK_OFFSET(0xAF9EF70)
#define RPG_CLIENT_RELICPRESETMODEL_TRYFINDPLANBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xAF9EBA0)
#define RPG_CLIENT_RELICPRESETMODEL_TRYGETPLANS_OFFSET UNITYSDK_OFFSET(0xAF9B080)
#define RPG_CLIENT_RELICPRESETMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9F7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetModel_TypeDefinitionIndex = 61574;

	class RelicPresetModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicPresetAvatarPlans*>* _AvatarRelicPresetPlans; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean TryGetPlans(::System::UInt32 avatarID, ::RPG::Client::RelicPresetAvatarPlans*& relicPresetPlans)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetAvatarPlans*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_TRYGETPLANS_OFFSET))(this, avatarID, relicPresetPlans);
		}

		::System::Boolean TryFindPlanByUniqueID(::System::UInt32 planUniqueID, ::RPG::Client::RelicPresetPlanData*& planData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetPlanData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_TRYFINDPLANBYUNIQUEID_OFFSET))(this, planUniqueID, planData);
		}

		::System::Boolean IsAvatarPlanFull(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_ISAVATARPLANFULL_OFFSET))(this, avatarID);
		}

		::RPG::Client::RelicPresetAvatarPlans* GetOrCreateAvatarPlans(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicPresetAvatarPlans*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_GETORCREATEAVATARPLANS_OFFSET))(this, avatarID);
		}

		::System::Void SetAvatarPlans(::System::UInt32 avatarID, ::RPG::Client::RelicPresetAvatarPlans* plans)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetAvatarPlans*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_SETAVATARPLANS_OFFSET))(this, avatarID, plans);
		}

		::RPG::Client::RelicPresetSaveDialogViewModel* CreateRelicPresetSaveDialog(::System::UInt32 avatarID, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::RPG::Client::RelicPresetSaveDialogViewModel*(*)(::PVOID, ::System::UInt32, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEDIALOG_OFFSET))(this, avatarID, sourceType);
		}

		::RPG::Client::RelicPresetApplyDetailViewModel* CreateRelicPresetApplyDetail(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicPresetApplyDetailViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETAPPLYDETAIL_OFFSET))(this, avatarID);
		}

		::RPG::Client::Promises::IPromise* GetAvatarRelicPresetPlan(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_GETAVATARRELICPRESETPLAN_OFFSET))(this, avatarID);
		}

		::RPG::Client::RelicPresetCustomSaveViewModel* CreateRelicPresetSaveViewModelByPlanData(::System::UInt32 avatarID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* smartSuitCalculationResultData, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEVIEWMODELBYPLANDATA_OFFSET))(this, avatarID, smartSuitCalculationResultData, sourceType);
		}
	};
}
