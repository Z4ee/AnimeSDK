#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_5561278D96EB854E_OFFSET UNITYSDK_OFFSET(0x18921980)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_C58CBBD2253122E7_OFFSET UNITYSDK_OFFSET(0x18921910)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18921960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceConfig_TypeDefinitionIndex = 17602;

	class FiveDimSurfaceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCylinderSurface; // 0x10
		::System::Boolean KeepUnloadNavConnectivity; // 0x11
		::System::Boolean ExpandRenderingItemCullingBounds; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C58CBBD2253122E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_C58CBBD2253122E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5561278D96EB854E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_METHOD_3_5561278D96EB854E_OFFSET))(a1, a2);
		}
	};
}
