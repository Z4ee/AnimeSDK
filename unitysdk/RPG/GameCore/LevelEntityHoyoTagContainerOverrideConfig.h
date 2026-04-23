#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelHoyoTagOverrideMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A40DE0)
#define RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A40F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityHoyoTagContainerOverrideConfig_TypeDefinitionIndex = 16324;

	class LevelEntityHoyoTagContainerOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelHoyoTagOverrideMode Mode; // 0x10
		::RPG::GameCore::HoyoTagContainer* OverrideTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* AdditiveTags; // 0x20
		::RPG::GameCore::HoyoTagContainer* SubtractiveTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
