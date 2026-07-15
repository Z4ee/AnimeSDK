#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_METHOD_2_552ED27CA50BB1E7_OFFSET UNITYSDK_OFFSET(0x1BB7C520)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolConfig_TypeDefinitionIndex = 17282;

	class RogueTournModifyRoomPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_552ED27CA50BB1E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLCONFIG_METHOD_2_552ED27CA50BB1E7_OFFSET))(a1, a2);
		}
	};
}
