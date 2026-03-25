#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierUIPosition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierForceKillConfig; }
namespace RPG::GameCore { class ModifierHint; }
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_METHOD_2_E6754E924862C07A_OFFSET UNITYSDK_OFFSET(0x178D3A40)
#define RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178D4270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierUIConfig_TypeDefinitionIndex = 16745;

	class TurnBasedModifierUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIEffectPath; // 0x10
		::System::String* UIMiniEffectPath; // 0x18
		::RPG::GameCore::ModifierUIPosition UIPosition; // 0x20
		::System::String* ModifierUIPriority; // 0x28
		::System::Boolean IsShowInAvatarPanel; // 0x30
		::System::Boolean IsShowNumInAvatarPanel; // 0x31
		::System::Boolean IsShowInHUD; // 0x32
		::System::String* TextPath; // 0x38
		::Il2CppArray<::RPG::GameCore::ModifierHint*>* Hints; // 0x40
		::RPG::GameCore::ModifierForceKillConfig* ForceKillConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6754E924862C07A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_METHOD_2_E6754E924862C07A_OFFSET))(a1, a2);
		}
	};
}
