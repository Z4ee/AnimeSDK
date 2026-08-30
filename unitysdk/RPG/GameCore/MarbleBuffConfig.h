#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleBuffEffect.h"
#include "unitysdk/RPG/GameCore/MarbleBuffType.h"
#include "unitysdk/RPG/GameCore/MarbleLifeTime.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBUFFCONFIG_METHOD_2_065CC8A25FF1E45C_OFFSET UNITYSDK_OFFSET(0x1D22E220)
#define RPG_GAMECORE_MARBLEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22E590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffConfig_TypeDefinitionIndex = 16711;

	class MarbleBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleBuffType BuffType; // 0x10
		::System::UInt32 MaxStackCount; // 0x14
		::RPG::GameCore::MarbleLifeTime LifeTime; // 0x18
		::System::Int32 RoundCount; // 0x1C
		::System::Int32 ActionCount; // 0x20
		::RPG::GameCore::MarbleBuffEffect BuffEffect; // 0x24
		::RPG::GameCore::MarbleValue ValueType; // 0x28
		::RPG::GameCore::MarbleOperation Operation; // 0x2C
		::System::Single Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_065CC8A25FF1E45C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONFIG_METHOD_2_065CC8A25FF1E45C_OFFSET))(a1, a2);
		}
	};
}
