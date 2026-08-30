#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifyRoomPoolItemConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_METHOD_3_0EB6E3CB16422257_OFFSET UNITYSDK_OFFSET(0x1D48DB70)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_METHOD_3_B32521D1618E673B_OFFSET UNITYSDK_OFFSET(0x1D48DB20)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48DB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemRemoveConfig_TypeDefinitionIndex = 17798;

	class RogueTournModifyRoomPoolItemRemoveConfig : public ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EB6E3CB16422257(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_METHOD_3_0EB6E3CB16422257_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B32521D1618E673B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMREMOVECONFIG_METHOD_3_B32521D1618E673B_OFFSET))(a1, a2);
		}
	};
}
