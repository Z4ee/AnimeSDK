#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_PositionType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_METHOD_4_33943FF2A1893DAE_OFFSET UNITYSDK_OFFSET(0x1DB406C0)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_METHOD_4_5C7EB525D8271057_OFFSET UNITYSDK_OFFSET(0x1DB40680)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB406B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_TeleportToPosition_TypeDefinitionIndex = 19867;

	class ST_Main_TeleportToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_PositionType PositionType; // 0x18
		::System::UInt32 PointID; // 0x1C
		::System::Boolean UseFlashEffectStyle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C7EB525D8271057(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_TeleportToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_TeleportToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_METHOD_4_5C7EB525D8271057_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33943FF2A1893DAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_TeleportToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_TeleportToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_METHOD_4_33943FF2A1893DAE_OFFSET))(a1, a2);
		}
	};
}
