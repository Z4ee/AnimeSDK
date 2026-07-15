#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_METHOD_3_10EC852EE70E8923_OFFSET UNITYSDK_OFFSET(0x1B4C7950)
#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_METHOD_3_1433C352630FA559_OFFSET UNITYSDK_OFFSET(0x1B4C78F0)
#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C7940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemySelfRotateCmptConfig_TypeDefinitionIndex = 18190;

	class PingPongEnemySelfRotateCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSelfRotate; // 0x10
		::System::Single RotateSpeed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1433C352630FA559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_METHOD_3_1433C352630FA559_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10EC852EE70E8923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_METHOD_3_10EC852EE70E8923_OFFSET))(a1, a2);
		}
	};
}
