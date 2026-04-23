#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C5CC0)
#define RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186C5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathChangeToTargetConfig_TypeDefinitionIndex = 23425;

	class AvatarPathChangeToTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetAvatarID; // 0x10
		::System::UInt32 TargetFromMotionID; // 0x14
		::System::UInt32 CurrentToMotionID; // 0x18
		::System::String* ChangeEffectPath; // 0x20
		::System::Single SwitchModelTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPathChangeToTargetConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPathChangeToTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHCHANGETOTARGETCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
