#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_METHOD_2_AD2D2B3C6A2880CD_OFFSET UNITYSDK_OFFSET(0x18A8EEB0)
#define RPG_GAMECORE_MAPROTATIONVOLUMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8F1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeConfig_TypeDefinitionIndex = 16107;

	class MapRotationVolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 PoseIndex0; // 0x18
		::System::UInt32 PoseIndex1; // 0x1C
		::System::Boolean IsDisposable; // 0x20
		::System::Boolean IsRemovable; // 0x21
		::System::Boolean IsUnableDeployOnInit; // 0x22
		::System::Boolean AlwaysDeploy; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AD2D2B3C6A2880CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMECONFIG_METHOD_2_AD2D2B3C6A2880CD_OFFSET))(a1, a2);
		}
	};
}
