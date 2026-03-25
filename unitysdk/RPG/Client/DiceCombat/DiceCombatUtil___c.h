#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9492230)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9492270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONCARDINFOBYRARITY_B__65_0_OFFSET UNITYSDK_OFFSET(0x94922D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONSPECIALDICEINFO_B__66_0_OFFSET UNITYSDK_OFFSET(0x9492330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLRANKLEVELINFO_B__32_0_OFFSET UNITYSDK_OFFSET(0x9492280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__69_0_OFFSET UNITYSDK_OFFSET(0x9492AD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETOWNEDDICEINFOLISTBYRECOMMENDATION_B__67_0_OFFSET UNITYSDK_OFFSET(0x9492390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETSPECRULEGROUPDATASBYMAP_B__70_0_OFFSET UNITYSDK_OFFSET(0x9492B40)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c_TypeDefinitionIndex = 61936;

	class DiceCombatUtil___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>** StaticGet___9__66_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44DF0);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombatDiceConfigData*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombatDiceConfigData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44DF8);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>** StaticGet___9__70_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44E00);
		}
		static ::RPG::Client::DiceCombat::DiceCombatUtil___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatUtil___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44E08);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44E10);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>** StaticGet___9__65_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44E18);
		}
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>** StaticGet___9__67_0()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___c_TypeDefinitionIndex)->GetStaticField(0x44E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllRankLevelInfo_b__32_0(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLRANKLEVELINFO_B__32_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetAllCollectionCardInfoByRarity_b__65_0(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* lhs, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONCARDINFOBYRARITY_B__65_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 _GetAllCollectionSpecialDiceInfo_b__66_0(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* lhs, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETALLCOLLECTIONSPECIALDICEINFO_B__66_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 _GetOwnedDiceInfoListByRecommendation_b__67_0(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* lhs, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETOWNEDDICEINFOLISTBYRECOMMENDATION_B__67_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 _GetOrderedDiceInfoListByIDList_b__69_0(::RPG::Client::DiceCombatDiceConfigData* lhs, ::RPG::Client::DiceCombatDiceConfigData* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETORDEREDDICEINFOLISTBYIDLIST_B__69_0_OFFSET))(this, lhs, rhs);
		}

		::System::Int32 _GetSpecRuleGroupDatasByMap_b__70_0(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* lhs, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__GETSPECRULEGROUPDATASBYMAP_B__70_0_OFFSET))(this, lhs, rhs);
		}
	};
}
