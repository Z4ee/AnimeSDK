#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6F6EF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6F6F30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__GET_RELICINFOLIST_B__32_0_OFFSET UNITYSDK_OFFSET(0xC6F6F40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__GET_RELICITEMDATAS_B__34_0_OFFSET UNITYSDK_OFFSET(0xC6F6FF0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculationResultData___c_TypeDefinitionIndex = 69498;

	class RelicSmartSuitCalculationResultData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCalculationResultData___c_TypeDefinitionIndex)->GetStaticField(0x2BD60);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData___c** StaticGet___9()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData___c**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCalculationResultData___c_TypeDefinitionIndex)->GetStaticField(0x2BD68);
		}
		static ::System::Comparison_1<::RPG::Client::RelicItemData*>** StaticGet___9__34_0()
		{
			return (::System::Comparison_1<::RPG::Client::RelicItemData*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCalculationResultData___c_TypeDefinitionIndex)->GetStaticField(0x2BD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RelicInfoList_b__32_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__GET_RELICINFOLIST_B__32_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _get_RelicItemDatas_b__34_0(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCALCULATIONRESULTDATA___C__GET_RELICITEMDATAS_B__34_0_OFFSET))(this, a1, a2);
		}
	};
}
