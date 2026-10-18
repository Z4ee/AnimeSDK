#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEnterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_DE1BFFF026FC845E_OFFSET UNITYSDK_OFFSET(0x1DB51D90)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_F4859030A2515EB0_OFFSET UNITYSDK_OFFSET(0x1DB51D50)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB51D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportToFiveDimGame_TypeDefinitionIndex = 21282;

	class TeleportToFiveDimGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean DisableCameraBlend; // 0x20
		::System::Boolean NeedWaitFinish; // 0x21
		::RPG::GameCore::FiveDimEnterType EnterType; // 0x24
		::System::Boolean WaitFullStreaming; // 0x28
		::System::Boolean WaitCameraBlendFinish; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4859030A2515EB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToFiveDimGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToFiveDimGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_F4859030A2515EB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE1BFFF026FC845E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_DE1BFFF026FC845E_OFFSET))(a1, a2);
		}
	};
}
