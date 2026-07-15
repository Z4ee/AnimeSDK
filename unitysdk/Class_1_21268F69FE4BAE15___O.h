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
class Class_1_3745C69C00F04B7D_1;
class Class_1_3745C69C00F04B7D_2;
class Class_1_43DD8124539DA898;
class Class_1_43DD8124539DA898_1;
class Class_1_5D31C4140DCE7D34;
class Class_1_73B429E1E9F270F4;
class Class_1_942D40AEEDD1812F;
class Class_1_A4D134A7DAD941E3;
class Class_1_A88C3AAF0DD46F4C;
class Class_1_A88C3AAF0DD46F4C_1;
class Class_1_A88C3AAF0DD46F4C_2;
class Class_1_A88C3AAF0DD46F4C_3;
class Class_1_A88C3AAF0DD46F4C_4;
class Class_1_B34BC0DFAA62C487;
class Class_1_B7B6A11029867830;
class Class_1_D6A07C122FCF6261;
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

inline static constexpr unsigned int Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex = 10501;

class Class_1_21268F69FE4BAE15___O : public ::System::Object
{
public:
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Int32>** StaticGet__8___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41AF0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightChargeType>** StaticGet__23___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightChargeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41AF8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GameModeType>** StaticGet__22___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B00);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_3*>** StaticGet__40___Parse_RelicTypeID()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B08);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_FCA657D695DD9485*>** StaticGet__32___Parse_ILBattleAvatarSkillParamConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_FCA657D695DD9485*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B10);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_5D31C4140DCE7D34*>** StaticGet__19___Parse_SkillDamageExcelConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_5D31C4140DCE7D34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B18);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ModifyCalcOpType>** StaticGet__26___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ModifyCalcOpType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B20);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898_1*>** StaticGet__30___Parse_GridFightTraitBaseConfig_Index_PrimKey()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B28);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ILBattleAvatarTag>** StaticGet__31___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ILBattleAvatarTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B30);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_73B429E1E9F270F4*>** StaticGet__13___Parse_EvolveWeakSwitch()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_73B429E1E9F270F4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B38);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_942D40AEEDD1812F*>** StaticGet__10___Parse_EvolveBuildRank()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_942D40AEEDD1812F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B40);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898*>** StaticGet__24___Parse_GridFightRoleConfig_Index_PrimKey()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_43DD8124539DA898*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B48);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ElementResistanceConfig*>** StaticGet__16___Parse_ElementResistanceConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ElementResistanceConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B50);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::MonsterResistEntry*>** StaticGet__35___Parse_MonsterResistEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::MonsterResistEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B58);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_2*>** StaticGet__27___Parse_GridFightRoleData()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B60);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C*>** StaticGet__7___Parse_ActivityDiceRuleGroupItem()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B68);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::Client::TextID>** StaticGet__12___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B70);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::FixPoint>** StaticGet__2___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B78);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AvatarPropertyValue*>** StaticGet__17___Parse_AvatarPropertyValue()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AvatarPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B80);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ItemConfig*>** StaticGet__15___Parse_ItemConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B88);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_EDD10E908F1C4623*>** StaticGet__36___Parse_MonsterCustomEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_EDD10E908F1C4623*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B90);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AbilityPropertyValue*>** StaticGet__21___Parse_AbilityPropertyValue()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AbilityPropertyValue*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41B98);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_0B6050F6F316691E*>** StaticGet__42___Parse_StringPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_0B6050F6F316691E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BA0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B7B6A11029867830*>** StaticGet__37___Parse_MonsterOverrideSkillParam()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B7B6A11029867830*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BA8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::DiceCombatDiceFunctionTag>** StaticGet__5___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::DiceCombatDiceFunctionTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BB0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_1*>** StaticGet__14___Parse_EvolveBuildLevelPrice()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BB8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Double>** StaticGet__25___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BC0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_4*>** StaticGet__3___Parse_UintPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BC8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightFunctionNodeType>** StaticGet__29___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::GridFightFunctionNodeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BD0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_E8C259E730C95D15*>** StaticGet__20___Parse_SkillHealExcelConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_E8C259E730C95D15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BD8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Single>** StaticGet__6___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BE0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_D6A07C122FCF6261*>** StaticGet__41___Parse_StageSubLevelGraphs()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_D6A07C122FCF6261*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BE8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AetherPassiveSkillType>** StaticGet__1___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AetherPassiveSkillType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BF0);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A4D134A7DAD941E3*>** StaticGet__38___Parse_RelicSetPropertyAdd()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A4D134A7DAD941E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41BF8);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::StageMonsterWave*>** StaticGet__43___Parse_StageMonsterWave()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::StageMonsterWave*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C00);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::EnumStatusTag>** StaticGet__39___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::EnumStatusTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C08);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_2EC0EF10CE4B8713*>** StaticGet__34___Parse_AISkillSequenceConfig()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_2EC0EF10CE4B8713*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C10);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::CakeRaceRegionTag>** StaticGet__4___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::CakeRaceRegionTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C18);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_1*>** StaticGet__28___Parse_GridFightChapterSectionPair()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_3745C69C00F04B7D_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C20);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AttackDamageType>** StaticGet__9___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C28);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::UInt32>** StaticGet__0___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C30);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::String*>** StaticGet__18___Parse()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C38);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_2*>** StaticGet__11___Parse_EvolveBuildSkillRecommendation()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_A88C3AAF0DD46F4C_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C40);
	}
	static ::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B34BC0DFAA62C487*>** StaticGet__33___Parse_MonsterDynamicEntry()
	{
		return (::Class_1_21268F69FE4BAE15_DelegateParseFromStr_1<::Class_1_B34BC0DFAA62C487*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21268F69FE4BAE15___O_TypeDefinitionIndex)->GetStaticField(0x41C48);
	}
};
