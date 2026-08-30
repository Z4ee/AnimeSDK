#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPathChangeToTargetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARPATHCHANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE425F0)
#define RPG_GAMECORE_AVATARPATHCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE42880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathChangeConfig_TypeDefinitionIndex = 24125;

	class AvatarPathChangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::String* LightEffectPath; // 0x18
		::System::UInt32 EnterMotionID; // 0x20
		::System::UInt32 LoopMotionID; // 0x24
		::System::Single MainLightDirOffsetX; // 0x28
		::System::Single MainLightDirOffsetY; // 0x2C
		::Il2CppArray<::RPG::GameCore::AvatarPathChangeToTargetConfig*>* PerformanceConfigs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPathChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPathChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
