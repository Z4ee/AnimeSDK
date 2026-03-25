#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_1BD8E09EDC5834BE_OFFSET UNITYSDK_OFFSET(0x171CB530)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_FFE80165B70C7AD2_OFFSET UNITYSDK_OFFSET(0x171CB6F0)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CB630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOwnerMasterAvatarIDConfig_TypeDefinitionIndex = 15234;

	class FateParamOwnerMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1BD8E09EDC5834BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_1BD8E09EDC5834BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FFE80165B70C7AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_FFE80165B70C7AD2_OFFSET))(a1, a2);
		}
	};
}
