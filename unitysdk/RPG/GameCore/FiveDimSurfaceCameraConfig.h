#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_CA2D41BF2B514356_OFFSET UNITYSDK_OFFSET(0x1D6DFC80)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_CEBAF6ED928B04B2_OFFSET UNITYSDK_OFFSET(0x1D6DFD00)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DFCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceCameraConfig_TypeDefinitionIndex = 18626;

	class FiveDimSurfaceCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA2D41BF2B514356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_CA2D41BF2B514356_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEBAF6ED928B04B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_METHOD_4_CEBAF6ED928B04B2_OFFSET))(a1, a2);
		}
	};
}
