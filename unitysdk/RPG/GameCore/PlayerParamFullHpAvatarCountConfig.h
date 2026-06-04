#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_979C82B1B615A5C6_OFFSET UNITYSDK_OFFSET(0x19A38DD0)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_98805422CF4FB45A_OFFSET UNITYSDK_OFFSET(0x19A38C10)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A38D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamFullHpAvatarCountConfig_TypeDefinitionIndex = 18538;

	class PlayerParamFullHpAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_98805422CF4FB45A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_98805422CF4FB45A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_979C82B1B615A5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_979C82B1B615A5C6_OFFSET))(a1, a2);
		}
	};
}
