#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_METHOD_3_0703732BD681FE40_OFFSET UNITYSDK_OFFSET(0x1D331450)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_METHOD_3_D8CC747CE7BC361C_OFFSET UNITYSDK_OFFSET(0x1D330F80)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D330F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_ModifyShoot_TypeDefinitionIndex = 16805;

	class PingPongEnemyGroupEvent_ModifyShoot : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::System::Single ShootInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0703732BD681FE40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_METHOD_3_0703732BD681FE40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8CC747CE7BC361C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_METHOD_3_D8CC747CE7BC361C_OFFSET))(a1, a2);
		}
	};
}
