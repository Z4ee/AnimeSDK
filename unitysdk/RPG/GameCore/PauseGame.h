#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAUSEGAME_METHOD_3_B30BD80AF5E88242_OFFSET UNITYSDK_OFFSET(0x1BB127B0)
#define RPG_GAMECORE_PAUSEGAME_METHOD_3_EBD2FF225EAB2B3B_OFFSET UNITYSDK_OFFSET(0x1BB127F0)
#define RPG_GAMECORE_PAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB127E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseGame_TypeDefinitionIndex = 23460;

	class PauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Boolean ExcludeVoice; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B30BD80AF5E88242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME_METHOD_3_B30BD80AF5E88242_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBD2FF225EAB2B3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME_METHOD_3_EBD2FF225EAB2B3B_OFFSET))(a1, a2);
		}
	};
}
