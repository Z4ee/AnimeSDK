#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_METHOD_2_1814731AD2D1CC2F_OFFSET UNITYSDK_OFFSET(0x1CCCAA60)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCAAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolListConfig_TypeDefinitionIndex = 17800;

	class RogueTournModifyRoomPoolListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1814731AD2D1CC2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLLISTCONFIG_METHOD_2_1814731AD2D1CC2F_OFFSET))(a1, a2);
		}
	};
}
