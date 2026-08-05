#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8D8F40)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8D8EB0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_METHOD_2_03482897E56BA861_OFFSET UNITYSDK_OFFSET(0x8D8FD0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x8D8FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTraitConfig_TypeDefinitionIndex = 68074;

	struct alignas(8) ProjectileTraitConfig
	{
		::System::String* ConfigName; // 0x10
		::UnityEngine::Vector3 OriginalSpeed; // 0x18
		::System::Single ClimaxPoint; // 0x24

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_03482897E56BA861(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIG_METHOD_2_03482897E56BA861_OFFSET))(this, a1, a2);
		}
	};
}
