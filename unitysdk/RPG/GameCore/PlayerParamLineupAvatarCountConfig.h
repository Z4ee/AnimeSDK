#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_5_2883EAEDD3590364_OFFSET UNITYSDK_OFFSET(0x1D351880)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_5_6195F6F66AFFEE28_OFFSET UNITYSDK_OFFSET(0x1D351830)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D351870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarCountConfig_TypeDefinitionIndex = 19337;

	class PlayerParamLineupAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6195F6F66AFFEE28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_5_6195F6F66AFFEE28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2883EAEDD3590364(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_METHOD_5_2883EAEDD3590364_OFFSET))(a1, a2);
		}
	};
}
