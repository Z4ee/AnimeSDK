#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_METHOD_3_09511807A5DE0381_OFFSET UNITYSDK_OFFSET(0x19C493B0)
#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_METHOD_3_BEABCCAB6C676C92_OFFSET UNITYSDK_OFFSET(0x19C49560)
#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C494A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorParameter_TypeDefinitionIndex = 22444;

	class SetEffectAnimatorParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString UniqueEffectName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ParameterName; // 0x28
		::System::Boolean IterateAnimatorsUntilMatched; // 0x30
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x34
		::System::Boolean BoolValue; // 0x38
		::RPG::GameCore::DynamicFloat* FloatValue; // 0x40
		::RPG::GameCore::DynamicFloat* IntValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09511807A5DE0381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_METHOD_3_09511807A5DE0381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEABCCAB6C676C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_METHOD_3_BEABCCAB6C676C92_OFFSET))(a1, a2);
		}
	};
}
