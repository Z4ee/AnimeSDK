#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_METHOD_2_8291AEDB6CA9E0F9_OFFSET UNITYSDK_OFFSET(0x1D883A60)
#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_METHOD_2_B8220B4353CE7FD7_OFFSET UNITYSDK_OFFSET(0x1D883C70)
#define RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarBaseClickConfig_TypeDefinitionIndex = 23652;

	class MonsterEnergyBarBaseClickConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8291AEDB6CA9E0F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_METHOD_2_8291AEDB6CA9E0F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B8220B4353CE7FD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarBaseClickConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARBASECLICKCONFIG_METHOD_2_B8220B4353CE7FD7_OFFSET))(a1, a2);
		}
	};
}
