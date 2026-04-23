#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_8069F71B6DD0B6E6_OFFSET UNITYSDK_OFFSET(0x186ADF20)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_8E76D8F6CE5EDBA9_OFFSET UNITYSDK_OFFSET(0x186ADEA0)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x186ADEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachPreshowDamageTypeForSkill_TypeDefinitionIndex = 21748;

	class AttachPreshowDamageTypeForSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsCancel; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* SkillNameList; // 0x28
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E76D8F6CE5EDBA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_8E76D8F6CE5EDBA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8069F71B6DD0B6E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_8069F71B6DD0B6E6_OFFSET))(a1, a2);
		}
	};
}
