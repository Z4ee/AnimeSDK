#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_METHOD_3_3920A5A384100847_OFFSET UNITYSDK_OFFSET(0x1D69E930)
#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_METHOD_3_E18EC677A56B6E12_OFFSET UNITYSDK_OFFSET(0x1D69E970)
#define RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddBehaviorFlagForModifier_TypeDefinitionIndex = 23359;

	class AddBehaviorFlagForModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AddBehaviorFlags; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3920A5A384100847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBehaviorFlagForModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBehaviorFlagForModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_METHOD_3_3920A5A384100847_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E18EC677A56B6E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBEHAVIORFLAGFORMODIFIER_METHOD_3_E18EC677A56B6E12_OFFSET))(a1, a2);
		}
	};
}
