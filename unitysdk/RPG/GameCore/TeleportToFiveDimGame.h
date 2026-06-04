#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEnterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_490CBFC1FC1D19EF_OFFSET UNITYSDK_OFFSET(0x19DDE5B0)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_80CCEC55F21CD419_OFFSET UNITYSDK_OFFSET(0x19DDE630)
#define RPG_GAMECORE_TELEPORTTOFIVEDIMGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDE600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportToFiveDimGame_TypeDefinitionIndex = 20112;

	class TeleportToFiveDimGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean DisableCameraBlend; // 0x20
		::System::Boolean NeedWaitFinish; // 0x21
		::RPG::GameCore::FiveDimEnterType EnterType; // 0x24
		::System::Boolean WaitFullStreaming; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_490CBFC1FC1D19EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToFiveDimGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToFiveDimGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_490CBFC1FC1D19EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80CCEC55F21CD419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTTOFIVEDIMGAME_METHOD_3_80CCEC55F21CD419_OFFSET))(a1, a2);
		}
	};
}
