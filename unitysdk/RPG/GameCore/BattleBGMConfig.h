#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleBGMStateConfig; }

#define RPG_GAMECORE_BATTLEBGMCONFIG_METHOD_2_9AEE972880513F9A_OFFSET UNITYSDK_OFFSET(0x186EFD70)
#define RPG_GAMECORE_BATTLEBGMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186EFE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMConfig_TypeDefinitionIndex = 17220;

	class BattleBGMConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleBGMStateConfig*>* BattleBGMPriorityState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9AEE972880513F9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleBGMConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleBGMConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIG_METHOD_2_9AEE972880513F9A_OFFSET))(a1, a2);
		}
	};
}
