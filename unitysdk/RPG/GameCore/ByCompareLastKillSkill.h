#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_103CEB882592C709_OFFSET UNITYSDK_OFFSET(0x1951C0C0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_8B103DE2E92CB9B8_OFFSET UNITYSDK_OFFSET(0x1951C040)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_DF54E6B9675723C5_OFFSET UNITYSDK_OFFSET(0x1951BDF0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_ED79BF2CDBC5A39B_OFFSET UNITYSDK_OFFSET(0x1951BEC0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1951BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLastKillSkill_TypeDefinitionIndex = 21763;

	class ByCompareLastKillSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetSkillName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF54E6B9675723C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_DF54E6B9675723C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED79BF2CDBC5A39B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_ED79BF2CDBC5A39B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B103DE2E92CB9B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_8B103DE2E92CB9B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_103CEB882592C709(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_103CEB882592C709_OFFSET))(a1, a2);
		}
	};
}
