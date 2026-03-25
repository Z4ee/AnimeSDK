#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_2E0A01364A6D4DE3_OFFSET UNITYSDK_OFFSET(0x17200A00)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_4E543997BDF828B9_OFFSET UNITYSDK_OFFSET(0x17200AB0)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17200A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraConfig_TypeDefinitionIndex = 17096;

	class FiveDimPipeCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2E0A01364A6D4DE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_2E0A01364A6D4DE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E543997BDF828B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipeCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipeCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_METHOD_4_4E543997BDF828B9_OFFSET))(a1, a2);
		}
	};
}
