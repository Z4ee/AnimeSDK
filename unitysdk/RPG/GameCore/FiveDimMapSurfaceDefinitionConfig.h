#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_METHOD_2_79AB125D8B5184E8_OFFSET UNITYSDK_OFFSET(0x1D8690A0)
#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8690E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapSurfaceDefinitionConfig_TypeDefinitionIndex = 18307;

	class FiveDimMapSurfaceDefinitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79AB125D8B5184E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMapSurfaceDefinitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMapSurfaceDefinitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_METHOD_2_79AB125D8B5184E8_OFFSET))(a1, a2);
		}
	};
}
