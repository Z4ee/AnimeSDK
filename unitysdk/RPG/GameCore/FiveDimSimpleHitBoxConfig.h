#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleHitBoxHitPlayerAction.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_7A3175C93FB13C73_OFFSET UNITYSDK_OFFSET(0x19756BC0)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_8E7C4DE58F775994_OFFSET UNITYSDK_OFFSET(0x19756C30)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19756C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleHitBoxConfig_TypeDefinitionIndex = 17696;

	class FiveDimSimpleHitBoxConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSimpleHitBox; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* HitBoxTriggerShape; // 0x18
		::System::Single HitLastTime; // 0x20
		::RPG::GameCore::FiveDimSimpleHitBoxHitPlayerAction HitPlayerAction; // 0x24
		::System::String* HitEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A3175C93FB13C73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_7A3175C93FB13C73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E7C4DE58F775994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_METHOD_3_8E7C4DE58F775994_OFFSET))(a1, a2);
		}
	};
}
