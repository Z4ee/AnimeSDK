#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_0B64C64DEFB172A0_OFFSET UNITYSDK_OFFSET(0x1CF488C0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_15DB15100D900805_OFFSET UNITYSDK_OFFSET(0x1CF48A90)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_1F629DBF6134F2F0_OFFSET UNITYSDK_OFFSET(0x1CF48AF0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_D354E09C66FFE431_OFFSET UNITYSDK_OFFSET(0x1CF48820)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF48880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSkillTypeDisable_TypeDefinitionIndex = 24041;

	class ByIsSkillTypeDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D354E09C66FFE431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_D354E09C66FFE431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B64C64DEFB172A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_0B64C64DEFB172A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15DB15100D900805(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_15DB15100D900805_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F629DBF6134F2F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_1F629DBF6134F2F0_OFFSET))(a1, a2);
		}
	};
}
