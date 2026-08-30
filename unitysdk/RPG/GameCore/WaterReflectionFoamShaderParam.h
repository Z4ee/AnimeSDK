#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_METHOD_2_5F4CD61893A3A957_OFFSET UNITYSDK_OFFSET(0x1D6B0150)
#define RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B02F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaterReflectionFoamShaderParam_TypeDefinitionIndex = 16535;

	class WaterReflectionFoamShaderParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector2 MaskTiling; // 0x10
		::RPG::MVector2 MaskTilingSpeed; // 0x18
		::System::Single Extent; // 0x20
		::System::Single Atten; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F4CD61893A3A957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaterReflectionFoamShaderParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaterReflectionFoamShaderParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_METHOD_2_5F4CD61893A3A957_OFFSET))(a1, a2);
		}
	};
}
