#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_19.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicPresetApplyDetailViewModel; }
namespace RPG::Client { class RelicPresetAvatarPlans; }
namespace RPG::Client { class RelicPresetCustomSaveViewModel; }
namespace RPG::Client { class RelicPresetPlanData; }
namespace RPG::Client { class RelicPresetSaveDialogViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETAPPLYDETAIL_OFFSET UNITYSDK_OFFSET(0xDE31E90)
#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEDIALOG_OFFSET UNITYSDK_OFFSET(0xDE31CB0)
#define RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEVIEWMODELBYPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE32060)
#define RPG_CLIENT_RELICPRESETMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE315B0)
#define RPG_CLIENT_RELICPRESETMODEL_GETAVATARRELICPRESETPLAN_OFFSET UNITYSDK_OFFSET(0xDE2CC80)
#define RPG_CLIENT_RELICPRESETMODEL_GETORCREATEAVATARPLANS_OFFSET UNITYSDK_OFFSET(0xDE31AC0)
#define RPG_CLIENT_RELICPRESETMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xDE31570)
#define RPG_CLIENT_RELICPRESETMODEL_ISAVATARPLANFULL_OFFSET UNITYSDK_OFFSET(0xDE31A00)
#define RPG_CLIENT_RELICPRESETMODEL_SETAVATARPLANS_OFFSET UNITYSDK_OFFSET(0xDE31BF0)
#define RPG_CLIENT_RELICPRESETMODEL_TRYFINDPLANBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDE317F0)
#define RPG_CLIENT_RELICPRESETMODEL_TRYGETPLANS_OFFSET UNITYSDK_OFFSET(0xDE2DB30)
#define RPG_CLIENT_RELICPRESETMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDE321C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetModel_TypeDefinitionIndex = 66864;

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

		::System::Boolean TryGetPlans(::System::UInt32 a1, ::RPG::Client::RelicPresetAvatarPlans*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetAvatarPlans*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_TRYGETPLANS_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryFindPlanByUniqueID(::System::UInt32 a1, ::RPG::Client::RelicPresetPlanData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetPlanData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_TRYFINDPLANBYUNIQUEID_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarPlanFull(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_ISAVATARPLANFULL_OFFSET))(this, a1);
		}

		::RPG::Client::RelicPresetAvatarPlans* GetOrCreateAvatarPlans(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicPresetAvatarPlans*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_GETORCREATEAVATARPLANS_OFFSET))(this, a1);
		}

		::System::Void SetAvatarPlans(::System::UInt32 a1, ::RPG::Client::RelicPresetAvatarPlans* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetAvatarPlans*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_SETAVATARPLANS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicPresetSaveDialogViewModel* CreateRelicPresetSaveDialog(::System::UInt32 a1, ::Enum_3_71AA90D596A09AC8_19 a2)
		{
			return ((::RPG::Client::RelicPresetSaveDialogViewModel*(*)(::PVOID, ::System::UInt32, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEDIALOG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicPresetApplyDetailViewModel* CreateRelicPresetApplyDetail(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicPresetApplyDetailViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETAPPLYDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GetAvatarRelicPresetPlan(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_GETAVATARRELICPRESETPLAN_OFFSET))(this, a1);
		}

		::RPG::Client::RelicPresetCustomSaveViewModel* CreateRelicPresetSaveViewModelByPlanData(::System::UInt32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2, ::Enum_3_71AA90D596A09AC8_19 a3)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL_CREATERELICPRESETSAVEVIEWMODELBYPLANDATA_OFFSET))(this, a1, a2, a3);
		}
	};
}
