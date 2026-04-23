#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_METHOD_2_78B894B3C91B8EE7_OFFSET UNITYSDK_OFFSET(0x18D7AE50)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_METHOD_2_FA770335C86383B5_OFFSET UNITYSDK_OFFSET(0x18D7AFB0)
#define RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifyRoomPoolItemConfigBase_TypeDefinitionIndex = 17104;

	class RogueTournModifyRoomPoolItemConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78B894B3C91B8EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_METHOD_2_78B894B3C91B8EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_FA770335C86383B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModifyRoomPoolItemConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODIFYROOMPOOLITEMCONFIGBASE_METHOD_2_FA770335C86383B5_OFFSET))(a1, a2);
		}
	};
}
