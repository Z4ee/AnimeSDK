#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_METHOD_2_B41333CE3D3840B3_OFFSET UNITYSDK_OFFSET(0x18D143E0)
#define RPG_GAMECORE_ROGUEDYNAMICARGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D14420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDynamicArgConfig_TypeDefinitionIndex = 18803;

	class RogueDynamicArgConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDYNAMICARGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B41333CE3D3840B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDynamicArgConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDynamicArgConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDYNAMICARGCONFIG_METHOD_2_B41333CE3D3840B3_OFFSET))(a1, a2);
		}
	};
}
