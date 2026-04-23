#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/EnumStatusTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

class Class_1_0B6050F6F316691E;
class Class_1_2EC0EF10CE4B8713;
class Class_1_3745C69C00F04B7D_4;
class Class_1_3745C69C00F04B7D_5;
class Class_1_43DD8124539DA898;
class Class_1_43DD8124539DA898_1;
class Class_1_5D31C4140DCE7D34;
class Class_1_73B429E1E9F270F4;
class Class_1_942D40AEEDD1812F;
class Class_1_A4D134A7DAD941E3;
class Class_1_A88C3AAF0DD46F4C;
class Class_1_A88C3AAF0DD46F4C_1;
class Class_1_A88C3AAF0DD46F4C_3;
class Class_1_A88C3AAF0DD46F4C_4;
class Class_1_A88C3AAF0DD46F4C_6;
class Class_1_B34BC0DFAA62C487;
class Class_1_D6A07C122FCF6261;
class Class_1_DFF86A25F881990E;
class Class_1_E8C259E730C95D15;
class Class_1_EDD10E908F1C4623;
class Class_1_FCA657D695DD9485;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class StageMonsterWave; }
namespace System { class String; }
template <typename T> class Class_1_21268F69FE4BAE15_DelegateParseFromStr_1;

inline static constexpr unsigned int Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex = 23464;

class Class_1_21268F69FE4BAE15___O : public ::System::Object
{
public:
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_73B429E1E9F270F4*>** StaticGet__13___Parse_EvolveWeakSwitch()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_73B429E1E9F270F4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAC0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::MonsterResistEntry*>** StaticGet__35___Parse_MonsterResistEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::MonsterResistEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAC8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C*>** StaticGet__3___Parse_UintPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAD0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightChargeType>** StaticGet__23___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightChargeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAD8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_1*>** StaticGet__7___Parse_ActivityDiceRuleGroupItem()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAE0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::FixPoint>** StaticGet__2___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAE8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Int32>** StaticGet__8___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAF0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_4*>** StaticGet__14___Parse_EvolveBuildLevelPrice()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CAF8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AttackDamageType>** StaticGet__9___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB00);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_6*>** StaticGet__40___Parse_RelicTypeID()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB08);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::Client::TextID>** StaticGet__12___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB10);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_2EC0EF10CE4B8713*>** StaticGet__34___Parse_AISkillSequenceConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_2EC0EF10CE4B8713*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB18);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898_1*>** StaticGet__30___Parse_GridFightTraitBaseConfig_Index_PrimKey()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB20);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AvatarPropertyValue*>** StaticGet__17___Parse_AvatarPropertyValue()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AvatarPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB28);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::EnumStatusTag>** StaticGet__39___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::EnumStatusTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB30);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_5*>** StaticGet__28___Parse_GridFightChapterSectionPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB38);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_942D40AEEDD1812F*>** StaticGet__10___Parse_EvolveBuildRank()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_942D40AEEDD1812F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB40);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Single>** StaticGet__6___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB48);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::DiceCombatDiceFunctionTag>** StaticGet__5___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::DiceCombatDiceFunctionTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB50);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_4*>** StaticGet__27___Parse_GridFightRoleData()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB58);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ElementResistanceConfig*>** StaticGet__16___Parse_ElementResistanceConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ElementResistanceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB60);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ModifyCalcOpType>** StaticGet__26___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ModifyCalcOpType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB68);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::StageMonsterWave*>** StaticGet__43___Parse_StageMonsterWave()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::StageMonsterWave*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB70);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_FCA657D695DD9485*>** StaticGet__32___Parse_ILBattleAvatarSkillParamConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_FCA657D695DD9485*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB78);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B34BC0DFAA62C487*>** StaticGet__33___Parse_MonsterDynamicEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B34BC0DFAA62C487*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB80);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightFunctionNodeType>** StaticGet__29___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightFunctionNodeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB88);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A4D134A7DAD941E3*>** StaticGet__38___Parse_RelicSetPropertyAdd()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A4D134A7DAD941E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB90);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_0B6050F6F316691E*>** StaticGet__42___Parse_StringPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_0B6050F6F316691E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CB98);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_E8C259E730C95D15*>** StaticGet__20___Parse_SkillHealExcelConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_E8C259E730C95D15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBA0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_DFF86A25F881990E*>** StaticGet__37___Parse_MonsterOverrideSkillParam()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_DFF86A25F881990E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBA8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::CakeRaceRegionTag>** StaticGet__4___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::CakeRaceRegionTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBB0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_3*>** StaticGet__11___Parse_EvolveBuildSkillRecommendation()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBB8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AbilityPropertyValue*>** StaticGet__21___Parse_AbilityPropertyValue()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AbilityPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBC0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::UInt32>** StaticGet__0___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBC8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ItemConfig*>** StaticGet__15___Parse_ItemConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBD0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898*>** StaticGet__24___Parse_GridFightRoleConfig_Index_PrimKey()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBD8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_EDD10E908F1C4623*>** StaticGet__36___Parse_MonsterCustomEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_EDD10E908F1C4623*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBE0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::String*>** StaticGet__18___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBE8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_5D31C4140DCE7D34*>** StaticGet__19___Parse_SkillDamageExcelConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_5D31C4140DCE7D34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBF0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_D6A07C122FCF6261*>** StaticGet__41___Parse_StageSubLevelGraphs()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_D6A07C122FCF6261*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CBF8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Double>** StaticGet__25___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CC00);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GameModeType>** StaticGet__22___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CC08);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AetherPassiveSkillType>** StaticGet__1___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AetherPassiveSkillType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CC10);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ILBattleAvatarTag>** StaticGet__31___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ILBattleAvatarTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x1CC18);
	}
};
