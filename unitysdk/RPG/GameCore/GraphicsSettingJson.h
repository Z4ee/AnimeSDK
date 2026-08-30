#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class ForceGlesDevices; }
namespace RPG::GameCore { class ForceVulkanDevices; }
namespace RPG::GameCore { class TempFixDevice; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRAPHICSSETTINGJSON_METHOD_2_7A29268E8D30134C_OFFSET UNITYSDK_OFFSET(0x1D136D00)
#define RPG_GAMECORE_GRAPHICSSETTINGJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D148460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicsSettingJson_TypeDefinitionIndex = 18060;

	class GraphicsSettingJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DeviceInfo*>* deviceSettings; // 0x10
		::RPG::GameCore::ForceGlesDevices* forceGlesDevices; // 0x18
		::RPG::GameCore::ForceVulkanDevices* forceVulkanDevices; // 0x20
		::RPG::GameCore::TempFixDevice* tempFixDevice; // 0x28
		::System::Int32 ForceGraphicsJob; // 0x30
		::System::Int32 BackbufferColorSpace; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A29268E8D30134C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GraphicsSettingJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GraphicsSettingJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGJSON_METHOD_2_7A29268E8D30134C_OFFSET))(a1, a2);
		}
	};
}
