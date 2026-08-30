#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetSlotViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__47_0_OFFSET UNITYSDK_OFFSET(0x1B676E90)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B676E20)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B676E60)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__52_0_OFFSET UNITYSDK_OFFSET(0x1B676EF0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__50_0_OFFSET UNITYSDK_OFFSET(0x1B676EC0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1B676E70)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__41_0_OFFSET UNITYSDK_OFFSET(0x1B676E80)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel___c_TypeDefinitionIndex = 66873;

	class RelicPresetPlanViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669A0);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669A8);
		}
		static ::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669B0);
		}
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669B8);
		}
		static ::RPG::Client::RelicPresetPlanViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetPlanViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669C0);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildPropertyViewModels_b__38_0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__38_0_OFFSET))(this, a1);
		}

		::System::Boolean __UpdatePropertyViewModels_b__41_0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__41_0_OFFSET))(this, a1);
		}

		::System::UInt32 _AddPlan_b__47_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__47_0_OFFSET))(this, a1);
		}

		::System::UInt32 _UpdatePlanRelics_b__50_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__50_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasEmptySlot_b__52_0(::RPG::Client::RelicPresetSlotViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetSlotViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__52_0_OFFSET))(this, a1);
		}
	};
}
