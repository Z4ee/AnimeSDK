#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPSTATECONFIG_METHOD_2_F9BE9BACFD0978C4_OFFSET UNITYSDK_OFFSET(0x19889860)
#define RPG_GAMECORE_LEVELPROPSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198899A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropStateConfig_TypeDefinitionIndex = 16409;

	class LevelPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::Single Rotation; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F9BE9BACFD0978C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATECONFIG_METHOD_2_F9BE9BACFD0978C4_OFFSET))(a1, a2);
		}
	};
}
