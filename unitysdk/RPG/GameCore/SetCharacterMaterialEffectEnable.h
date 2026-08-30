#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_07883F4E58019D39_OFFSET UNITYSDK_OFFSET(0x1E813210)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_3529F5EC1DF122EE_OFFSET UNITYSDK_OFFSET(0x1E813260)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E813250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterMaterialEffectEnable_TypeDefinitionIndex = 22696;

	class SetCharacterMaterialEffectEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07883F4E58019D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_07883F4E58019D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3529F5EC1DF122EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_3529F5EC1DF122EE_OFFSET))(a1, a2);
		}
	};
}
