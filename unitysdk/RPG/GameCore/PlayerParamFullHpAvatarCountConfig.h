#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_8AE4458620764B6A_OFFSET UNITYSDK_OFFSET(0x1D351760)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_979C82B1B615A5C6_OFFSET UNITYSDK_OFFSET(0x1D3517B0)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3517A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamFullHpAvatarCountConfig_TypeDefinitionIndex = 19336;

	class PlayerParamFullHpAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8AE4458620764B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_8AE4458620764B6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_979C82B1B615A5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_METHOD_5_979C82B1B615A5C6_OFFSET))(a1, a2);
		}
	};
}
