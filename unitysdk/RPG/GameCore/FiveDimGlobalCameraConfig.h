#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDefaultCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_METHOD_2_A6CB6B9D45827AB4_OFFSET UNITYSDK_OFFSET(0x1D0E7BB0)
#define RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E9B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGlobalCameraConfig_TypeDefinitionIndex = 16496;

	class FiveDimGlobalCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimDefaultCameraConfig* DefaultCameraTemplate; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimDefaultCameraConfig*>* BakedDefaultCameras; // 0x18
		::System::String* FixCameraPrefabPath; // 0x20
		::System::String* FollowCameraPrefabPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6CB6B9D45827AB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGlobalCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGlobalCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_METHOD_2_A6CB6B9D45827AB4_OFFSET))(a1, a2);
		}
	};
}
