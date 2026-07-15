#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_METHOD_2_390E4AC85311BFAB_OFFSET UNITYSDK_OFFSET(0x1BEA08A0)
#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA0B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapSurfaceConfig_TypeDefinitionIndex = 17790;

	class FiveDimMapSurfaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SurfaceID; // 0x10
		::RPG::MVector2 PositionInFace; // 0x14
		::System::Boolean IsCylinder; // 0x1C
		::System::Single CylinderUnitAngle; // 0x20
		::System::Single CylinderStartOffsetAngle; // 0x24
		::System::Single CylinderRadius; // 0x28
		::System::Single CylinderYMin; // 0x2C
		::System::Single CylinderYMax; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_390E4AC85311BFAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMapSurfaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMapSurfaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_METHOD_2_390E4AC85311BFAB_OFFSET))(a1, a2);
		}
	};
}
