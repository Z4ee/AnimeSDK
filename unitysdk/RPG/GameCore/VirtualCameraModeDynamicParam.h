#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwipeRotationCameraParam; }

#define RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_METHOD_2_FA4D32DA7B0108D7_OFFSET UNITYSDK_OFFSET(0x19E4D4B0)
#define RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4D5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VirtualCameraModeDynamicParam_TypeDefinitionIndex = 19684;

	class VirtualCameraModeDynamicParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OrbitalTransposerBias; // 0x10
		::RPG::GameCore::SwipeRotationCameraParam* SwipeCameraConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FA4D32DA7B0108D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VirtualCameraModeDynamicParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VirtualCameraModeDynamicParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_METHOD_2_FA4D32DA7B0108D7_OFFSET))(a1, a2);
		}
	};
}
