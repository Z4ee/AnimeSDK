#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_METHOD_3_43D5012FE8A65087_OFFSET UNITYSDK_OFFSET(0x19A0CD70)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_METHOD_3_9BD73920681D6195_OFFSET UNITYSDK_OFFSET(0x19A0D310)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0CD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_ModifyEnemyRotate_TypeDefinitionIndex = 16138;

	class PingPongEnemyGroupEvent_ModifyEnemyRotate : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::Boolean IsSelfRotate; // 0x10
		::System::Single RotateSpeed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9BD73920681D6195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_METHOD_3_9BD73920681D6195_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43D5012FE8A65087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_METHOD_3_43D5012FE8A65087_OFFSET))(a1, a2);
		}
	};
}
