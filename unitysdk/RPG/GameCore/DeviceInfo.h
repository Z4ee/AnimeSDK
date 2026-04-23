#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GraphicsSettingRequirements; }
namespace RPG::GameCore { class RenderResolution; }

#define RPG_GAMECORE_DEVICEINFO_METHOD_2_2DC94C861BC54494_OFFSET UNITYSDK_OFFSET(0x1885CCC0)
#define RPG_GAMECORE_DEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1885D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceInfo_TypeDefinitionIndex = 17358;

	class DeviceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GraphicsSettingRequirements*>* requirements; // 0x10
		::Il2CppArray<::RPG::GameCore::RenderResolution*>* renderResolutions; // 0x18
		::System::Int32 defaultVolatileGrade; // 0x20
		::System::Boolean Support120FPS; // 0x24
		::System::Boolean enterBattleSwitchHLODAdvScene; // 0x25
		::System::Int32 PersistentLayerHighestLodLevel; // 0x28
		::System::Boolean DynamicLoadBattleArea; // 0x2C
		::System::Boolean DynamicUnloadBattleArea; // 0x2D
		::System::Boolean EnableStoryStreamingSource; // 0x2E
		::System::Int32 TextureStreamingMemoryBudget; // 0x30
		::System::Boolean SupportMetalFX; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2DC94C861BC54494(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEINFO_METHOD_2_2DC94C861BC54494_OFFSET))(a1, a2);
		}
	};
}
