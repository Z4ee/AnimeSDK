#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_0B64C64DEFB172A0_OFFSET UNITYSDK_OFFSET(0x1956DA20)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_464B06AC8E4FE3AF_OFFSET UNITYSDK_OFFSET(0x1956D900)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_6F36D9C6A9693F3E_OFFSET UNITYSDK_OFFSET(0x1956DBF0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_F036D92EA188675D_OFFSET UNITYSDK_OFFSET(0x1956DC90)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1956D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSkillTypeDisable_TypeDefinitionIndex = 22992;

	class ByIsSkillTypeDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_464B06AC8E4FE3AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_464B06AC8E4FE3AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B64C64DEFB172A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_0B64C64DEFB172A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F36D9C6A9693F3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_6F36D9C6A9693F3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F036D92EA188675D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_F036D92EA188675D_OFFSET))(a1, a2);
		}
	};
}
