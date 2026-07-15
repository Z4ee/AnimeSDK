#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleBGMStateConfig; }

#define RPG_GAMECORE_BATTLEBGMCONFIG_METHOD_2_0897CE4BC43755F7_OFFSET UNITYSDK_OFFSET(0x1A3E3610)
#define RPG_GAMECORE_BATTLEBGMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E36D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMConfig_TypeDefinitionIndex = 17390;

	class BattleBGMConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleBGMStateConfig*>* BattleBGMPriorityState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0897CE4BC43755F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleBGMConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleBGMConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG_METHOD_2_0897CE4BC43755F7_OFFSET))(a1, a2);
		}
	};
}
