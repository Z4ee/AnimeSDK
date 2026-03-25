#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }

#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_METHOD_3_D17314141ABB6AA2_OFFSET UNITYSDK_OFFSET(0x16F36CF0)
#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_METHOD_3_F7965E6CE18B421D_OFFSET UNITYSDK_OFFSET(0x16F36D90)
#define RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F36D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFollowByPlayer_TypeDefinitionIndex = 18261;

	class AdvNpcFollowByPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x18
		::System::Single KeepDistance; // 0x1C
		::System::Single FollowDistance; // 0x20
		::System::Single WaitProtectTime; // 0x24
		::System::Single WaitActionTime; // 0x28
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x30
		::RPG::GameCore::WaypathUsageType Waypath; // 0x38
		::RPG::GameCore::TaskConfig* OnReachTask; // 0x40
		::System::Single RushProtectTime; // 0x48
		::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* SwitchMotionFlagList; // 0x50
		::System::Boolean IsNpcMaster; // 0x58
		::System::Single FarDistance; // 0x5C
		::System::Single NearDistacne; // 0x60
		::System::Boolean NoAutoDisableTalk; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D17314141ABB6AA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFollowByPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFollowByPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_METHOD_3_D17314141ABB6AA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7965E6CE18B421D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWBYPLAYER_METHOD_3_F7965E6CE18B421D_OFFSET))(a1, a2);
		}
	};
}
