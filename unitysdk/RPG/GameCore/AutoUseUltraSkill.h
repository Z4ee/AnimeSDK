#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_5F5EE6468019F57F_OFFSET UNITYSDK_OFFSET(0x1C5837C0)
#define RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_F6CEDA2029CEB11E_OFFSET UNITYSDK_OFFSET(0x1C583810)
#define RPG_GAMECORE_AUTOUSEULTRASKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C583800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoUseUltraSkill_TypeDefinitionIndex = 23205;

	class AutoUseUltraSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean WaitCutinFinished; // 0x20
		::System::Boolean Enable; // 0x21
		::Il2CppArray<::System::String*>* BindUltraSkillNames; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F5EE6468019F57F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoUseUltraSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoUseUltraSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_5F5EE6468019F57F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6CEDA2029CEB11E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_F6CEDA2029CEB11E_OFFSET))(a1, a2);
		}
	};
}
