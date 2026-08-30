#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_0CEEF1553335EA29_OFFSET UNITYSDK_OFFSET(0x1D39DC40)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_10393DECB3570820_OFFSET UNITYSDK_OFFSET(0x1D39DC00)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39DC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveBehaviorFlagForModifier_TypeDefinitionIndex = 22861;

	class RemoveBehaviorFlagForModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* RemoveBehaviorFlags; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10393DECB3570820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_10393DECB3570820_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CEEF1553335EA29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_0CEEF1553335EA29_OFFSET))(a1, a2);
		}
	};
}
