#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleHitBoxHitPlayerAction.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_332D5771B9D4A964_OFFSET UNITYSDK_OFFSET(0x1BEB28F0)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_52EF2F3859C2510E_OFFSET UNITYSDK_OFFSET(0x1BEB28B0)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB28E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleHitBoxConfig_TypeDefinitionIndex = 17870;

	class FiveDimSimpleHitBoxConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSimpleHitBox; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* HitBoxTriggerShape; // 0x18
		::System::Single HitLastTime; // 0x20
		::RPG::GameCore::FiveDimSimpleHitBoxHitPlayerAction HitPlayerAction; // 0x24
		::RPG::GameCore::LittleGameEvent* OnHitPlayerEvent; // 0x28
		::System::String* HitEvent; // 0x30
		::System::Boolean IsEnableOnInit; // 0x38
		::RPG::GameCore::LittleGameEvent* OnInitEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52EF2F3859C2510E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_52EF2F3859C2510E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_332D5771B9D4A964(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_332D5771B9D4A964_OFFSET))(a1, a2);
		}
	};
}
