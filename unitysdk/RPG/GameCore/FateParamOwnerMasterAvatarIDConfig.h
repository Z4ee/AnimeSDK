#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_F5ABBFCE6EECD076_OFFSET UNITYSDK_OFFSET(0x1D08E8C0)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_FFE80165B70C7AD2_OFFSET UNITYSDK_OFFSET(0x1D08E910)
#define RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08E900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOwnerMasterAvatarIDConfig_TypeDefinitionIndex = 16453;

	class FateParamOwnerMasterAvatarIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F5ABBFCE6EECD076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_F5ABBFCE6EECD076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FFE80165B70C7AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOwnerMasterAvatarIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOWNERMASTERAVATARIDCONFIG_METHOD_6_FFE80165B70C7AD2_OFFSET))(a1, a2);
		}
	};
}
