#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_METHOD_3_3F8B00BEEABB8596_OFFSET UNITYSDK_OFFSET(0x176A64E0)
#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_METHOD_3_DD2307795D3E37A0_OFFSET UNITYSDK_OFFSET(0x176A63F0)
#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x176A6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAnimatorParameterWithTransition_TypeDefinitionIndex = 21078;

	class SetAnimatorParameterWithTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParameterName; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::DynamicFloat* TransitionDuration; // 0x30
		::RPG::GameCore::FloatCurve* TransitionCurve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD2307795D3E37A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAnimatorParameterWithTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_METHOD_3_DD2307795D3E37A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F8B00BEEABB8596(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAnimatorParameterWithTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_METHOD_3_3F8B00BEEABB8596_OFFSET))(a1, a2);
		}
	};
}
