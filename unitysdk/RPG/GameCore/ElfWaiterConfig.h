#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFWAITERCONFIG_METHOD_2_33C668AA448D3D4A_OFFSET UNITYSDK_OFFSET(0x1889E370)
#define RPG_GAMECORE_ELFWAITERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaiterConfig_TypeDefinitionIndex = 17538;

	class ElfWaiterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single WaiterSpeed; // 0x10
		::System::Single TableCleanTime; // 0x14
		::System::Single ObstacleCleanTime; // 0x18
		::System::Single ProcessEventTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAITERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_33C668AA448D3D4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfWaiterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfWaiterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAITERCONFIG_METHOD_2_33C668AA448D3D4A_OFFSET))(a1, a2);
		}
	};
}
