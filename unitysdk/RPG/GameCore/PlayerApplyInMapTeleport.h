#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_METHOD_3_1A765214F38C830A_OFFSET UNITYSDK_OFFSET(0x1BA09640)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_METHOD_3_7351301541F5FBA7_OFFSET UNITYSDK_OFFSET(0x1BA09570)
#define RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA09630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerApplyInMapTeleport_TypeDefinitionIndex = 19720;

	class PlayerApplyInMapTeleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7351301541F5FBA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerApplyInMapTeleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerApplyInMapTeleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_METHOD_3_7351301541F5FBA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A765214F38C830A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerApplyInMapTeleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerApplyInMapTeleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERAPPLYINMAPTELEPORT_METHOD_3_1A765214F38C830A_OFFSET))(a1, a2);
		}
	};
}
