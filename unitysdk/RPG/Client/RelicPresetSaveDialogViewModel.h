#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xAFA42D0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GETDISPLAYPLANS_OFFSET UNITYSDK_OFFSET(0xAFA46C0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0xAFA42B0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0xAFA42C0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xAFA4290)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xAFA42A0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9F210)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSaveDialogViewModel_TypeDefinitionIndex = 61585;

	class RelicPresetSaveDialogViewModel : public ::System::Object
	{
	public:
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x10
		::Class_1_6A9A64AC86CBF3B4* _CalculatorService; // 0x18
		::Class_1_29A54A6045520AF2* _DataService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x28
		::RPG::Client::RelicPresetModel* _Model; // 0x30
		::System::UInt32 _AvatarID; // 0x38
		::Enum_3_96F6662CA3713095_24 _SourceType_k__BackingField; // 0x3C
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 avatarID, ::Enum_3_96F6662CA3713095_24 sourceType, ::RPG::Client::RelicPresetModel* model, ::Class_1_29A54A6045520AF2* dataService, ::Class_2_229A7FF636DA17C3* networkService, ::Class_1_6A9A64AC86CBF3B4* calculatorService)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_96F6662CA3713095_24, ::RPG::Client::RelicPresetModel*, ::Class_1_29A54A6045520AF2*, ::Class_2_229A7FF636DA17C3*, ::Class_1_6A9A64AC86CBF3B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL__CTOR_OFFSET))(this, avatarID, sourceType, model, dataService, networkService, calculatorService);
		}

		::Enum_3_96F6662CA3713095_24 get_SourceType()
		{
			return ((::Enum_3_96F6662CA3713095_24(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_96F6662CA3713095_24 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::Int32 get_MaxPlanCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_MAXPLANCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* get_Plans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_PLANS_OFFSET))(this);
		}

		::System::Void BuildPlanViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* GetDisplayPlans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GETDISPLAYPLANS_OFFSET))(this);
		}
	};
}
