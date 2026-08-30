#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectSurfaceOverride; }

#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG_METHOD_2_9D865A2EDEA39E2F_OFFSET UNITYSDK_OFFSET(0x1D054AD0)
#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D054B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectSurfaceTypeConfig_TypeDefinitionIndex = 16313;

	class EffectSurfaceTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EffectSurfaceOverride*>* EffectOverrideList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D865A2EDEA39E2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectSurfaceTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectSurfaceTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG_METHOD_2_9D865A2EDEA39E2F_OFFSET))(a1, a2);
		}
	};
}
