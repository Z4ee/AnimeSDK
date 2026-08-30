#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetCustomSaveViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE2D600)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETCUSTOMSAVEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE2DCC0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETNOTEMPTYPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE2DDE0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0xDE2D530)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0xDE2D540)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDE2D550)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel_TypeDefinitionIndex = 66853;

	class RelicPresetApplyDetailViewModel : public ::System::Object
	{
	public:
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x10
		::Class_1_1D95EF1836E9FE9D* _CalculatorService; // 0x18
		::RPG::Client::RelicPresetModel* _Model; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x28
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x30
		::System::UInt32 _AvatarID; // 0x38
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::RelicPresetModel* a2, ::Class_1_5D2E9E194E93B02A* a3, ::Class_2_229A7FF636DA17C3* a4, ::Class_1_1D95EF1836E9FE9D* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetModel*, ::Class_1_5D2E9E194E93B02A*, ::Class_2_229A7FF636DA17C3*, ::Class_1_1D95EF1836E9FE9D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
