#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_47AD5215A6516E28_OFFSET UNITYSDK_OFFSET(0x1975B4F0)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_9FA2E9538F4D1AC9_OFFSET UNITYSDK_OFFSET(0x1975B480)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1975B4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceConfig_TypeDefinitionIndex = 17628;

	class FiveDimSurfaceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean UseDynamicSurface; // 0x10
		::RPG::MVector3 DynamicSize; // 0x14
		::System::Boolean IsCylinderSurface; // 0x20
		::System::Boolean KeepUnloadNavConnectivity; // 0x21
		::System::Boolean ExpandRenderingItemCullingBounds; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FA2E9538F4D1AC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_9FA2E9538F4D1AC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47AD5215A6516E28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_47AD5215A6516E28_OFFSET))(a1, a2);
		}
	};
}
