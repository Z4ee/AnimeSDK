#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetSlotViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__45_0_OFFSET UNITYSDK_OFFSET(0xAFA40B0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFA4040)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA4080)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__50_0_OFFSET UNITYSDK_OFFSET(0xAFA4110)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__48_0_OFFSET UNITYSDK_OFFSET(0xAFA40E0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__36_0_OFFSET UNITYSDK_OFFSET(0xAFA4090)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__39_0_OFFSET UNITYSDK_OFFSET(0xAFA40A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel___c_TypeDefinitionIndex = 61583;

	class RelicPresetPlanViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x147F0);
		}
		static ::RPG::Client::RelicPresetPlanViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetPlanViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x147F8);
		}
		static ::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14800);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14808);
		}
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14810);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildPropertyViewModels_b__36_0(::RPG::Client::RelicItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__36_0_OFFSET))(this, x);
		}

		::System::Boolean __UpdatePropertyViewModels_b__39_0(::RPG::Client::RelicItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__39_0_OFFSET))(this, x);
		}

		::System::UInt32 _AddPlan_b__45_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* info)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__45_0_OFFSET))(this, info);
		}

		::System::UInt32 _UpdatePlanRelics_b__48_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* info)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__48_0_OFFSET))(this, info);
		}

		::System::Boolean _HasEmptySlot_b__50_0(::RPG::Client::RelicPresetSlotViewModel* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetSlotViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__50_0_OFFSET))(this, slot);
		}
	};
}
