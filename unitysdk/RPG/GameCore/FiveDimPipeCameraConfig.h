#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_4E543997BDF828B9_OFFSET UNITYSDK_OFFSET(0x1D86FF90)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_A5B7AB63B3CCF6C4_OFFSET UNITYSDK_OFFSET(0x1D86FF10)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraConfig_TypeDefinitionIndex = 18417;

	class FiveDimPipeCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A5B7AB63B3CCF6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_A5B7AB63B3CCF6C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E543997BDF828B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_4E543997BDF828B9_OFFSET))(a1, a2);
		}
	};
}
