#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_METHOD_4_7EC830727C4A3F75_OFFSET UNITYSDK_OFFSET(0x18DF4E70)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_METHOD_4_8F5D4520C469244A_OFFSET UNITYSDK_OFFSET(0x18DF4D00)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF4E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_TeleportToBornPos_TypeDefinitionIndex = 19026;

	class ST_Main_TeleportToBornPos : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F5D4520C469244A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_TeleportToBornPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_METHOD_4_8F5D4520C469244A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EC830727C4A3F75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_TeleportToBornPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOBORNPOS_METHOD_4_7EC830727C4A3F75_OFFSET))(a1, a2);
		}
	};
}
