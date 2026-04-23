#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_METHOD_3_925388FA9E3F1A24_OFFSET UNITYSDK_OFFSET(0x18BFA570)
#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_METHOD_3_AC9D6546CAB5F67B_OFFSET UNITYSDK_OFFSET(0x18BFA6A0)
#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFA680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyCmptConfig_TypeDefinitionIndex = 17975;

	class PingPongEnemyCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* ConfigPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_925388FA9E3F1A24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_METHOD_3_925388FA9E3F1A24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC9D6546CAB5F67B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_METHOD_3_AC9D6546CAB5F67B_OFFSET))(a1, a2);
		}
	};
}
