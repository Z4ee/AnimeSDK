#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_5D98426E2BFF5A1F_OFFSET UNITYSDK_OFFSET(0x1D6CFCD0)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_F665CCA758C8AEF3_OFFSET UNITYSDK_OFFSET(0x1D6CFC50)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CFCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraConfig_TypeDefinitionIndex = 18628;

	class FiveDimPipeCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F665CCA758C8AEF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_F665CCA758C8AEF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D98426E2BFF5A1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_5D98426E2BFF5A1F_OFFSET))(a1, a2);
		}
	};
}
