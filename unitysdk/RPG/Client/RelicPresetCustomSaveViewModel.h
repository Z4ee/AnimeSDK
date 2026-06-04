#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_17.h"
#include "unitysdk/System/Object.h"

class Class_1_1D95EF1836E9FE9D;
class Class_1_5D2E9E194E93B02A;
class Class_2_229A7FF636DA17C3;
namespace RPG::Client { class RelicPresetEditViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xC6E2D40)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEWITHSMARTSUITPLAN_OFFSET UNITYSDK_OFFSET(0xC6E4900)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GETRELICPRESETEDITVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC6E4CE0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6E5670)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_PRESETPLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC6E5650)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_ISHAVESAMEPLAN_OFFSET UNITYSDK_OFFSET(0xC6E4DB0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6E5680)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_PRESETPLANVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC6E5660)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E4640)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHAVATARDEFAULTEQUIPRELIC_OFFSET UNITYSDK_OFFSET(0xC6E4650)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHSMARTSUITPLAN_OFFSET UNITYSDK_OFFSET(0xC6E49E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetCustomSaveViewModel_TypeDefinitionIndex = 62500;

	class RelicPresetCustomSaveViewModel : public ::System::Object
	{
	public:
		::RPG::Client::RelicPresetPlanViewModel* _PresetPlanViewModel_k__BackingField; // 0x10
		::Class_1_1D95EF1836E9FE9D* _CalculatorService; // 0x18
		::Class_2_229A7FF636DA17C3* _NetworkService; // 0x20
		::RPG::Client::RelicPresetModel* _PresetModel; // 0x28
		::Class_1_5D2E9E194E93B02A* _DataService; // 0x30
		::System::UInt32 _AvatarID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicPresetCustomSaveViewModel* CreateDefault(::System::UInt32 a1, ::Class_1_5D2E9E194E93B02A* a2, ::Class_2_229A7FF636DA17C3* a3, ::Class_1_1D95EF1836E9FE9D* a4, ::RPG::Client::RelicPresetModel* a5)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::System::UInt32, ::Class_1_5D2E9E194E93B02A*, ::Class_2_229A7FF636DA17C3*, ::Class_1_1D95EF1836E9FE9D*, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEDEFAULT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::RelicPresetCustomSaveViewModel* CreateWithSmartSuitPlan(::System::UInt32 a1, ::Class_1_5D2E9E194E93B02A* a2, ::Class_2_229A7FF636DA17C3* a3, ::Class_1_1D95EF1836E9FE9D* a4, ::RPG::Client::RelicPresetModel* a5, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a6, ::Enum_3_71AA90D596A09AC8_17 a7)
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::System::UInt32, ::Class_1_5D2E9E194E93B02A*, ::Class_2_229A7FF636DA17C3*, ::Class_1_1D95EF1836E9FE9D*, ::RPG::Client::RelicPresetModel*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_CREATEWITHSMARTSUITPLAN_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
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

		::System::Void _InitWithSmartSuitPlan(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1, ::Enum_3_71AA90D596A09AC8_17 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL__INITWITHSMARTSUITPLAN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicPresetPlanViewModel* get_PresetPlanViewModel()
		{
			return ((::RPG::Client::RelicPresetPlanViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_PRESETPLANVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_PresetPlanViewModel(::RPG::Client::RelicPresetPlanViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_PRESETPLANVIEWMODEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL_SET_AVATARID_OFFSET))(this, a1);
		}
	};
}
