#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_METHOD_3_1382F987171888A9_OFFSET UNITYSDK_OFFSET(0x17241150)
#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_METHOD_3_361DE8D110D67C7A_OFFSET UNITYSDK_OFFSET(0x17241190)
#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17241180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelObjectRefConfig_TypeDefinitionIndex = 15997;

	class GameLevelObjectRefConfig : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::RPG::GameCore::FloorInstanceType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1382F987171888A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelObjectRefConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelObjectRefConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_METHOD_3_1382F987171888A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_361DE8D110D67C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelObjectRefConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_METHOD_3_361DE8D110D67C7A_OFFSET))(a1, a2);
		}
	};
}
