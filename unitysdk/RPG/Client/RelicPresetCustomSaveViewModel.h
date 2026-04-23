#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

class Class_1_29A54A6045520AF2;
class Class_1_6A9A64AC86CBF3B4;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetEditViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xAF9B2B0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEWITHSMARTSUITPLAN_OFFSET UNITYSDK_OFFSET(0xAF9CDD0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9D270)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAF9DA60)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_PRESETPLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9DA40)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_ISHAVESAMEPLAN_OFFSET UNITYSDK_OFFSET(0xAF9D340)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAF9DA70)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_PRESETPLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xAF9DA50)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9CBA0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHAVATARDEFAULTEQUIPRELIC_OFFSET UNITYSDK_OFFSET(0xAF9CBB0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHSMARTSUITPLAN_OFFSET UNITYSDK_OFFSET(0xAF9CEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetCustomSaveViewModel_TypeDefinitionIndex = 61567;

	class RelicPresetCustomSaveViewModel : public ::System::Object
	{
	public:
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x10
		::RPG::Client::RelicPresetPlanViewModel* _PresetPlanViewModel_k__BackingField; // 0x18
		::Class_1_29A54A6045520AF2* _DataService; // 0x20
		::Class_1_6A9A64AC86CBF3B4* _CalculatorService; // 0x28
		::RPG::Client::RelicPresetModel* _PresetModel; // 0x30
		::System::UInt32 _AvatarID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__CTOR_OFFSET))(this, avatarID);
		}

		static ::RPG::Client::RelicPresetCustomSaveViewModel* CreateDefault(::System::UInt32 avatarID, ::Class_1_29A54A6045520AF2* dataService, ::Class_2_229A7FF636DA17C3* networkService, ::Class_1_6A9A64AC86CBF3B4* calculatorService, ::RPG::Client::RelicPresetModel* presetModel)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::System::UInt32, ::Class_1_29A54A6045520AF2*, ::Class_2_229A7FF636DA17C3*, ::Class_1_6A9A64AC86CBF3B4*, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEDEFAULT_OFFSET))(avatarID, dataService, networkService, calculatorService, presetModel);
		}

		static ::RPG::Client::RelicPresetCustomSaveViewModel* CreateWithSmartSuitPlan(::System::UInt32 avatarID, ::Class_1_29A54A6045520AF2* dataService, ::Class_2_229A7FF636DA17C3* networkService, ::Class_1_6A9A64AC86CBF3B4* calculatorService, ::RPG::Client::RelicPresetModel* presetModel, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* smartSuitCalculationResultData, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::System::UInt32, ::Class_1_29A54A6045520AF2*, ::Class_2_229A7FF636DA17C3*, ::Class_1_6A9A64AC86CBF3B4*, ::RPG::Client::RelicPresetModel*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEWITHSMARTSUITPLAN_OFFSET))(avatarID, dataService, networkService, calculatorService, presetModel, smartSuitCalculationResultData, sourceType);
		}

		::RPG::Client::RelicPresetEditViewModel* GetRelicPresetEditViewModel()
		{
			return ((::RPG::Client::RelicPresetEditViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsHaveSamePlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_ISHAVESAMEPLAN_OFFSET))(this);
		}

		::System::Void _InitWithAvatarDefaultEquipRelic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHAVATARDEFAULTEQUIPRELIC_OFFSET))(this);
		}

		::System::Void _InitWithSmartSuitPlan(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHSMARTSUITPLAN_OFFSET))(this, planResult, sourceType);
		}

		::RPG::Client::RelicPresetPlanViewModel* get_PresetPlanViewModel()
		{
			return ((::RPG::Client::RelicPresetPlanViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_PRESETPLANVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PresetPlanViewModel(::RPG::Client::RelicPresetPlanViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_PRESETPLANVIEWMODEL_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_AVATARID_OFFSET))(this, value);
		}
	};
}
