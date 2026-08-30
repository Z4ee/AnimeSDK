#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_ADE92D10F6A36F8B_OFFSET UNITYSDK_OFFSET(0x1D1067C0)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_C84FC0E9E0ABECD6_OFFSET UNITYSDK_OFFSET(0x1D106800)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1067F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceConfig_TypeDefinitionIndex = 18321;

	class FiveDimSurfaceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean UseDynamicSurface; // 0x10
		::RPG::MVector3 DynamicSize; // 0x14
		::RPG::MVector3 DynamicCenter; // 0x20
		::System::Boolean IsCylinderSurface; // 0x2C
		::System::Boolean KeepUnloadNavConnectivity; // 0x2D
		::System::Boolean ExpandRenderingItemCullingBounds; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ADE92D10F6A36F8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_ADE92D10F6A36F8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C84FC0E9E0ABECD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_C84FC0E9E0ABECD6_OFFSET))(a1, a2);
		}
	};
}
