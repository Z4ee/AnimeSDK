#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_5_0E63D9A00DAC44F6_OFFSET UNITYSDK_OFFSET(0x1D7AD840)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_5_18A01B3755CBEF52_OFFSET UNITYSDK_OFFSET(0x1D7AD890)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AD880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarConsumeHpCountConfig_TypeDefinitionIndex = 19338;

	class PlayerParamLineupAvatarConsumeHpCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0E63D9A00DAC44F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_5_0E63D9A00DAC44F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_18A01B3755CBEF52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_METHOD_5_18A01B3755CBEF52_OFFSET))(a1, a2);
		}
	};
}
