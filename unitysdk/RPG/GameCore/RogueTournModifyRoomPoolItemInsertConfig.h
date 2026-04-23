#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifyRoomPoolItemConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_METHOD_3_398E30F399C851A6_OFFSET UNITYSDK_OFFSET(0x18D7B000)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_METHOD_3_606BB3A757133AC2_OFFSET UNITYSDK_OFFSET(0x18D7AFD0)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7AFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemInsertConfig_TypeDefinitionIndex = 17105;

	class RogueTournModifyRoomPoolItemInsertConfig : public ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_398E30F399C851A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_METHOD_3_398E30F399C851A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_606BB3A757133AC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemInsertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMINSERTCONFIG_METHOD_3_606BB3A757133AC2_OFFSET))(a1, a2);
		}
	};
}
