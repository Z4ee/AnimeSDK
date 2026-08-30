#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_3210CDD26D2E0B8D_OFFSET UNITYSDK_OFFSET(0x1C57AF40)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_654B89873B53FBE0_OFFSET UNITYSDK_OFFSET(0x1C57AF00)
#define RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57AF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachPreshowDamageTypeForSkill_TypeDefinitionIndex = 22580;

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

		static ::System::Void Method_3_654B89873B53FBE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_654B89873B53FBE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3210CDD26D2E0B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPRESHOWDAMAGETYPEFORSKILL_METHOD_3_3210CDD26D2E0B8D_OFFSET))(a1, a2);
		}
	};
}
