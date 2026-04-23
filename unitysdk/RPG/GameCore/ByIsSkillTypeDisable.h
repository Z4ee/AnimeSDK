#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_0B64C64DEFB172A0_OFFSET UNITYSDK_OFFSET(0x187578C0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_METHOD_4_464B06AC8E4FE3AF_OFFSET UNITYSDK_OFFSET(0x187577A0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18757840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSkillTypeDisable_TypeDefinitionIndex = 23325;

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
	};
}
