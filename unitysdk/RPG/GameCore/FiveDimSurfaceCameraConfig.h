#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_45E4D3DADB73B00C_OFFSET UNITYSDK_OFFSET(0x18921380)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_8B8E4347B4FEAF0A_OFFSET UNITYSDK_OFFSET(0x189212D0)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18921340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceCameraConfig_TypeDefinitionIndex = 17693;

	class FiveDimSurfaceCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B8E4347B4FEAF0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_8B8E4347B4FEAF0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45E4D3DADB73B00C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_45E4D3DADB73B00C_OFFSET))(a1, a2);
		}
	};
}
