#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_6_87A5C9C6518A46E8_OFFSET UNITYSDK_OFFSET(0x171CBA70)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_6_A206AFDA1B47728C_OFFSET UNITYSDK_OFFSET(0x171CBC30)
#define RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CBB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRandomGetMasterAvatarIDConfig_TypeDefinitionIndex = 15237;

	class FateParamRandomGetMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_87A5C9C6518A46E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_6_87A5C9C6518A46E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A206AFDA1B47728C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamRandomGetMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMRANDOMGETMASTERAVATARIDCONFIG_METHOD_6_A206AFDA1B47728C_OFFSET))(a1, a2);
		}
	};
}
