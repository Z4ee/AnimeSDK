#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetSlotViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__ADDPLAN_B__47_0_OFFSET UNITYSDK_OFFSET(0xDE7A700)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE7A690)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE7A6D0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__HASEMPTYSLOT_B__52_0_OFFSET UNITYSDK_OFFSET(0xDE7A7C0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C__UPDATEPLANRELICS_B__50_0_OFFSET UNITYSDK_OFFSET(0xDE7A760)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___BUILDPROPERTYVIEWMODELS_B__38_0_OFFSET UNITYSDK_OFFSET(0xDE7A6E0)
#define RPG_CLIENT_RELICPRESETPLANVIEWMODEL___C___UPDATEPROPERTYVIEWMODELS_B__41_0_OFFSET UNITYSDK_OFFSET(0xDE7A6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanViewModel___c_TypeDefinitionIndex = 66875;

	class RelicPresetPlanViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RelicPresetPlanViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetPlanViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D110);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D118);
		}
		static ::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetSlotViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D120);
		}
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D128);
		}
		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D130);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetPlanViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5D138);
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
