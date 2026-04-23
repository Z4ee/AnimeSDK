#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_METHOD_2_149501AF03558415_OFFSET UNITYSDK_OFFSET(0x189274B0)
#define RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x189275F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowByPlayerCustomRoutePoint_TypeDefinitionIndex = 18907;

	class FollowByPlayerCustomRoutePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SwitchRoutePoint; // 0x10
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_149501AF03558415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_METHOD_2_149501AF03558415_OFFSET))(a1, a2);
		}
	};
}
