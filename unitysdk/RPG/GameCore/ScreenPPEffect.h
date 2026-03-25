#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenPPEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCREENPPEFFECT_METHOD_3_DA45E579125F8D42_OFFSET UNITYSDK_OFFSET(0x1769D5F0)
#define RPG_GAMECORE_SCREENPPEFFECT_METHOD_3_EDE72BB3FD2A7779_OFFSET UNITYSDK_OFFSET(0x1769D670)
#define RPG_GAMECORE_SCREENPPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1769D640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenPPEffect_TypeDefinitionIndex = 22034;

	class ScreenPPEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenPPEffectType Type; // 0x18
		::System::Boolean Active; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA45E579125F8D42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenPPEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenPPEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT_METHOD_3_DA45E579125F8D42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDE72BB3FD2A7779(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenPPEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenPPEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT_METHOD_3_EDE72BB3FD2A7779_OFFSET))(a1, a2);
		}
	};
}
