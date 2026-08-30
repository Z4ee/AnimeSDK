#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_METHOD_2_08362A704FEF23B6_OFFSET UNITYSDK_OFFSET(0x1DCA7E20)
#define RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceMapDefinitionConfig_TypeDefinitionIndex = 18306;

	class FiveDimSurfaceMapDefinitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_08362A704FEF23B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceMapDefinitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceMapDefinitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_METHOD_2_08362A704FEF23B6_OFFSET))(a1, a2);
		}
	};
}
