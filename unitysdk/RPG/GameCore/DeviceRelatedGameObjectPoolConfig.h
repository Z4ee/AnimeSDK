#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameObjectPoolSetting; }

#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_7EF64F285278CE18_OFFSET UNITYSDK_OFFSET(0x1D819D40)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_A53B056F29AF13CE_OFFSET UNITYSDK_OFFSET(0x1D81A380)
#define RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D819D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedGameObjectPoolConfig_TypeDefinitionIndex = 16303;

	class DeviceRelatedGameObjectPoolConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::GameObjectPoolSetting* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A53B056F29AF13CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_A53B056F29AF13CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EF64F285278CE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDGAMEOBJECTPOOLCONFIG_METHOD_3_7EF64F285278CE18_OFFSET))(a1, a2);
		}
	};
}
