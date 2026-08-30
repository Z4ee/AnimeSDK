#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DeviceModelInfo; }
namespace RPG::GameCore { class GraphicDeviceInfo; }

#define RPG_GAMECORE_FORCEVULKANDEVICES_METHOD_2_6BB38731CBE015FB_OFFSET UNITYSDK_OFFSET(0x1D1106A0)
#define RPG_GAMECORE_FORCEVULKANDEVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D110860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceVulkanDevices_TypeDefinitionIndex = 18058;

	class ForceVulkanDevices : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DeviceModelInfo*>* ForceGlesDeviceModelList; // 0x10
		::Il2CppArray<::RPG::GameCore::DeviceModelInfo*>* DeviceModelList; // 0x18
		::Il2CppArray<::RPG::GameCore::GraphicDeviceInfo*>* GraphicDeviceList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEVULKANDEVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BB38731CBE015FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceVulkanDevices*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceVulkanDevices*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEVULKANDEVICES_METHOD_2_6BB38731CBE015FB_OFFSET))(a1, a2);
		}
	};
}
