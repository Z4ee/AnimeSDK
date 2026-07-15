#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationChargerIconConfig; }
namespace RPG::GameCore { class MapRotationVolumeIconConfig; }

#define RPG_GAMECORE_MAP3DICONCONFIG_METHOD_2_0D9E6A2D6F64F87B_OFFSET UNITYSDK_OFFSET(0x1BCDE640)
#define RPG_GAMECORE_MAP3DICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDE7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Map3DIconConfig_TypeDefinitionIndex = 16358;

	class Map3DIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeIconConfig*>* VolumeIconConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationChargerIconConfig*>* ChargerIconConfig; // 0x18
		::Il2CppArray<::System::UInt32>* IgnorePoseProps; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAP3DICONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D9E6A2D6F64F87B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Map3DIconConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Map3DIconConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAP3DICONCONFIG_METHOD_2_0D9E6A2D6F64F87B_OFFSET))(a1, a2);
		}
	};
}
