#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_METHOD_2_8EC6AA90B0232F57_OFFSET UNITYSDK_OFFSET(0x1D16F810)
#define RPG_GAMECORE_GROUPENTITYDESTROYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16F9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupEntityDestroyConfig_TypeDefinitionIndex = 20981;

	class GroupEntityDestroyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Boolean IsDestroyAllEntityType; // 0x14
		::RPG::GameCore::GroupLocalTargetType SpawnEntityType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYDESTROYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8EC6AA90B0232F57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupEntityDestroyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupEntityDestroyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_METHOD_2_8EC6AA90B0232F57_OFFSET))(a1, a2);
		}
	};
}
