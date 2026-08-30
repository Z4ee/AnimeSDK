#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD43E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD43E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONCARDINFOBYRARITY_B__70_0_OFFSET UNITYSDK_OFFSET(0xCD43F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONSPECIALDICEINFO_B__71_0_OFFSET UNITYSDK_OFFSET(0xCD43FA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLRANKLEVELINFO_B__33_0_OFFSET UNITYSDK_OFFSET(0xCD43E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__74_0_OFFSET UNITYSDK_OFFSET(0xCD44080)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__75_0_OFFSET UNITYSDK_OFFSET(0xCD44090)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETOWNEDDICEINFOLISTBYRECOMMENDATION_B__72_1_OFFSET UNITYSDK_OFFSET(0xCD44000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETSPECRULEGROUPDATASBYMAP_B__76_0_OFFSET UNITYSDK_OFFSET(0xCD44150)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c_TypeDefinitionIndex = 75622;

	class DiceCombatUtil___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>** StaticGet___9__70_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609C0);
		}
		static ::RPG::Client::DiceCombat::DiceCombatUtil___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatUtil___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609C8);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>** StaticGet___9__76_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609D0);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombatDiceConfigData*>** StaticGet___9__75_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombatDiceConfigData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609D8);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>** StaticGet___9__72_1()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609E0);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>** StaticGet___9__71_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609E8);
		}
		static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__74_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609F0);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x609F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllRankLevelInfo_b__33_0(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLRANKLEVELINFO_B__33_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllCollectionCardInfoByRarity_b__70_0(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONCARDINFOBYRARITY_B__70_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllCollectionSpecialDiceInfo_b__71_0(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONSPECIALDICEINFO_B__71_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetOwnedDiceInfoListByRecommendation_b__72_1(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETOWNEDDICEINFOLISTBYRECOMMENDATION_B__72_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetOrderedDiceInfoListByIDList_b__74_0(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__74_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetOrderedDiceInfoListByIDList_b__75_0(::RPG::Client::DiceCombatDiceConfigData* a1, ::RPG::Client::DiceCombatDiceConfigData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__75_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSpecRuleGroupDatasByMap_b__76_0(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETSPECRULEGROUPDATASBYMAP_B__76_0_OFFSET))(this, a1, a2);
		}
	};
}
