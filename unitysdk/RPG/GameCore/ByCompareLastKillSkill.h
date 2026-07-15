#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_19E3DA203AFE74B1_OFFSET UNITYSDK_OFFSET(0x19CEF9E0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_620F8F0EB7D0C57E_OFFSET UNITYSDK_OFFSET(0x19CEFA10)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_DE29349BFBCAED22_OFFSET UNITYSDK_OFFSET(0x19CEF820)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_ED79BF2CDBC5A39B_OFFSET UNITYSDK_OFFSET(0x19CEF860)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEF850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLastKillSkill_TypeDefinitionIndex = 22189;

	class ByCompareLastKillSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetSkillName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DE29349BFBCAED22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_DE29349BFBCAED22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED79BF2CDBC5A39B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_ED79BF2CDBC5A39B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19E3DA203AFE74B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_19E3DA203AFE74B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_620F8F0EB7D0C57E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_METHOD_4_620F8F0EB7D0C57E_OFFSET))(a1, a2);
		}
	};
}
