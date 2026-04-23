#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetCustomSaveViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAF9ACD0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETCUSTOMSAVEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9B250)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETNOTEMPTYPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAF9B370)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0xAF9AC00)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0xAF9AC10)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9AC20)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel_TypeDefinitionIndex = 61563;

	class RelicPresetApplyDetailViewModel : public ::System::Object
	{
	public:
		::Class_1_6A9A64AC86CBF3B4* _CalculatorService; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x18
		::RPG::Client::RelicPresetModel* _Model; // 0x20
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x28
		::Class_1_29A54A6045520AF2* _DataService; // 0x30
		::System::UInt32 _AvatarID; // 0x38
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 avatarID, ::RPG::Client::RelicPresetModel* model, ::Class_1_29A54A6045520AF2* dataService, ::Class_2_229A7FF636DA17C3* networkService, ::Class_1_6A9A64AC86CBF3B4* calculatorService)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetModel*, ::Class_1_29A54A6045520AF2*, ::Class_2_229A7FF636DA17C3*, ::Class_1_6A9A64AC86CBF3B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL__CTOR_OFFSET))(this, avatarID, model, dataService, networkService, calculatorService);
		}

		::System::Int32 get_MaxPlanCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_MAXPLANCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* get_Plans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_PLANS_OFFSET))(this);
		}

		::System::Void BuildPlanViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET))(this);
		}

		::RPG::Client::RelicPresetCustomSaveViewModel* GetCustomSaveViewModel()
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETCUSTOMSAVEVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* GetNotEmptyPlanViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETNOTEMPTYPLANVIEWMODELS_OFFSET))(this);
		}
	};
}
