#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_HIDEMODIFIEREFFECT_METHOD_3_42EFA32977E5E624_OFFSET UNITYSDK_OFFSET(0x189FF150)
#define RPG_GAMECORE_HIDEMODIFIEREFFECT_METHOD_3_A9DD9D6D0E821409_OFFSET UNITYSDK_OFFSET(0x189FF1D0)
#define RPG_GAMECORE_HIDEMODIFIEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideModifierEffect_TypeDefinitionIndex = 22614;

	class HideModifierEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::System::Boolean IsHide; // 0x28
		::System::String* ReplaceEffectName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42EFA32977E5E624(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideModifierEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideModifierEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT_METHOD_3_42EFA32977E5E624_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9DD9D6D0E821409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideModifierEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideModifierEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMODIFIEREFFECT_METHOD_3_A9DD9D6D0E821409_OFFSET))(a1, a2);
		}
	};
}
