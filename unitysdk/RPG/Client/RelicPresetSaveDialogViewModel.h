#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_18.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19886130)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GETDISPLAYPLANS_OFFSET UNITYSDK_OFFSET(0x19886680)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0x19886110)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0x19886120)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x198860F0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19886100)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19881490)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSaveDialogViewModel_TypeDefinitionIndex = 63884;

	class RelicPresetSaveDialogViewModel : public ::System::Object
	{
	public:
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x10
		::RPG::Client::RelicPresetModel* _Model; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x20
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x28
		::Class_1_1D95EF1836E9FE9D* _CalculatorService; // 0x30
		::System::UInt32 _AvatarID; // 0x38
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x3C
		::Enum_3_71AA90D596A09AC8_18 _SourceType_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::Enum_3_71AA90D596A09AC8_18 a2, ::RPG::Client::RelicPresetModel* a3, ::Class_1_5D2E9E194E93B02A* a4, ::Class_2_229A7FF636DA17C3* a5, ::Class_1_1D95EF1836E9FE9D* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_71AA90D596A09AC8_18, ::RPG::Client::RelicPresetModel*, ::Class_1_5D2E9E194E93B02A*, ::Class_2_229A7FF636DA17C3*, ::Class_1_1D95EF1836E9FE9D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Enum_3_71AA90D596A09AC8_18 get_SourceType()
		{
			return ((::Enum_3_71AA90D596A09AC8_18(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_71AA90D596A09AC8_18 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_18))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET))(this, a1);
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
